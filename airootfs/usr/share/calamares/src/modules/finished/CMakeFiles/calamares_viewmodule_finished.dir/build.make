# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/koompi/projects/calamares/calamares

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/koompi/projects/calamares/calamares/build

# Include any dependencies generated for this target.
include src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/depend.make

# Include the progress variables for this target.
include src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/flags.make

src/modules/finished/ui_FinishedPage.h: ../src/modules/finished/FinishedPage.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/koompi/projects/calamares/calamares/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_FinishedPage.h"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/bin/uic -o /home/koompi/projects/calamares/calamares/build/src/modules/finished/ui_FinishedPage.h /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedPage.ui

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/flags.make
src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o: ../src/modules/finished/FinishedViewStep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/koompi/projects/calamares/calamares/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o -c /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedViewStep.cpp

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.i"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedViewStep.cpp > CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.i

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.s"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedViewStep.cpp -o CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.s

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/flags.make
src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o: ../src/modules/finished/FinishedPage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/koompi/projects/calamares/calamares/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o -c /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedPage.cpp

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.i"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedPage.cpp > CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.i

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.s"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/koompi/projects/calamares/calamares/src/modules/finished/FinishedPage.cpp -o CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.s

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/flags.make
src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o: src/modules/finished/calamares_viewmodule_finished_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/koompi/projects/calamares/calamares/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o -c /home/koompi/projects/calamares/calamares/build/src/modules/finished/calamares_viewmodule_finished_autogen/mocs_compilation.cpp

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.i"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/koompi/projects/calamares/calamares/build/src/modules/finished/calamares_viewmodule_finished_autogen/mocs_compilation.cpp > CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.i

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.s"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && /usr/lib/icecream/libexec/icecc/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/koompi/projects/calamares/calamares/build/src/modules/finished/calamares_viewmodule_finished_autogen/mocs_compilation.cpp -o CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.s

# Object files for target calamares_viewmodule_finished
calamares_viewmodule_finished_OBJECTS = \
"CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o" \
"CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o" \
"CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o"

# External object files for target calamares_viewmodule_finished
calamares_viewmodule_finished_EXTERNAL_OBJECTS =

src/modules/finished/libcalamares_viewmodule_finished.so: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedViewStep.cpp.o
src/modules/finished/libcalamares_viewmodule_finished.so: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/FinishedPage.cpp.o
src/modules/finished/libcalamares_viewmodule_finished.so: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/calamares_viewmodule_finished_autogen/mocs_compilation.cpp.o
src/modules/finished/libcalamares_viewmodule_finished.so: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/build.make
src/modules/finished/libcalamares_viewmodule_finished.so: libcalamaresui.so.3.2.4
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5DBus.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: libcalamares.so.3.2.4
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libyaml-cpp.so
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Svg.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5QuickWidgets.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Widgets.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Quick.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Gui.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Qml.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Network.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: /usr/lib/libQt5Core.so.5.12.1
src/modules/finished/libcalamares_viewmodule_finished.so: src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/koompi/projects/calamares/calamares/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library libcalamares_viewmodule_finished.so"
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calamares_viewmodule_finished.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/build: src/modules/finished/libcalamares_viewmodule_finished.so

.PHONY : src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/build

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/clean:
	cd /home/koompi/projects/calamares/calamares/build/src/modules/finished && $(CMAKE_COMMAND) -P CMakeFiles/calamares_viewmodule_finished.dir/cmake_clean.cmake
.PHONY : src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/clean

src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/depend: src/modules/finished/ui_FinishedPage.h
	cd /home/koompi/projects/calamares/calamares/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/koompi/projects/calamares/calamares /home/koompi/projects/calamares/calamares/src/modules/finished /home/koompi/projects/calamares/calamares/build /home/koompi/projects/calamares/calamares/build/src/modules/finished /home/koompi/projects/calamares/calamares/build/src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/finished/CMakeFiles/calamares_viewmodule_finished.dir/depend

