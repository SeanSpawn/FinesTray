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

// cJSON
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreserved-macro-identifier"
#endif
#include <cJSON.h>
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

// Standard library
#include <string>

class CJsonWrapper
{
public:
    CJsonWrapper() = delete;

    explicit CJsonWrapper(cJSON * cjson) noexcept
        : cjson_(cjson)
    {
    }

    ~CJsonWrapper()
    {
        if (cjson_) {
            cJSON_Delete(cjson_);
        }
    }

    CJsonWrapper(const CJsonWrapper &) = delete;
    CJsonWrapper(CJsonWrapper &&) = delete;
    CJsonWrapper & operator=(const CJsonWrapper &) = delete;
    CJsonWrapper & operator=(CJsonWrapper &&) = delete;

    operator cJSON *() const noexcept { return cjson_; }

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable : 26408) // Avoid malloc() and free(), prefer the nothrow version of new with delete
#endif
    std::string print()
    {
        char * rawJson = cJSON_Print(cjson_);
        std::string json(rawJson);
        free(rawJson);
        return json;
    }
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

private:
    cJSON * cjson_ {};
};
