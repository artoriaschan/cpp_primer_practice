include_directories(.)

aux_source_directory(. DIR_CH02_SRCS)

add_executable(ch02 ${DIR_CH02_SRCS})

message("源程序工程当前目录: "  ${CMAKE_CURRENT_SOURCE_DIR})