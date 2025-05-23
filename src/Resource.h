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

// clang-format off

// icons
#define IDI_FINESTRAY                             101

// strings
#define IDS_MENU_MINIMIZE_ALL                     201
#define IDS_MENU_RESTORE_ALL                      202
#define IDS_MENU_SETTINGS                         203
#define IDS_MENU_EXIT                             204
#define IDS_ABOUT_CAPTION                         211
#define IDS_ABOUT_TEXT                            212
#define IDS_COLUMN_INDEX                          221
#define IDS_COLUMN_EXECUTABLE                     222
#define IDS_COLUMN_WINDOW_CLASS                   223
#define IDS_COLUMN_WINDOW_TITLE                   224
#define IDS_COLUMN_TRAY_EVENT                     225
#define IDS_COLUMN_MINIMIZE_PERSISTENCE           226
#define IDS_TRAY_EVENT_OPEN                       230
#define IDS_TRAY_EVENT_MINIMIZE                   231
#define IDS_TRAY_EVENT_OPEN_AND_MINIMIZE          232
#define IDS_MINIMIZE_PERSISTENCE_NEVER            233
#define IDS_MINIMIZE_PERSISTENCE_ALWAYS           234

// error strings
#define IDS_ERROR_INIT_COM                        301
#define IDS_ERROR_INIT_COMMON_CONTROLS            302
#define IDS_ERROR_REGISTER_WINDOW_CLASS           303
#define IDS_ERROR_CREATE_WINDOW                   304
#define IDS_ERROR_PARSE_HOTKEY                    305
#define IDS_ERROR_REGISTER_HOTKEY                 306
#define IDS_ERROR_PARSE_MODIFIER                  307
#define IDS_ERROR_PARSE_REGEX                     308
#define IDS_ERROR_REGISTER_MODIFIER               309
#define IDS_ERROR_REGISTER_EVENTHOOK              310
#define IDS_ERROR_CREATE_TRAY_ICON                311
#define IDS_ERROR_CREATE_MENU                     312
#define IDS_ERROR_CREATE_DIALOG                   313
#define IDS_ERROR_LOAD_SETTINGS                   314
#define IDS_ERROR_SAVE_SETTINGS                   315

// bitmaps
#define IDB_APP                                   401
#define IDB_MINIMIZE                              402
#define IDB_RESTORE                               403
#define IDB_SETTINGS                              404
#define IDB_EXIT                                  405

// dialogs
#define IDD_DIALOG_SETTINGS                       501

// controls
#define IDC_MINIMIZE_PLACEMENT_TRAY              1001
#define IDC_MINIMIZE_PLACEMENT_MENU              1002
#define IDC_MINIMIZE_PLACEMENT_TRAY_AND_MENU     1003
#define IDC_START_WITH_WINDOWS                   1004
#define IDC_LOG_TO_FILE                          1005
#define IDC_HOTKEY_MINIMIZE                      1006
#define IDC_HOTKEY_MINIMIZE_ALL                  1007
#define IDC_HOTKEY_RESTORE                       1008
#define IDC_HOTKEY_RESTORE_ALL                   1019
#define IDC_HOTKEY_MENU                          1010
#define IDC_MODIFIER_OVERRIDE                    1011
#define IDC_AUTO_TRAY_LIST                       1012
#define IDC_AUTO_TRAY_EDIT_WINDOWCLASS           1013
#define IDC_AUTO_TRAY_EDIT_EXECUTABLE            1014
#define IDC_AUTO_TRAY_EDIT_WINDOWTITLE           1015
#define IDC_AUTO_TRAY_EVENT_OPEN                 1016
#define IDC_AUTO_TRAY_EVENT_MINIMIZE             1017
#define IDC_AUTO_TRAY_EVENT_OPEN_AND_MINIMIZE    1018
#define IDC_AUTO_TRAY_PERSIST_NEVER              1029
#define IDC_AUTO_TRAY_PERSIST_ALWAYS             1020
#define IDC_AUTO_TRAY_ITEM_UPDATE                1021
#define IDC_AUTO_TRAY_ITEM_ADD                   1022
#define IDC_AUTO_TRAY_ITEM_DELETE                1023
#define IDC_AUTO_TRAY_ITEM_SPY                   1024
#define IDC_HELP_PAGE                            1025
#define IDC_ABOUT                                1026
#define IDC_RESET                                1027
#define IDC_EXIT                                 1028

// clang-format on
