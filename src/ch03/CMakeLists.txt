include_directories(.)

aux_source_directory(. DIR_CH03_SRCS)

add_executable(ch03 ${DIR_CH03_SRCS})

message("源程序工程当前目录: " ${CMAKE_CURRENT_SOURCE_DIR})