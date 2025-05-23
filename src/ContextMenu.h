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
#include "MinimizePlacement.h"

// Windows
#include <Windows.h>

// Standard library
#include <vector>

namespace ContextMenu
{

constexpr WORD IDM_APP = 0x1001;
constexpr WORD IDM_SETTINGS = 0x1002;
constexpr WORD IDM_ABOUT = 0x1003;
constexpr WORD IDM_EXIT = 0x1004;
constexpr WORD IDM_MINIMIZE_ALL = 0x1005;
constexpr WORD IDM_RESTORE_ALL = 0x1006;

bool show(HWND hwnd, MinimizePlacement minimizePlacement);
HWND getMinimizedWindow(unsigned int id);
HWND getVisibleWindow(unsigned int id);

} // namespace ContextMenu
