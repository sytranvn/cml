include(FetchContent)
FetchContent_Declare(gtest
	QUIET
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz
)
# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

# file(READ resources/4.txt FILE_4_CONTENT)
# configure_file(ch_4_test.in.cpp ch_4_test.cpp @ONLY)


add_executable(
unit_tests
# common_test.cpp
)

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests(unit_tests
	PROPERTIES
	LABELS "unit"
	DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
	240
)
