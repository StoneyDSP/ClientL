/*******************************************************************************
 * @file ClientLConfig.h
 * @author Nathan J. Hood ( @StoneyDSP )
 * @brief
 * @version 1.0.0.0
 * @date
 *
 * @copyright Copyright (c) 2022 @StoneyDSP
 *
 *******************************************************************************
*/

#pragma once

#ifndef CLIENTL_CONFIG_H_INCLUDED
#define CLIENTL_CONFIG_H_INCLUDED

/**
 * @brief Defined project configuration information.
 *
 */

#define CMAKE_PROJECT_VENDOR "StoneyDSP"
#define PROJECT_VENDOR "StoneyDSP"
#define PROJECT_NAME "ClientL"
#define PROJECT_DESCRIPTION "A generic 'My first client/server project' connecting Windows and Ubuntu terminals using WSL and VSCode."
#define PROJECT_VERSION "0.1.0.0"
#define PROJECT_HOMEPAGE_URL "https://github.com//ClientL"

#define CMAKE_VERSION "3.22.1"
/* #undef CMAKE_CONFIG_TYPE */
#define CMAKE_CONFIGURATION_TYPES "Debug;Release;RelWithDebInfo;MinSizeRel"
#define CMAKE_TOOLCHAIN_FILE "/home/stoneydsp/vcpkg/scripts/buildsystems/vcpkg.cmake"
#define CMAKE_GENERATOR "Ninja Multi-Config"

/* #undef USE_FOO */
/* #undef USE_TESTS */
#define BUILD_SHARED_LIBS
/* #undef USE_EXTERN */
#define GIT_SUBMODULE
#define USE_VCPKG
/* #undef USE_FOLDERS */

// if you are building in-source, this is the same as CMAKE_SOURCE_DIR, otherwise
// this is the top level directory of your build tree
#define CMAKE_BINARY_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// if you are building in-source, this is the same as CMAKE_CURRENT_SOURCE_DIR, otherwise this
// is the directory where the compiled or generated files from the current CMakeLists.txt will go to
#define CMAKE_CURRENT_BINARY_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// this is the directory, from which cmake was started, i.e. the top level source directory
#define CMAKE_SOURCE_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// this is the directory where the currently processed CMakeLists.txt is located in
#define CMAKE_CURRENT_SOURCE_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// contains the full path to the top level directory of your build tree
#define PROJECT_BINARY_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// contains the full path to the root of your project source directory,
// i.e. to the nearest directory where CMakeLists.txt contains the PROJECT() command
#define PROJECT_SOURCE_DIR "/home/stoneydsp/Development/StoneyDSP/ClientL"

// set this variable to specify a common place where CMake should put all executable files
// (instead of CMAKE_CURRENT_BINARY_DIR)
/* #undef EXECUTABLE_OUTPUT_PATH */

// set this variable to specify a common place where CMake should put all libraries
// (instead of CMAKE_CURRENT_BINARY_DIR)
/* #undef LIBRARY_OUTPUT_PATH */

// tell CMake to search first in directories listed in CMAKE_MODULE_PATH
// when you use FIND_PACKAGE() or INCLUDE()
#define CMAKE_MODULE_PATH "/home/stoneydsp/Development/StoneyDSP/ClientL/support/cmake;/scripts"

// this is the complete path of the cmake which runs currently (e.g. /usr/local/bin/cmake)
#define CMAKE_COMMAND "/usr/bin/cmake"

// this is the CMake installation directory
#define CMAKE_ROOT "/usr/share/cmake-3.22"

//this is the filename including the complete path of the file where this variable is used.
#define CMAKE_CURRENT_LIST_FILE "/home/stoneydsp/Development/StoneyDSP/ClientL/CMakeLists.txt"

// this is linenumber where the variable is used
/* #undef CMAKE_CURRENT_LIST_LINE */

// this is used when searching for include files e.g. using the FIND_PATH() command.
/* #undef CMAKE_INCLUDE_PATH */

