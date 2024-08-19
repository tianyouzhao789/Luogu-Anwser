# 设置CMake的最低版本要求，这里要求的版本是3.26
cmake_minimum_required(VERSION 3.29)
# 获取当前源代码目录的名称，并将其存储在变量 ProjectId 中
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
# 将 ProjectId 中的空格替换为下划线
string(REPLACE " " "_" ProjectId ${ProjectId})
# 使用变量 ProjectId 创建一个新的CMake项目，并指定使用C++作为编程语言
project(${ProjectId} CXX)
# 设置C++的标准版本为C++20
set(CMAKE_CXX_STANDARD 20)
# 搜索当前源代码目录下所有的 .cpp 文件，并将文件路径存储到变量 files 中
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
# 遍历 files 中的每一个文件
foreach(file ${files})
    # 获取每个文件的文件名，并存储在变量 name 中
    get_filename_component(name ${file} NAME)
    # 为每个文件创建一个可执行文件，文件名与源文件名相同
    add_executable(${name} ${file})
endforeach()
