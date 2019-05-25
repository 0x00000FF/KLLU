# CMakeList.txt : CMake project for KLLU, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project (KLLU CXX)
set(CMAKE_CXX_STANDARD 17)

if (WIN32)
	include("$ENV{AppData}/VcPkg/scripts/buildsystems/vcpkg.cmake")
	
	set(SFML_STATIC_LIBRARIES FALSE)
	set(SFML_INCLUDE "${SFML_DIR}/../../include")
	
	set(WIN32_SET WIN32)
endif()

find_package(SFML CONFIG REQUIRED graphics audio)

# Add source to this project's executable.
file(GLOB KLLU_CPP_SRC "*.cpp" "Classes/*.cpp")
add_executable (KLLU ${WIN32_SET} ${KLLU_CPP_SRC})

if(SFML_FOUND)
  target_include_directories(KLLU PUBLIC ${SFML_INCLUDE})
  target_link_libraries(KLLU sfml-graphics sfml-audio
							 FLAC OpenAL OpenGL Vorbis)
endif()

target_include_directories(KLLU PUBLIC ${PROJECT_SOURCE_DIR}/Includes)

# TODO: Add tests and install targets if needed.
