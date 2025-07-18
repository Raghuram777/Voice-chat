Package: boost-headers:x64-windows@1.88.0

**Host Environment**

- Host: x64-windows
- Compiler: MSVC 19.40.33813.0
-    vcpkg-tool version: 2025-07-16-d6c019e723df46cb8c36360e4174b111455567d3
    vcpkg-scripts version: 4002e3abc6 2025-07-17 (18 hours ago)

**To Reproduce**

`vcpkg install boost-asio:x64-windows`

**Failure logs**

```
Downloading https://github.com/boostorg/headers/archive/boost-1.88.0.tar.gz -> boostorg-headers-boost-1.88.0.tar.gz
Successfully downloaded boostorg-headers-boost-1.88.0.tar.gz
-- Extracting source D:/voice-chat/vcpkg/downloads/boostorg-headers-boost-1.88.0.tar.gz
-- Using source at D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean
-- Configuring x64-windows
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/ninja.exe -v
    Working Directory: D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/vcpkg-parallel-configure
    Error code: 1
    See logs for more information:
      D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-rel-CMakeCache.txt.log
      D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-rel-CMakeConfigureLog.yaml.log
      D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-out.log

Call Stack (most recent call first):
  D:/voice-chat/custom-vcpkg-root/x64-windows/share/vcpkg-cmake/vcpkg_cmake_configure.cmake:269 (vcpkg_execute_required_process)
  D:/voice-chat/custom-vcpkg-root/x64-windows/share/vcpkg-boost/boost-install.cmake:54 (vcpkg_cmake_configure)
  ports/boost-headers/portfile.cmake:12 (boost_configure_and_install)
  scripts/ports.cmake:206 (include)



```

<details><summary>D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-out.log</summary>

```
[1/1] "C:/Program Files/CMake/bin/cmake.exe" -E chdir ".." "C:/Program Files/CMake/bin/cmake.exe" "D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/voice-chat/vcpkg/packages/boost-headers_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DBOOST_INCLUDE_LIBRARIES=headers" "-DBOOST_RUNTIME_LINK=dynamic" "-DBOOST_INSTALL_INCLUDE_SUBDIR=" "-DCMAKE_MSVC_DEBUG_INFORMATION_FORMAT=" "-DCMAKE_MAKE_PROGRAM=D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/ninja.exe" "-DBUILD_SHARED_LIBS=ON" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/voice-chat/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/voice-chat/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/voice-chat/vcpkg" "-D_VCPKG_INSTALLED_DIR=D:/voice-chat/custom-vcpkg-root" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: ../CMakeCache.txt 
"C:/Program Files/CMake/bin/cmake.exe" -E chdir ".." "C:/Program Files/CMake/bin/cmake.exe" "D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=D:/voice-chat/vcpkg/packages/boost-headers_x64-windows" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DBOOST_INCLUDE_LIBRARIES=headers" "-DBOOST_RUNTIME_LINK=dynamic" "-DBOOST_INSTALL_INCLUDE_SUBDIR=" "-DCMAKE_MSVC_DEBUG_INFORMATION_FORMAT=" "-DCMAKE_MAKE_PROGRAM=D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/ninja.exe" "-DBUILD_SHARED_LIBS=ON" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=D:/voice-chat/vcpkg/scripts/toolchains/windows.cmake" "-DVCPKG_TARGET_TRIPLET=x64-windows" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=v143" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=D:/voice-chat/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=D:/voice-chat/vcpkg" "-D_VCPKG_INSTALLED_DIR=D:/voice-chat/custom-vcpkg-root" "-DVCPKG_MANIFEST_INSTALL=OFF"
CMake Error at C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:1040 (file):
  file STRINGS file
  "D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/4.1.0-rc1/CompilerIdCXX/CMakeCXXCompilerId.exe"
  cannot be read.
Call Stack (most recent call first):
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:13 (CMAKE_DETERMINE_COMPILER_ID_CHECK)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:125 (CMAKE_DETERMINE_COMPILER_ID)
  CMakeLists.txt:2 (project)


CMake Error at C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:1154 (file):
  file failed to open for reading (No such file or directory):

    D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/4.1.0-rc1/CompilerIdCXX/CMakeCXXCompilerId.exe
Call Stack (most recent call first):
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:13 (CMAKE_DETERMINE_COMPILER_ID_CHECK)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:125 (CMAKE_DETERMINE_COMPILER_ID)
  CMakeLists.txt:2 (project)


CMake Warning (dev) at C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:1156 (math):
  Unexpected character in expression at position 2: x

Call Stack (most recent call first):
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:13 (CMAKE_DETERMINE_COMPILER_ID_CHECK)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:125 (CMAKE_DETERMINE_COMPILER_ID)
  CMakeLists.txt:2 (project)
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Error at C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:1157 (file):
  file failed to open for reading (No such file or directory):

    D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/4.1.0-rc1/CompilerIdCXX/CMakeCXXCompilerId.exe
Call Stack (most recent call first):
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:13 (CMAKE_DETERMINE_COMPILER_ID_CHECK)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:125 (CMAKE_DETERMINE_COMPILER_ID)
  CMakeLists.txt:2 (project)


CMake Error at C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:1206 (file):
  file failed to open for reading (No such file or directory):

    D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/4.1.0-rc1/CompilerIdCXX/CMakeCXXCompilerId.exe
Call Stack (most recent call first):
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:13 (CMAKE_DETERMINE_COMPILER_ID_CHECK)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)
  C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:125 (CMAKE_DETERMINE_COMPILER_ID)
  CMakeLists.txt:2 (project)


-- The CXX compiler identification is MSVC 19.40.33813.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Boost: using versioned layout: include, bin, lib, lib/cmake
-- Boost: Release build, shared libraries, MPI OFF, Python OFF, testing OFF
-- Boost: libraries included: headers
-- Configuring incomplete, errors occurred!
ninja: build stopped: subcommand failed.
```
</details>

