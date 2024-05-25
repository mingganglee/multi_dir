aux_source_directory(. DIR)

add_executable(${PROJECT_NAME} ${DIR})

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)
