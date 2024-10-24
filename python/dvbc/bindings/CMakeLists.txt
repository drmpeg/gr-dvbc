# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT dvbc_sources)
    message(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT dvbc_sources)

########################################################################
# Check for pygccxml
########################################################################
gr_python_check_module_raw("pygccxml" "import pygccxml" PYGCCXML_FOUND)

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND dvbc_python_files
    modulator_bc_python.cc
    symbolmapper_bb_python.cc
    dvbc_config_python.cc python_bindings.cc)

gr_pybind_make_oot(dvbc ../../.. gr::dvbc "${dvbc_python_files}")

# copy bindings extension for use in QA test module
add_custom_command(
    TARGET dvbc_python
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:dvbc_python>
            ${PROJECT_BINARY_DIR}/test_modules/gnuradio/dvbc/)

install(
    TARGETS dvbc_python
    DESTINATION ${GR_PYTHON_DIR}/gnuradio/dvbc
    COMPONENT pythonapi)