<details><summary>D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-rel-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: d:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel
# It was generated by CMake: C:/Program Files/CMake/bin/cmake.exe
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//Build and enable installation of Boost.MPI and its dependents
// (requires MPI, CMake 3.10)
BOOST_ENABLE_MPI:BOOL=OFF

//Build and enable installation of Boost.Python and its dependents
// (requires Python, CMake 3.14)
BOOST_ENABLE_PYTHON:BOOL=OFF

//List of libraries to exclude from build
BOOST_EXCLUDE_LIBRARIES:STRING=

//List of libraries to build (default: all but excluded and incompatible)
BOOST_INCLUDE_LIBRARIES:STRING=headers

//List of libraries with incompatible CMakeLists.txt files
BOOST_INCOMPATIBLE_LIBRARIES:STRING=

//Installation directory for CMake configuration files
BOOST_INSTALL_CMAKEDIR:STRING=lib/cmake

//Header subdirectory when layout is versioned
BOOST_INSTALL_INCLUDE_SUBDIR:STRING=

//Installation layout (versioned, tagged, or system)
BOOST_INSTALL_LAYOUT:STRING=versioned

//Runtime library selection for the MS ABI (shared or static)
BOOST_RUNTIME_LINK:STRING=dynamic

//Build output directory
BOOST_STAGEDIR:STRING=D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/stage

//Build shared libraries
BUILD_SHARED_LIBS:BOOL=ON

//Build the testing tree.
BUILD_TESTING:BOOL=OFF

//Value Computed by CMake
Boost_BINARY_DIR:STATIC=D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel

//Value Computed by CMake
Boost_IS_TOP_LEVEL:STATIC=ON

//Value Computed by CMake
Boost_SOURCE_DIR:STATIC=D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean

//Path to a program.
CMAKE_AR:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/lib.exe

//Choose the type of build, options are: None Debug Release RelWithDebInfo
// MinSizeRel ...
CMAKE_BUILD_TYPE:STRING=Release

CMAKE_CROSSCOMPILING:STRING=OFF

//CXX compiler
CMAKE_CXX_COMPILER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.exe

CMAKE_CXX_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP '

CMAKE_CXX_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=/O1 /Ob1 /DNDEBUG

