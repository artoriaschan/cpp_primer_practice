include_directories(.)

aux_source_directory(. DIR_CH01_SRCS)

add_executable(ch01 ${DIR_CH01_SRCS})

message("源程序工程当前目录: " ${CMAKE_CURRENT_SOURCE_DIR})