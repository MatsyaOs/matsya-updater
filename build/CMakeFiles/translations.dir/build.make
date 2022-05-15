# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/tokyo/clone/cuteclone/updator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/clone/cuteclone/updator/build

# Utility rule file for translations.

# Include the progress variables for this target.
include CMakeFiles/translations.dir/progress.make

../translations/en_US.ts:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/updator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../translations/en_US.ts"
	/usr/lib/qt5/bin/lupdate @ -ts /home/tokyo/clone/cuteclone/updator/translations/en_US.ts

../translations/zh_CN.ts:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/updator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../translations/zh_CN.ts"
	/usr/lib/qt5/bin/lupdate @ -ts /home/tokyo/clone/cuteclone/updator/translations/zh_CN.ts

CMakeFiles/translations: en_US.qm
CMakeFiles/translations: zh_CN.qm


en_US.qm: ../translations/en_US.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/updator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating en_US.qm"
	/usr/lib/qt5/bin/lrelease /home/tokyo/clone/cuteclone/updator/translations/en_US.ts -qm /home/tokyo/clone/cuteclone/updator/build/en_US.qm

zh_CN.qm: ../translations/zh_CN.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/updator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating zh_CN.qm"
	/usr/lib/qt5/bin/lrelease /home/tokyo/clone/cuteclone/updator/translations/zh_CN.ts -qm /home/tokyo/clone/cuteclone/updator/build/zh_CN.qm

translations: ../translations/en_US.ts
translations: ../translations/zh_CN.ts
translations: CMakeFiles/translations
translations: en_US.qm
translations: zh_CN.qm
translations: CMakeFiles/translations.dir/build.make

.PHONY : translations

# Rule to build all files generated by this target.
CMakeFiles/translations.dir/build: translations

.PHONY : CMakeFiles/translations.dir/build

CMakeFiles/translations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations.dir/clean

CMakeFiles/translations.dir/depend:
	cd /home/tokyo/clone/cuteclone/updator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/cuteclone/updator /home/tokyo/clone/cuteclone/updator /home/tokyo/clone/cuteclone/updator/build /home/tokyo/clone/cuteclone/updator/build /home/tokyo/clone/cuteclone/updator/build/CMakeFiles/translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations.dir/depend