CMAKE_CXX_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=/O2 /Ob1 /DNDEBUG

//Libraries linked by default with all C++ applications.
CMAKE_CXX_STANDARD_LIBRARIES:STRING=kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib

//Symbol visibility for C++
CMAKE_CXX_VISIBILITY_PRESET:STRING=hidden

CMAKE_C_FLAGS:STRING=' /nologo /DWIN32 /D_WINDOWS /utf-8 /MP '

CMAKE_C_FLAGS_DEBUG:STRING='/MDd /Z7 /Ob0 /Od /RTC1 '

CMAKE_C_FLAGS_RELEASE:STRING='/MD /O2 /Oi /Gy /DNDEBUG /Z7 '

//Symbol visibility for C
CMAKE_C_VISIBILITY_PRESET:STRING=hidden

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//Enable/Disable output of build database during the build.
CMAKE_EXPORT_BUILD_DATABASE:BOOL=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/pkgRedirects

CMAKE_INSTALL_BINDIR:PATH=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

CMAKE_INSTALL_LIBDIR:PATH=lib

//Program executables (libexec)
CMAKE_INSTALL_LIBEXECDIR:PATH=libexec

//Locale-dependent data (DATAROOTDIR/locale)
CMAKE_INSTALL_LOCALEDIR:PATH=

//Modifiable single-machine data (var)
CMAKE_INSTALL_LOCALSTATEDIR:PATH=var

//Man documentation (DATAROOTDIR/man)
CMAKE_INSTALL_MANDIR:PATH=

//C header files for non-gcc (/usr/include)
CMAKE_INSTALL_OLDINCLUDEDIR:PATH=/usr/include

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=D:/voice-chat/vcpkg/packages/boost-headers_x64-windows

//Run-time variable data (LOCALSTATEDIR/run)
CMAKE_INSTALL_RUNSTATEDIR:PATH=

//System admin executables (sbin)
CMAKE_INSTALL_SBINDIR:PATH=sbin

//Modifiable architecture-independent data (com)
CMAKE_INSTALL_SHAREDSTATEDIR:PATH=com

//Read-only single-machine data (etc)
CMAKE_INSTALL_SYSCONFDIR:PATH=etc

//No help, variable specified on the command line.
CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP:UNINITIALIZED=TRUE

//Path to a program.
CMAKE_LINKER:FILEPATH=C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/link.exe

//No help, variable specified on the command line.
CMAKE_MAKE_PROGRAM:UNINITIALIZED=D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/ninja.exe

//Flags used by the linker during the creation of modules during
// all build types.
CMAKE_MODULE_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of modules during
// DEBUG builds.
CMAKE_MODULE_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of modules during
// MINSIZEREL builds.
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_MODULE_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of modules during
// RELWITHDEBINFO builds.
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//No help, variable specified on the command line.
CMAKE_MSVC_DEBUG_INFORMATION_FORMAT:UNINITIALIZED=

CMAKE_MSVC_RUNTIME_LIBRARY:STRING=MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>

//Path to a program.
CMAKE_MT:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/mt.exe

//Override policy version for cmake_minimum_required calls.
CMAKE_POLICY_VERSION_MINIMUM:STRING=3.5

//Value Computed by CMake
CMAKE_PROJECT_COMPAT_VERSION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_DESCRIPTION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_HOMEPAGE_URL:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_NAME:STATIC=Boost

//Value Computed by CMake
CMAKE_PROJECT_VERSION:STATIC=1.88.0

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MAJOR:STATIC=1

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MINOR:STATIC=88

//Value Computed by CMake
CMAKE_PROJECT_VERSION_PATCH:STATIC=0

//Value Computed by CMake
CMAKE_PROJECT_VERSION_TWEAK:STATIC=

//RC compiler
CMAKE_RC_COMPILER:FILEPATH=C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.exe

CMAKE_RC_FLAGS:STRING=-c65001 /DWIN32

//Flags for Windows Resource Compiler during DEBUG builds.
CMAKE_RC_FLAGS_DEBUG:STRING=-D_DEBUG

