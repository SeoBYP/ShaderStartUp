# CMakeList.txt : 최상위 CMake 프로젝트 파일, 전역 구성을 수행하고
# 여기에 하위 프로젝트를 포함합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("ShaderStartUp")

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# OpenGL 라이브러리 찾기
find_package(OpenGL REQUIRED)

# 외부 라이브러리 설정
add_subdirectory(external/glfw)
add_library(glad external/glad/src/glad.c)
target_include_directories(glad PRIVATE external/glad/include)

# 실행 파일 생성 및 소스, 헤더 파일 경로 설정
add_executable(ShaderStartUp src/main.cpp "include/main.h")
target_include_directories(ShaderStartUp PRIVATE include external/glad/include)
target_link_libraries(ShaderStartUp PRIVATE OpenGL::GL glfw glad)

