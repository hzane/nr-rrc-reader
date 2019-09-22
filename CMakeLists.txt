cmake_minimum_required(VERSION 3.14)
project(nr-rrc-reader)

set(CMAKE_C_FLAGS -Wno-parentheses-equality)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(nr-rrc)
include_directories(supp)
# include_directories(skeletons)

aux_source_directory(nr-rrc NRRRC_SRC_FILES)

add_library(nr-rrc ${NRRRC_SRC_FILES})

add_executable(nr-rrc-reader supp/config.h
        nr-rrc-reader.c
        nr-sp-cell-config-info.h
        ParserDldcch.c
        stdafx.h
        targetver.h)

target_link_libraries(nr-rrc-reader nr-rrc)