//Flags for Windows Resource Compiler during MINSIZEREL builds.
CMAKE_RC_FLAGS_MINSIZEREL:STRING=

//Flags for Windows Resource Compiler during RELEASE builds.
CMAKE_RC_FLAGS_RELEASE:STRING=

//Flags for Windows Resource Compiler during RELWITHDEBINFO builds.
CMAKE_RC_FLAGS_RELWITHDEBINFO:STRING=

//Flags used by the linker during the creation of shared libraries
// during all build types.
CMAKE_SHARED_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the linker during the creation of shared libraries
// during DEBUG builds.
CMAKE_SHARED_LINKER_FLAGS_DEBUG:STRING=/nologo    /debug /INCREMENTAL

//Flags used by the linker during the creation of shared libraries
// during MINSIZEREL builds.
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL:STRING=/INCREMENTAL:NO

CMAKE_SHARED_LINKER_FLAGS_RELEASE:STRING='/nologo /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF  '

//Flags used by the linker during the creation of shared libraries
// during RELWITHDEBINFO builds.
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO:STRING=/debug /INCREMENTAL

//If set, runtime paths are not added when installing shared libraries,
// but are added when building.
CMAKE_SKIP_INSTALL_RPATH:BOOL=NO

//If set, runtime paths are not added when using shared libraries.
CMAKE_SKIP_RPATH:BOOL=NO

//Flags used by the archiver during the creation of static libraries
// during all build types.
CMAKE_STATIC_LINKER_FLAGS:STRING=/machine:x64

//Flags used by the archiver during the creation of static libraries
// during DEBUG builds.
CMAKE_STATIC_LINKER_FLAGS_DEBUG:STRING=/nologo

//Flags used by the archiver during the creation of static libraries
// during MINSIZEREL builds.
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the archiver during the creation of static libraries
// during RELEASE builds.
CMAKE_STATIC_LINKER_FLAGS_RELEASE:STRING=/nologo

//Flags used by the archiver during the creation of static libraries
// during RELWITHDEBINFO builds.
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO:STRING=

CMAKE_SYSTEM_NAME:STRING=Windows

CMAKE_SYSTEM_PROCESSOR:STRING=AMD64

CMAKE_SYSTEM_VERSION:STRING=10.0.26100

//The CMake toolchain file
CMAKE_TOOLCHAIN_FILE:FILEPATH=D:/voice-chat/vcpkg/scripts/buildsystems/vcpkg.cmake

//If this value is on, makefiles will be generated without the
// .SILENT directive, and all commands will be echoed to the console
// during the make.  This is useful for debugging only. With Visual
// Studio IDE projects all commands are done without /nologo.
CMAKE_VERBOSE_MAKEFILE:BOOL=ON

//Inline function have hidden visibility
CMAKE_VISIBILITY_INLINES_HIDDEN:BOOL=ON

//No help, variable specified on the command line.
FETCHCONTENT_FULLY_DISCONNECTED:UNINITIALIZED=ON

//Automatically copy dependencies into the output directory for
// executables.
VCPKG_APPLOCAL_DEPS:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_CHAINLOAD_TOOLCHAIN_FILE:UNINITIALIZED=D:/voice-chat/vcpkg/scripts/toolchains/windows.cmake

//No help, variable specified on the command line.
VCPKG_CRT_LINKAGE:UNINITIALIZED=dynamic

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_CXX_FLAGS_RELEASE:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_C_FLAGS_RELEASE:UNINITIALIZED=

//The directory which contains the installed libraries for each
// triplet
VCPKG_INSTALLED_DIR:PATH=D:/voice-chat/custom-vcpkg-root

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_DEBUG:UNINITIALIZED=

//No help, variable specified on the command line.
VCPKG_LINKER_FLAGS_RELEASE:UNINITIALIZED=

//The path to the vcpkg manifest directory.
VCPKG_MANIFEST_DIR:PATH=

//Use manifest mode, as opposed to classic mode.
VCPKG_MANIFEST_MODE:BOOL=OFF

//No help, variable specified on the command line.
VCPKG_PLATFORM_TOOLSET:UNINITIALIZED=v143

