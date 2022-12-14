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

#include "livedisplay/sdm/Utils.h"

namespace vendor {
namespace portalrom {
namespace livedisplay {
namespace V2_0 {
namespace sdm {
namespace utils {

status_t CheckFeatureVersion(const std::shared_ptr<SDMController>& controller,
                             FeatureVerSw feature) {
    SdmFeatureVersion version{};
    status_t status = controller->getFeatureVersion(feature, &version);
    if (status != android::OK) {
        return status;
    }

    if (version.x <= 0 && version.y <= 0 && version.z <= 0) {
        return android::BAD_VALUE;
    }

    return android::OK;
}

}  // namespace utils
}  // namespace sdm
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace portalrom
}  // namespace vendor
