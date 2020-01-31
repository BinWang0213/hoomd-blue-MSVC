#pragma once

// Copyright (c) 2009-2019 The Regents of the University of Michigan
// This file is part of the HOOMD-blue project, released under the BSD 3-Clause License.

#ifndef __HOOMD_VERSION_H__
#define __HOOMD_VERSION_H__

// Full text HOOMD version string
#define HOOMD_VERSION "${HOOMD_VERSION}"
// Full text HOOMD version string
#define HOOMD_VERSION_LONG "${HOOMD_VERSION_LONG}"
// Text string containing the date this build was configured
#define COMPILE_DATE "${COMPILE_DATE}"
// Set to the src dir to be used as the root to read data files from
#define HOOMD_SOURCE_DIR "${HOOMD_SOURCE_DIR}"
// Set to the binary dir
#define HOOMD_BINARY_DIR "${HOOMD_BINARY_DIR}"
// Set the installation directory as a hint for locating libraries
#define HOOMD_INSTALL_PREFIX "${HOOMD_INSTALL_PREFIX}"
// Current git refspec checked out
#define HOOMD_GIT_REFSPEC "${HOOMD_GIT_REFSPEC}"
// Current git hash
#define HOOMD_GIT_SHA1 "${HOOMD_GIT_SHA1}"

// hoomd major version
#define HOOMD_VERSION_MAJOR 111
// hoomd minor version
#define HOOMD_VERSION_MINOR 222
// hoomd patch version
#define HOOMD_VERSION_PATCH 333

// CUDA version
#define CUDA_ARCH 75

#include <string>

/*! \file HOOMDVersion.h.in
	\brief Functions and variables for printing compile time build information of HOOMD
	\details This file is configured to HOOMDVersion.h by CMake, that is the file that should
		be included in any code needing it.

	\ingroup utils
*/

//! Formats the HOOMD compile flags as a strong
std::string hoomd_compile_flags();

//! Formats the HOOMD version info header as string
std::string output_version_info();

#endif