//Appends the vcpkg paths to CMAKE_PREFIX_PATH, CMAKE_LIBRARY_PATH
// and CMAKE_FIND_ROOT_PATH so that vcpkg libraries/packages are
// found after toolchain/system libraries/packages.
VCPKG_PREFER_SYSTEM_LIBS:BOOL=OFF

//Enable the setup of CMAKE_PROGRAM_PATH to vcpkg paths
VCPKG_SETUP_CMAKE_PROGRAM_PATH:BOOL=ON

//No help, variable specified on the command line.
VCPKG_SET_CHARSET_FLAG:UNINITIALIZED=ON

//No help, variable specified on the command line.
VCPKG_TARGET_ARCHITECTURE:UNINITIALIZED=x64

//Vcpkg target triplet (ex. x86-windows)
VCPKG_TARGET_TRIPLET:STRING=x64-windows

//Trace calls to find_package()
VCPKG_TRACE_FIND_PACKAGE:BOOL=OFF

//Enables messages from the VCPKG toolchain for debugging purposes.
VCPKG_VERBOSE:BOOL=OFF

//(experimental) Automatically copy dependencies into the install
// target directory for executables. Requires CMake 3.14.
X_VCPKG_APPLOCAL_DEPS_INSTALL:BOOL=OFF

//(experimental) Add USES_TERMINAL to VCPKG_APPLOCAL_DEPS to force
// serialization.
X_VCPKG_APPLOCAL_DEPS_SERIALIZED:BOOL=OFF

//The directory which contains the installed libraries for each
// triplet
_VCPKG_INSTALLED_DIR:PATH=D:/voice-chat/custom-vcpkg-root

//No help, variable specified on the command line.
_VCPKG_ROOT_DIR:UNINITIALIZED=D:/voice-chat/vcpkg

//Value Computed by CMake
boost_headers_BINARY_DIR:STATIC=D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/libs/headers

//Value Computed by CMake
boost_headers_IS_TOP_LEVEL:STATIC=OFF

//Value Computed by CMake
boost_headers_SOURCE_DIR:STATIC=D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean/libs/headers


########################
# INTERNAL cache entries
########################

//STRINGS property for variable: BOOST_INSTALL_LAYOUT
BOOST_INSTALL_LAYOUT-STRINGS:INTERNAL=versioned;tagged;system
//STRINGS property for variable: BOOST_RUNTIME_LINK
BOOST_RUNTIME_LINK-STRINGS:INTERNAL=shared;static
//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=d:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=4
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=1
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=0
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=C:/Program Files/CMake/bin/cmake.exe
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=C:/Program Files/CMake/bin/cpack.exe
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=C:/Program Files/CMake/bin/ctest.exe
//ADVANCED property for variable: CMAKE_CXX_COMPILER
CMAKE_CXX_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS
CMAKE_CXX_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_DEBUG
CMAKE_CXX_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_MINSIZEREL
CMAKE_CXX_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELEASE
CMAKE_CXX_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELWITHDEBINFO
CMAKE_CXX_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_STANDARD_LIBRARIES
CMAKE_CXX_STANDARD_LIBRARIES-ADVANCED:INTERNAL=1
//STRINGS property for variable: CMAKE_CXX_VISIBILITY_PRESET
CMAKE_CXX_VISIBILITY_PRESET-STRINGS:INTERNAL=default;hidden;protected;internal
//STRINGS property for variable: CMAKE_C_VISIBILITY_PRESET
CMAKE_C_VISIBILITY_PRESET-STRINGS:INTERNAL=default;hidden;protected;internal
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=C:/Program Files/CMake/bin/cmake-gui.exe
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=Unknown
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_BUILD_DATABASE
CMAKE_EXPORT_BUILD_DATABASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=D:/voice-chat/vcpkg/buildtrees/boost-headers/src/ost-1.88.0-aa76186add.clean
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//Name of CMakeLists files to read
CMAKE_LIST_FILE_NAME:INTERNAL=CMakeLists.txt
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MT
CMAKE_MT-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=2
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//ADVANCED property for variable: CMAKE_POLICY_VERSION_MINIMUM
CMAKE_POLICY_VERSION_MINIMUM-ADVANCED:INTERNAL=1
//noop for ranlib
CMAKE_RANLIB:INTERNAL=:
//ADVANCED property for variable: CMAKE_RC_COMPILER
CMAKE_RC_COMPILER-ADVANCED:INTERNAL=1
CMAKE_RC_COMPILER_WORKS:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS
CMAKE_RC_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_DEBUG
CMAKE_RC_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_MINSIZEREL
CMAKE_RC_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELEASE
CMAKE_RC_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RC_FLAGS_RELWITHDEBINFO
CMAKE_RC_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=C:/Program Files/CMake/share/cmake-4.1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=D:/voice-chat/vcpkg
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=D:/voice-chat/vcpkg/packages/boost-headers_x64-windows

