// Copyright 2020 Benbuck Nason
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

// App
#include "Log.h"
#include "StringUtility.h"

// Windows
#include <Windows.h>

class WindowHandleWrapper
{
public:
    WindowHandleWrapper() = default;

    explicit WindowHandleWrapper(HWND hwnd) noexcept
        : hwnd_(hwnd)
    {
    }

    ~WindowHandleWrapper() { destroy(); }

    WindowHandleWrapper(const WindowHandleWrapper &) = delete;
    WindowHandleWrapper(WindowHandleWrapper &&) = delete;
    WindowHandleWrapper & operator=(const WindowHandleWrapper &) = delete;
    WindowHandleWrapper & operator=(WindowHandleWrapper &&) = delete;

    void operator=(HWND hwnd) noexcept
    {
        destroy();

        hwnd_ = hwnd;
    }

    void destroy() noexcept
    {
        if (hwnd_) {
            DEBUG_PRINTF("destroying window %#x\n", hwnd_);
            if (!DestroyWindow(hwnd_)) {
                WARNING_PRINTF("DestroyWindow() failed: %lu\n", GetLastError());
                return;
            }

            hwnd_ = nullptr;
        }
    }

    HWND hwnd() const noexcept { return hwnd_; }

    operator HWND() const noexcept { return hwnd_; }

private:
    HWND hwnd_ {};
};
