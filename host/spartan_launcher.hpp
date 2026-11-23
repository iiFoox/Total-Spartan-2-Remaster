#pragma once
#ifdef _WIN32
#include <string>

namespace ps2::spartan_launcher {

struct Choice {
    bool start = false;
    bool fullscreen = true;
    bool widescreen = false;
};

// Shows the modern dark-gold Spartan configuration launcher.
// Writes chosen PS2_* environment variables and saves preferences to <exe_dir>/saves/launcher.ini.
Choice show(const std::string &exe_path);

}  // namespace ps2::spartan_launcher
#endif
