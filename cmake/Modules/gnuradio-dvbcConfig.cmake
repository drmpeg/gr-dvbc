find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_DVBC gnuradio-dvbc)

FIND_PATH(
    GR_DVBC_INCLUDE_DIRS
    NAMES gnuradio/dvbc/api.h
    HINTS $ENV{DVBC_DIR}/include
        ${PC_DVBC_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_DVBC_LIBRARIES
    NAMES gnuradio-dvbc
    HINTS $ENV{DVBC_DIR}/lib
        ${PC_DVBC_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-dvbcTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_DVBC DEFAULT_MSG GR_DVBC_LIBRARIES GR_DVBC_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_DVBC_LIBRARIES GR_DVBC_INCLUDE_DIRS)
