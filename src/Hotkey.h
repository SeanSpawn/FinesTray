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

// Windows
#include <Windows.h>

// Standard library
#include <string>
#include <vector>

class Hotkey
{
public:
    Hotkey() noexcept = default;

    ~Hotkey() { destroy(); }

    Hotkey(const Hotkey &) = delete;
    Hotkey(Hotkey &&) = delete;
    Hotkey & operator=(const Hotkey &) = delete;
    Hotkey & operator=(Hotkey &&) = delete;

    bool create(int id, HWND hwnd, UINT hotkey, UINT hotkeyModifiers);
    void destroy() noexcept;

    static bool valid(const std::string & hotkeyStr);
    static std::string normalize(const std::string & hotkeyStr);
    static bool parse(const std::string & hotkeyStr, UINT & key, UINT & modifiers);

private:
    struct ParseResult
    {
        unsigned int noneCount {};
        std::vector<std::string> keys;
        std::vector<std::string> modifiers;
        std::vector<std::string> unrecognized;
    };

    static ParseResult parseInternal(const std::string & hotkeyStr);
    static bool parseResultValid(const ParseResult & parseResult);

    HWND hwnd_ {};
    int id_ { -1 };
};
