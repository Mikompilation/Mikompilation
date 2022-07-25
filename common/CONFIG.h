#pragma once

#include <filesystem>

/**
 * Header file containing configurations for the application.
 * The goal is to have everything centralized to make it simpler to modify
 * and in the future to create a loadable config file
 */

inline std::filesystem::path saveFolder(std::filesystem::current_path() / "save/");
inline std::filesystem::path gameFolder(std::filesystem::current_path() / "game_files/");