```
</details>

<details><summary>D:\voice-chat\vcpkg\buildtrees\boost-headers\config-x64-windows-rel-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineSystem.cmake:212 (message)"
      - "CMakeLists.txt:2 (project)"
    message: |
      The system is: Windows - 10.0.26100 - AMD64
  -
    kind: "find-v1"
    backtrace:
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompiler.cmake:63 (find_program)"
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCXXCompiler.cmake:69 (_cmake_find_compiler)"
      - "CMakeLists.txt:2 (project)"
    mode: "program"
    variable: "CMAKE_CXX_COMPILER"
    description: "CXX compiler"
    settings:
      SearchFramework: "LAST"
      SearchAppBundle: "LAST"
      CMAKE_FIND_USE_CMAKE_PATH: false
      CMAKE_FIND_USE_CMAKE_ENVIRONMENT_PATH: false
      CMAKE_FIND_USE_SYSTEM_ENVIRONMENT_PATH: true
      CMAKE_FIND_USE_CMAKE_SYSTEM_PATH: false
      CMAKE_FIND_USE_INSTALL_PREFIX: true
    names:
      - "c++"
      - "g++"
      - "cl"
      - "bcc"
      - "icx"
      - "clang++"
    candidate_directories:
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files (x86)/Windows Kits/10/bin/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/Microsoft.NET/Framework64/v4.0.30319/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/System32/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/System32/wbem/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/System32/WindowsPowerShell/v1.0/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Windows/System32/OpenSSH/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/x64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/Microsoft.NET/Framework64/v4.0.30319/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/wbem/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/WindowsPowerShell/v1.0/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/OpenSSH/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/"
      - "C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/"
      - "C:/Program Files (x86)/Windows Kits/10/bin/x64/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/"
      - "C:/Windows/Microsoft.NET/Framework64/v4.0.30319/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/"
      - "D:/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/"
      - "C:/Windows/System32/"
      - "C:/Windows/"
      - "C:/Windows/System32/wbem/"
      - "C:/Windows/System32/WindowsPowerShell/v1.0/"
      - "C:/Windows/System32/OpenSSH/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/"
      - "D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/"
    searched_directories:
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/c++.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/c++.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/c++"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/g++.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/g++.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/g++"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/bcc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/bcc.exe"
...
Skipped 2677 lines
...
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/x64/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/x64/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/Windows Kits/10/bin/x64/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/Microsoft.NET/Framework64/v4.0.30319/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/Microsoft.NET/Framework64/v4.0.30319/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/Microsoft.NET/Framework64/v4.0.30319/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/Tools/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/powershell-core-7.2.24-windows/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/wbem/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/wbem/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/wbem/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/WindowsPowerShell/v1.0/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/WindowsPowerShell/v1.0/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/WindowsPowerShell/v1.0/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/OpenSSH/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/OpenSSH/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Windows/System32/OpenSSH/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/bin/ConnectionManagerExe/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files (x86)/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/Program Files/CMake/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/voice-chat/vcpkg/packages/boost-headers_x64-windows/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/bin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/bin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/bin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/sbin/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/sbin/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/sbin/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug/rc"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/tools/rc.com"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/tools/rc.exe"
      - "D:/voice-chat/custom-vcpkg-root/x64-windows/tools/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/vcpackages/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TestWindow/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/Roslyn/rc"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/rc.com"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/rc.exe"
      - "C:/Program Files/Microsoft Visual Studio/2022/Community/Team Tools/DiagnosticsHub/Collector/rc"
      - "C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.com"
    found: "C:/Program Files (x86)/Windows Kits/10/bin/10.0.22621.0/x64/rc.exe"
    search_context:
      CMAKE_PROGRAM_PATH:
        - "D:/voice-chat/custom-vcpkg-root/x64-windows/tools"
      CMAKE_PREFIX_PATH:
        - "D:/voice-chat/custom-vcpkg-root/x64-windows"
        - "D:/voice-chat/custom-vcpkg-root/x64-windows/debug"
      ENV{PATH}:
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.40.33807\\bin\\HostX64\\x64"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\VC\\VCPackages"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\CommonExtensions\\Microsoft\\TestWindow"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\CommonExtensions\\Microsoft\\TeamFoundation\\Team Explorer"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\MSBuild\\Current\\bin\\Roslyn"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Team Tools\\DiagnosticsHub\\Collector"
        - "C:\\Program Files (x86)\\Windows Kits\\10\\bin\\10.0.22621.0\\\\x64"
        - "C:\\Program Files (x86)\\Windows Kits\\10\\bin\\\\x64"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\\\MSBuild\\Current\\Bin\\amd64"
        - "C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\Tools\\"
        - "D:\\voice-chat\\vcpkg\\downloads\\tools\\powershell-core-7.2.24-windows"
        - "C:\\WINDOWS\\system32"
        - "C:\\WINDOWS"
        - "C:\\WINDOWS\\system32\\Wbem"
        - "C:\\WINDOWS\\system32\\WindowsPowerShell\\v1.0\\"
        - "C:\\WINDOWS\\system32\\OpenSSH\\"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\CommonExtensions\\Microsoft\\CMake\\CMake\\bin"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\CommonExtensions\\Microsoft\\CMake\\Ninja"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\IDE\\VC\\Linux\\bin\\ConnectionManagerExe"
        - "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\vcpkg"
        - "D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows"
      CMAKE_INSTALL_PREFIX: "D:/voice-chat/vcpkg/packages/boost-headers_x64-windows"
      CMAKE_SYSTEM_PREFIX_PATH:
        - "C:/Program Files"
        - "C:/Program Files (x86)"
        - "C:/Program Files/CMake"
        - "D:/voice-chat/vcpkg/packages/boost-headers_x64-windows"
      CMAKE_FIND_ROOT_PATH: "D:/voice-chat/custom-vcpkg-root/x64-windows;D:/voice-chat/custom-vcpkg-root/x64-windows/debug"
  -
    kind: "try_compile-v1"
    backtrace:
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerABI.cmake:83 (try_compile)"
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeTestCXXCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:2 (project)"
    checks:
      - "Detecting CXX compiler ABI info"
    directories:
      source: "D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-4nlbwz"
      binary: "D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-4nlbwz"
    cmakeVariables:
      CMAKE_CXX_FLAGS: " /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP "
      CMAKE_CXX_FLAGS_DEBUG: "/MDd /Z7 /Ob0 /Od /RTC1 "
      CMAKE_CXX_SCAN_FOR_MODULES: "OFF"
      CMAKE_EXE_LINKER_FLAGS: "/machine:x64"
      CMAKE_MSVC_DEBUG_INFORMATION_FORMAT: ""
      CMAKE_MSVC_RUNTIME_LIBRARY: "MultiThreaded$<$<CONFIG:Debug>:Debug>$<$<STREQUAL:dynamic,dynamic>:DLL>"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "D:/voice-chat/vcpkg/scripts/toolchains/windows.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "D:/voice-chat/custom-vcpkg-root"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PLATFORM_TOOLSET: "v143"
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_SET_CHARSET_FLAG: "ON"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-windows"
      Z_VCPKG_ROOT_DIR: "D:/voice-chat/vcpkg"
    buildResult:
      variable: "CMAKE_CXX_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: 'D:/voice-chat/vcpkg/buildtrees/boost-headers/x64-windows-rel/CMakeFiles/CMakeScratch/TryCompile-4nlbwz'
        
        Run Build Command(s): D:/voice-chat/vcpkg/downloads/tools/ninja/1.12.1-windows/ninja.exe -v cmTC_5b8e6
        [1/2] C:\\PROGRA~1\\MIB055~1\\2022\\COMMUN~1\\VC\\Tools\\MSVC\\1440~1.338\\bin\\Hostx64\\x64\\cl.exe  /nologo /TP   /nologo /DWIN32 /D_WINDOWS /utf-8 /GR /EHsc /MP   /MDd /Z7 /Ob0 /Od /RTC1  -MDd /showIncludes /FoCMakeFiles\\cmTC_5b8e6.dir\\CMakeCXXCompilerABI.cpp.obj /FdCMakeFiles\\cmTC_5b8e6.dir\\ /FS -c "C:\\Program Files\\CMake\\share\\cmake-4.1\\Modules\\CMakeCXXCompilerABI.cpp"
        [2/2] C:\\WINDOWS\\system32\\cmd.exe /C "cd . && "C:\\Program Files\\CMake\\bin\\cmake.exe" -E vs_link_exe --msvc-ver=1940 --intdir=CMakeFiles\\cmTC_5b8e6.dir --rc=C:\\PROGRA~2\\WI3CF2~1\\10\\bin\\100226~1.0\\x64\\rc.exe --mt=C:\\PROGRA~2\\WI3CF2~1\\10\\bin\\100226~1.0\\x64\\mt.exe --manifests  -- C:\\PROGRA~1\\MIB055~1\\2022\\COMMUN~1\\VC\\Tools\\MSVC\\1440~1.338\\bin\\Hostx64\\x64\\link.exe /nologo CMakeFiles\\cmTC_5b8e6.dir\\CMakeCXXCompilerABI.cpp.obj  /out:cmTC_5b8e6.exe /implib:cmTC_5b8e6.lib /pdb:cmTC_5b8e6.pdb /version:0.0 /machine:x64 /nologo /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib && cd ."
        
      exitCode: 0
  -
    kind: "message-v1"
    backtrace:
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerABI.cmake:253 (message)"
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeTestCXXCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:2 (project)"
    message: |
      Parsed CXX implicit link information:
        link line regex: [^( *|.*[/\\])(ld[0-9]*(|\\.[a-rt-z][a-z]*|\\.s[a-np-z][a-z]*|\\.so[a-z]+)|link\\.exe|lld-link(\\.exe)?|CMAKE_LINK_STARTFILE-NOTFOUND|([^/\\]+-)?ld|collect2)[^/\\]*( |$)]
        linker tool regex: [^[ 	]*(->|")?[ 	]*(([^"]*[/\\])?(ld[0-9]*(|\\.[a-rt-z][a-z]*|\\.s[a-np-z][a-z]*|\\.so[a-z]+)|link\\.exe|lld-link(\\.exe)?))("|,| |$)]
        linker tool for 'CXX': C:/PROGRA~1/MIB055~1/2022/COMMUN~1/VC/Tools/MSVC/1440~1.338/bin/Hostx64/x64/link.exe
        implicit libs: []
        implicit objs: []
        implicit dirs: []
        implicit fwks: []
      
      
  -
    kind: "message-v1"
    backtrace:
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/Internal/CMakeDetermineLinkerId.cmake:36 (message)"
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeDetermineCompilerABI.cmake:299 (cmake_determine_linker_id)"
      - "C:/Program Files/CMake/share/cmake-4.1/Modules/CMakeTestCXXCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:2 (project)"
    message: |
      Running the CXX compiler's linker: "C:/PROGRA~1/MIB055~1/2022/COMMUN~1/VC/Tools/MSVC/1440~1.338/bin/Hostx64/x64/link.exe" "-v"
      Microsoft (R) Incremental Linker Version 14.40.33813.0
      Copyright (C) Microsoft Corporation.  All rights reserved.
...
```
</details>

