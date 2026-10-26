#pragma once

// Placeholder for the future logging system.
// Will be replaced with a proper logger (custom or spdlog-based).

#include <iostream>

namespace Nova {

inline void LogInfo(const char* message) {
    std::cout << "[INFO] " << message << '\n';
}

inline void LogWarn(const char* message) {
    std::cout << "[WARN] " << message << '\n';
}

inline void LogError(const char* message) {
    std::cerr << "[ERROR] " << message << '\n';
}

} // namespace Nova
