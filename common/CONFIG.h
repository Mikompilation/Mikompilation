#pragma once

#include <filesystem>

/**
 * Header file containing configurations for the application.
 * The goal is to have everything centralized to make it simpler to modify
 * and in the future to create a loadable config file
 */

inline std::filesystem::path savePath("save/");
inline std::filesystem::path gameFolder("game_files/");