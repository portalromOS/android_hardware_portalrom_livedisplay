/*
 * Copyright (C) 2022 The Portal Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "SDMController.h"

namespace vendor {
namespace portalrom {
namespace livedisplay {
namespace V2_0 {
namespace sdm {
namespace utils {

enum FeatureVerSw {
    FEATURE_VER_SW_API = 0,
    FEATURE_VER_SW_PA_API,
    FEATURE_VER_SW_MEMCOLOR_API,
    FEATURE_VER_SW_COLORBAL_API,
    FEATURE_VER_SW_SAVEMODES_API,
    FEATURE_VER_SW_ADAPT_BACKLIGHT_API,
    FEATURE_VER_SW_SVI_API,
    FEATURE_VER_SW_DISP_INFO_API
};

status_t CheckFeatureVersion(const std::shared_ptr<SDMController>& controller,
                             FeatureVerSw feature);

}  // namespace utils
}  // namespace sdm
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace portalrom
}  // namespace vendor
