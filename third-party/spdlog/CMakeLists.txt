find_package(Threads REQUIRED)
add_library(spdlog INTERFACE)

target_include_directories(spdlog INTERFACE
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>"
        "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")

target_link_libraries(spdlog INTERFACE Threads::Threads)