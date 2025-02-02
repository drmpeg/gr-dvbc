/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(dvbc_config.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b2a04e67bfeb44a83a638cffa32ad242)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dvbc/dvbc_config.h>
// pydoc.h is automatically generated in the build directory
#include <dvbc_config_pydoc.h>

void bind_dvbc_config(py::module& m)
{


    py::enum_<::gr::dvbc::dvbc_constellation_t>(m,"dvbc_constellation_t")
        .value("MOD_16QAM", ::gr::dvbc::dvbc_constellation_t::MOD_16QAM) // 0
        .value("MOD_32QAM", ::gr::dvbc::dvbc_constellation_t::MOD_32QAM) // 1
        .value("MOD_64QAM", ::gr::dvbc::dvbc_constellation_t::MOD_64QAM) // 2
        .value("MOD_128QAM", ::gr::dvbc::dvbc_constellation_t::MOD_128QAM) // 3
        .value("MOD_256QAM", ::gr::dvbc::dvbc_constellation_t::MOD_256QAM) // 4
        .export_values()
    ;

    py::implicitly_convertible<int, ::gr::dvbc::dvbc_constellation_t>();



}








