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

#include <vendor/portalrom/livedisplay/2.0/IDisplayColorCalibration.h>

namespace vendor {
namespace portalrom {
namespace livedisplay {
namespace V2_0 {
namespace sysfs {

using ::android::hardware::hidl_vec;
using ::android::hardware::Return;

class DisplayColorCalibration : public IDisplayColorCalibration {
  public:
    static bool isSupported();

    // Methods from ::vendor::portalrom::livedisplay::V2_0::IDisplayColorCalibration follow.
    Return<int32_t> getMaxValue() override;
    Return<int32_t> getMinValue() override;
    Return<void> getCalibration(getCalibration_cb _hidl_cb) override;
    Return<bool> setCalibration(const hidl_vec<int32_t>& rgb) override;
};

}  // namespace sysfs
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace portalrom
}  // namespace vendor
