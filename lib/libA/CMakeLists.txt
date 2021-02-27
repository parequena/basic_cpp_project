# Save lib name
set(LIB_NAME libA)

# Find all SRC files
file(GLOB_RECURSE LIBA_SRC src/*.cpp)

add_library(${LIB_NAME} STATIC ${LIBA_SRC})

target_include_directories(${LIB_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)