#pragma once

#include <string>
#include <map>

namespace playapi { struct device_info; }

struct app_config {

    std::string user_email, user_token;

    void load();

    void save();

    void load_device(const std::string& device_path, playapi::device_info& device);

    void save_device(const std::string& device_path, playapi::device_info& device);

};