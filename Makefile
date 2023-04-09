# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/code/slint_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/code/slint_demo

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	/usr/bin/cpack --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package
.PHONY : package/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	/usr/bin/cpack --config ./CPackSourceConfig.cmake /home/user/code/slint_demo/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source
.PHONY : package_source/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/user/code/slint_demo/CMakeFiles /home/user/code/slint_demo//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/user/code/slint_demo/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named my_application

# Build rule for target.
my_application: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 my_application
.PHONY : my_application

# fast build rule for target.
my_application/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/my_application.dir/build.make CMakeFiles/my_application.dir/build
.PHONY : my_application/fast

#=============================================================================
# Target rules for targets named _cargo-build_slint-cpp

# Build rule for target.
_cargo-build_slint-cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 _cargo-build_slint-cpp
.PHONY : _cargo-build_slint-cpp

# fast build rule for target.
_cargo-build_slint-cpp/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/_cargo-build_slint-cpp.dir/build.make _deps/slint-build/CMakeFiles/_cargo-build_slint-cpp.dir/build
.PHONY : _cargo-build_slint-cpp/fast

#=============================================================================
# Target rules for targets named cargo-build_slint-cpp

# Build rule for target.
cargo-build_slint-cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-build_slint-cpp
.PHONY : cargo-build_slint-cpp

# fast build rule for target.
cargo-build_slint-cpp/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-build_slint-cpp.dir/build.make _deps/slint-build/CMakeFiles/cargo-build_slint-cpp.dir/build
.PHONY : cargo-build_slint-cpp/fast

#=============================================================================
# Target rules for targets named cargo-prebuild_slint-cpp

# Build rule for target.
cargo-prebuild_slint-cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-prebuild_slint-cpp
.PHONY : cargo-prebuild_slint-cpp

# fast build rule for target.
cargo-prebuild_slint-cpp/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-prebuild_slint-cpp.dir/build.make _deps/slint-build/CMakeFiles/cargo-prebuild_slint-cpp.dir/build
.PHONY : cargo-prebuild_slint-cpp/fast

#=============================================================================
# Target rules for targets named cargo-prebuild

# Build rule for target.
cargo-prebuild: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-prebuild
.PHONY : cargo-prebuild

# fast build rule for target.
cargo-prebuild/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-prebuild.dir/build.make _deps/slint-build/CMakeFiles/cargo-prebuild.dir/build
.PHONY : cargo-prebuild/fast

#=============================================================================
# Target rules for targets named cargo-clean_slint-cpp

# Build rule for target.
cargo-clean_slint-cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-clean_slint-cpp
.PHONY : cargo-clean_slint-cpp

# fast build rule for target.
cargo-clean_slint-cpp/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-clean_slint-cpp.dir/build.make _deps/slint-build/CMakeFiles/cargo-clean_slint-cpp.dir/build
.PHONY : cargo-clean_slint-cpp/fast

#=============================================================================
# Target rules for targets named cargo-clean

# Build rule for target.
cargo-clean: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-clean
.PHONY : cargo-clean

# fast build rule for target.
cargo-clean/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-clean.dir/build.make _deps/slint-build/CMakeFiles/cargo-clean.dir/build
.PHONY : cargo-clean/fast

#=============================================================================
# Target rules for targets named _cargo-build_slint-compiler

# Build rule for target.
_cargo-build_slint-compiler: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 _cargo-build_slint-compiler
.PHONY : _cargo-build_slint-compiler

# fast build rule for target.
_cargo-build_slint-compiler/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/_cargo-build_slint-compiler.dir/build.make _deps/slint-build/CMakeFiles/_cargo-build_slint-compiler.dir/build
.PHONY : _cargo-build_slint-compiler/fast

#=============================================================================
# Target rules for targets named cargo-build_slint-compiler

# Build rule for target.
cargo-build_slint-compiler: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-build_slint-compiler
.PHONY : cargo-build_slint-compiler

# fast build rule for target.
cargo-build_slint-compiler/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-build_slint-compiler.dir/build.make _deps/slint-build/CMakeFiles/cargo-build_slint-compiler.dir/build
.PHONY : cargo-build_slint-compiler/fast

#=============================================================================
# Target rules for targets named cargo-prebuild_slint-compiler

# Build rule for target.
cargo-prebuild_slint-compiler: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-prebuild_slint-compiler
.PHONY : cargo-prebuild_slint-compiler

# fast build rule for target.
cargo-prebuild_slint-compiler/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-prebuild_slint-compiler.dir/build.make _deps/slint-build/CMakeFiles/cargo-prebuild_slint-compiler.dir/build
.PHONY : cargo-prebuild_slint-compiler/fast

#=============================================================================
# Target rules for targets named cargo-clean_slint-compiler

# Build rule for target.
cargo-clean_slint-compiler: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cargo-clean_slint-compiler
.PHONY : cargo-clean_slint-compiler

# fast build rule for target.
cargo-clean_slint-compiler/fast:
	$(MAKE) $(MAKESILENT) -f _deps/slint-build/CMakeFiles/cargo-clean_slint-compiler.dir/build.make _deps/slint-build/CMakeFiles/cargo-clean_slint-compiler.dir/build
.PHONY : cargo-clean_slint-compiler/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/my_application.dir/build.make CMakeFiles/my_application.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/my_application.dir/build.make CMakeFiles/my_application.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/my_application.dir/build.make CMakeFiles/my_application.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... package"
	@echo "... package_source"
	@echo "... rebuild_cache"
	@echo "... _cargo-build_slint-compiler"
	@echo "... _cargo-build_slint-cpp"
	@echo "... cargo-build_slint-compiler"
	@echo "... cargo-build_slint-cpp"
	@echo "... cargo-clean"
	@echo "... cargo-clean_slint-compiler"
	@echo "... cargo-clean_slint-cpp"
	@echo "... cargo-prebuild"
	@echo "... cargo-prebuild_slint-compiler"
	@echo "... cargo-prebuild_slint-cpp"
	@echo "... my_application"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
