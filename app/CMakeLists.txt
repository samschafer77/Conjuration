project(conjuration-app)

cmake_minimum_required(VERSION 3.26)

add_executable(app main.cpp)

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(app
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)