// this is used when searching for libraries e.g. using the FIND_LIBRARY() command.
#define CMAKE_LIBRARY_PATH "/home/stoneydsp/Development/StoneyDSP/ClientL/installed/x64-linux/debug/lib/manual-link;/home/stoneydsp/Development/StoneyDSP/ClientL/installed/x64-linux/lib/manual-link"

// the complete system name, e.g. "Linux-2.4.22", "FreeBSD-5.4-RELEASE" or "Windows 5.1"
#define CMAKE_SYSTEM "Linux-5.15.68.1-microsoft-standard-WSL2"

// the short system name, e.g. "Linux", "FreeBSD" or "Windows"
#define CMAKE_SYSTEM_NAME "Linux"

// only the version part of CMAKE_SYSTEM
#define CMAKE_SYSTEM_VERSION "5.15.68.1-microsoft-standard-WSL2"

// the processor name (e.g. "Intel(R) Pentium(R) M processor 2.00GHz")
#define CMAKE_SYSTEM_PROCESSOR "x86_64"

// is TRUE on all UNIX-like OS's, including Apple OS X and CygWin
//#define UNIX

// is TRUE on Windows, including CygWin
/* #undef WIN32 */

// is TRUE on Apple OS X
/* #undef APPLE */

// is TRUE when using the MinGW compiler in Windows
/* #undef MINGW */

// is TRUE on Windows when using the CygWin version of cmake
/* #undef CYGWIN */

// is TRUE on Windows when using a Borland compiler
/* #undef BORLAND */

// is TRUE on Windows when using a Borland compiler
/* #undef _DEBUG */

// is TRUE on Windows when using a Borland compiler
/* #undef NDEBUG */

// Microsoft compiler
/* #undef MSVC */
/* #undef MSVC_IDE */
/* #undef MSVC60 */
/* #undef MSVC70 */
/* #undef MSVC71 */
/* #undef MSVC80 */
/* #undef CMAKE_COMPILER_2005 */
/* #undef MSVC90 */
/* #undef MSVC10 */


// set this to true if you don't want to rebuild the object files if the rules have changed,
// but not the actual source files or headers (e.g. if you changed the some compiler switches)
/* #undef CMAKE_SKIP_RULE_DEPENDENCY */

// since CMake 2.1 the install rule depends on all, i.e. everything will be built before installing.
// If you don't like this, set this one to true.
/* #undef CMAKE_SKIP_INSTALL_ALL_DEPENDENCY */

// If set, runtime paths are not added when using shared libraries. Default it is set to OFF
/* #undef CMAKE_SKIP_RPATH */

// set this to true if you are using makefiles and want to see the full compile and link
// commands instead of only the shortened ones
/* #undef CMAKE_VERBOSE_MAKEFILE */

// this will cause CMake to not put in the rules that re-run CMake. This might be useful if
// you want to use the generated build files on another machine.
/* #undef CMAKE_SUPPRESS_REGENERATION */

// A simple way to get switches to the compiler is to use ADD_DEFINITIONS().
// But there are also two variables exactly for this purpose:

// the compiler flags for compiling C sources
/* #undef CMAKE_C_FLAGS */

// the compiler flags for compiling C++ sources
/* #undef CMAKE_CXX_FLAGS */

// Choose the type of build.  Example: SET(CMAKE_BUILD_TYPE Debug)
/* #undef CMAKE_BUILD_TYPE */

// the compiler used for C files
#define CMAKE_C_COMPILER "/usr/bin/gcc"

// the compiler used for C++ files
#define CMAKE_CXX_COMPILER "/usr/bin/g++"

// if the compiler is a variant of gcc, this should be set to 1
#define CMAKE_COMPILER_IS_GNUCC "1"

// if the compiler is a variant of g++, this should be set to 1
#define CMAKE_COMPILER_IS_GNUCXX "1"

// the tools for creating libraries
#define CMAKE_AR "/usr/bin/ar"
#define CMAKE_RANLIB "/usr/bin/ranlib"

#endif // CLIENTL_CONFIG_H_INCLUDED
