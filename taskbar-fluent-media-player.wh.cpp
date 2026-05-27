// ==WindhawkMod==
// @id              taskbar-fluent-media-player
// @name            Taskbar Fluent Media Player
// @description     Embeds a Fluent Design media player inside the Windows 11 taskbar.
// @version         0.3.0-beta
// @author          Salyts
// @github          https://github.com/Salyts
// @include         explorer.exe
// @architecture    x86-64
// @compilerOptions -lole32 -loleaut32 -lruntimeobject -lversion -luuid -luser32 -lwindowsapp -lshell32 -lgdi32
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# Taskbar Fluent Media Player

Embeds a Fluent Design media player inside the Windows 11 taskbar.

This mod is currently in beta testing. Some features may be unstable, may not work correctly, or may change in future updates. During use, errors, crashes, conflicts with other mods, or unexpected system behavior may occur.

By installing and using this mod, you do so at your own risk. The author is not responsible for any possible consequences, including data loss, system instability, software conflicts, or other issues arising from the use of the mod.

*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- MainSettings:
  - position: "tray_left"
    $name: Player position •
    $options:
    - "tray_left": "Tray - Far edge - Left"
    - "tray_right": "Tray - Far edge - Right"
    - "tray_before_clock": "Tray - Clock - Left"
    - "tray_after_clock": "Tray - Clock - Right"
    - "tray_before_omni_left": "Tray - Network/volume - Left"
    - "tray_before_omni_right": "Tray - Network/volume - Right"
    - "tray_after_showdesktop_left": "Tray - Show Desktop - Left"
    - "tray_after_showdesktop_right": "Tray - Show Desktop - Right"
    - "taskbar_left_start": "Taskbar - Start button - Left"
    - "taskbar_right_start": "Taskbar - Start button - Right"
    - "taskbar_after_search_left": "Taskbar - Search button - Left"
    - "taskbar_after_search_right": "Taskbar - Search button - Right"
    - "taskbar_after_taskview_left": "Taskbar - Task View button - Left"
    - "taskbar_after_taskview_right": "Taskbar - Task View button - Right"
    - "taskbar_after_widgets_left": "Taskbar - Widgets button - Left"
    - "taskbar_after_widgets_right": "Taskbar - Widgets button - Right"
    - "taskbar_left_edge": "Taskbar - far edge (Overlay) - Left"
    - "taskbar_right_edge": "Taskbar - far edge (Overlay) - Right"
  - playerWidth: "0 280"
    $name: Player width ↔ (min max, px, 0 = no limit)
  - playerHeight: "40 40"
    $name: Player height ↕ (min max, px, 0 = no limit)
  - playerMargin: "2 2"
    $name: Player margin ↔ (left right, px)
  $name: Main Settings

- DisplaySettings:
  - iconStyle: "fluent_outline"
    $name: Icon style
    $options:
    - "custom_icons": "Custom icon [ Not Working ]"
    - "fluent_outline": "Segoe Fluent Icons (Outline)"
    - "fluent_filled": "Segoe Fluent Icons (Filled)"
    - "mdl2_outline": "Segoe MDL2 Assets (Outline)"
    - "mdl2_filled": "Segoe MDL2 Assets (Filled)"
  - showMediaButtons: true
    $name: Show media buttons
  - mediaButtons: [prev, play, next]
    $name: Media Buttons Order
    $description: Select which media control buttons to display and their order. Duplicates are ignored.
    $options:
    - prev: Previous
    - play: Play/Pause
    - next: Next
    - rewind: Rewind 5s
    - forward: Forward 5s
    - shuffle: Shuffle
    - repeat: Repeat
  - mirrorLayout: false
    $name: Mirror layout (flip album art, text, and buttons to opposite sides)
  - mediaButtonsMargin: "2 2"
    $name: Media buttons margin (left right, px)
  - showTrackTitle: true
    $name: Show track title
  - showFullTitleOnHover: true
    $name: Show full track title on hover (tooltip)
  - showTrackArtist: true
    $name: Show artist name
  - showAlbumArt: true
    $name: Show album art
  - albumArtEmptyBehavior: "show"
    $name: Album art behavior when no cover available
    $options:
    - "show": "Show area (default)"
    - "hide": "Hide area"
    - "show_question": "Show area with question mark"
    - "show_note": "Show area with music note"
  - showPauseOverlay: false
    $name: Show pause icon overlay on album art when paused
  - pauseOverlayOpacity: 60
    $name: Pause overlay background opacity (0-100)
  - showAppIcon: false
    $name: Show media app icon overlay
  - appIconCorner: "bottom_right"
    $name: App icon corner
    $options:
    - "top_left":     "Top left"
    - "top_right":    "Top right"
    - "bottom_left":  "Bottom left"
    - "bottom_right": "Bottom right"
  - appIconSize: 12
    $name: App icon size (px)
  $name: Display Settings

- AppearanceSettings:
  - theme: "auto"
    $name: Theme
    $options:
    - "auto":   "Follow system"
    - "dark":   "Always dark"
    - "light":  "Always light"
    - "custom": "Custom colors"
  - backgroundType: "none"
    $name: Background type
    $options:
    - "none":       "None (transparent)"
    - "solid":      "Solid color"
    - "acrylic":    "Acrylic"
    - "mica":       "Mica"
    - "mica_alt":   "Mica Alt"
    - "album_art":  "Album art"
    - "album_art_blur": "Album art - Blur"
  - cornerRadius: 4
    $name: Panel corner radius (px)
  - albumArtSize: 32
    $name: Album art size (px)
  - albumArtOpacity: 100
    $name: Album art opacity (0-100)
  - albumArtCornerRadius: 4
    $name: Album art corner radius (px)
  - albumArtMargin: "0 0"
    $name: Album art margin (left right, px)
  - textMargin: "4 4"
    $name: Text margin (left right, px)
  - controlsMargin: "0 0"
    $name: Controls margin (left right, px)
  - buttonSpacing: 0
    $name: Spacing between media buttons (px)
  - buttonCornerRadius: 4
    $name: Media button corner radius (px)
  - titleFontSize: 12
    $name: Title font size (pt)
  - titleFont: segoe_ui_variable
    $name: Title Font
    $options:
      - segoe_ui_variable: Segoe UI Variable Display (default)
      - segoe_ui: Segoe UI
      - segoe_ui_semibold: Segoe UI Semibold
      - segoe_ui_bold: Segoe UI Bold
      - segoe_ui_light: Segoe UI Light
      - segoe_ui_semilight: Segoe UI Semilight
      - aptos: Aptos
      - calibri: Calibri
      - cambria: Cambria
      - candara: Candara
      - consolas: Consolas
      - corbel: Corbel
      - arial: Arial
      - trebuchet: Trebuchet MS
      - verdana: Verdana
      - tahoma: Tahoma
      - georgia: Georgia
      - times_new_roman: Times New Roman
  - artistFontSize: 11
    $name: Artist font size (pt)
  - artistFont: segoe_ui_semibold
    $name: Artist Font
    $options:
      - segoe_ui_variable: Segoe UI Variable Display
      - segoe_ui: Segoe UI
      - segoe_ui_semibold: Segoe UI Semibold (default)
      - segoe_ui_bold: Segoe UI Bold
      - segoe_ui_light: Segoe UI Light
      - segoe_ui_semilight: Segoe UI Semilight
      - aptos: Aptos
      - calibri: Calibri
      - cambria: Cambria
      - candara: Candara
      - consolas: Consolas
      - corbel: Corbel
      - arial: Arial
      - trebuchet: Trebuchet MS
      - verdana: Verdana
      - tahoma: Tahoma
      - georgia: Georgia
      - times_new_roman: Times New Roman
  - textSpacing: 1
    $name: Spacing between title and artist (px)
  - customButtonColor: "255 255 255"
    $name: Custom theme - Button color (R G B 0-255)
  - customTitleColor: "255 255 255"
    $name: Custom theme - Title color (R G B 0-255)
  - customArtistColor: "200 200 200"
    $name: Custom theme - Artist color (R G B 0-255)
  $name: Appearance Settings

- BehaviorSettings:
  - playerLeftClick: "play_pause"
    $name: Player - Left click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - playerRightClick: "none"
    $name: Player - Right click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - playerMiddleClick: "stop"
    $name: Player - Middle click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - playerLeftDoubleClick: "none"
    $name: Player - Left double click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - playerRightDoubleClick: "none"
    $name: Player - Right double click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - playerWheelAction: "switch_tracks"
    $name: Player - Mouse wheel
    $options:
    - "none": "Nothing"
    - "switch_tracks": "Switch tracks (up=prev, down=next)"
    - "switch_sessions": "Switch sessions (up/down)"
  - albumArtLeftClick: "none"
    $name: Album art - Left click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - albumArtRightClick: "none"
    $name: Album art - Right click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - albumArtMiddleClick: "none"
    $name: Album art - Middle click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - albumArtLeftDoubleClick: "open_app"
    $name: Album art - Left double click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - albumArtRightDoubleClick: "none"
    $name: Album art - Right double click
    $options:
    - "none": "Nothing"
    - "switch_session": "Switch active media session"
    - "play_pause": "Play/Pause"
    - "next_track": "Next track"
    - "prev_track": "Previous track"
    - "stop": "Stop playback"
    - "open_app": "Open media app"
  - albumArtWheelAction: "switch_sessions"
    $name: Album art - Mouse wheel
    $options:
    - "none": "Nothing"
    - "switch_tracks": "Switch tracks (up=prev, down=next)"
    - "switch_sessions": "Switch sessions (up/down)"
  - hideWhenNoMedia: true
    $name: Hide when no media is playing
  - hideFullscreen: true
    $name: Hide when a fullscreen app is running
  - idleHideSeconds: 0
    $name: Idle auto-hide timeout (seconds, 0 = disabled)
  - enableAlbumArtHoverEffect: false
    $name: Enable button-style hover effect on album art
  - enablePlayerHoverEffect: true
    $name: Enable button-style hover effect on player
  - enableMediaButtonsHoverEffect: true
    $name: Enable hover effect on media buttons (play, prev, next, etc.)
  $name: Behavior Settings

- DebugSettings:
  - enableTreeDump: false
    $name: Dump XAML element names to log on inject
  - showDebugBorders: false
    $name: Show debug borders (hitboxes)
  $name: Debug Settings
*/
// ==/WindhawkModSettings==

#undef GetCurrentTime

#include <winrt/base.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.Core.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Input.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.Media.Imaging.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>
#include <winrt/Windows.UI.Xaml.Input.h>
#include <winrt/Windows.UI.Xaml.Automation.h>
#include <winrt/Windows.UI.ViewManagement.h>
#include <winrt/Windows.Media.Control.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <robuffer.h>

#include <windows.h>
#include <shellapi.h>
#include <windhawk_utils.h>

#include <atomic>
#include <mutex>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <thread>
#include <cmath>
#include <chrono>

using namespace winrt::Windows::UI::Xaml;
using namespace winrt::Windows::UI::Xaml::Controls;
using namespace winrt::Windows::UI::Xaml::Media;
using namespace winrt::Windows::UI::Xaml::Media::Imaging;
using namespace winrt::Windows::UI::Xaml::Input;
using namespace winrt::Windows::Media::Control;
using namespace winrt::Windows::Storage::Streams;

#define LOG(fmt, ...) Wh_Log(L"[FMP] " fmt, ##__VA_ARGS__)

struct ModSettings {
    std::wstring position             = L"tray_right";
    std::wstring albumArtLeftClick    = L"switch_session";
    std::wstring albumArtRightClick   = L"none";
    std::wstring albumArtMiddleClick  = L"none";
    std::wstring albumArtLeftDoubleClick  = L"none";
    std::wstring albumArtRightDoubleClick = L"none";
    std::wstring albumArtWheelAction  = L"switch_tracks";
    std::wstring playerLeftClick      = L"none";
    std::wstring playerRightClick     = L"none";
    std::wstring playerMiddleClick    = L"stop";
    std::wstring playerLeftDoubleClick  = L"none";
    std::wstring playerRightDoubleClick = L"none";
    std::wstring playerWheelAction    = L"none";
    bool         mirrorLayout         = false;
    bool         showMediaButtons     = true;
    int          playerMinWidth       = 200;
    int          playerMaxWidth       = 400;
    int          playerHeight         = 40;
    bool         showAlbumArt         = true;
    std::wstring albumArtEmptyBehavior = L"show";
    bool         showPauseOverlay     = true;
    int          pauseOverlayOpacity  = 60;
    int          albumArtSize         = 30;
    int          albumArtOpacity      = 100;
    int          albumArtLeftMargin   = 2;
    int          albumArtRightMargin  = 0;
    bool         showTrackTitle       = true;
    bool         showFullTitleOnHover = true;
    bool         showTrackArtist      = true;
    std::wstring iconStyle            = L"outline";
    bool         showAppIcon          = false;
    std::wstring appIconCorner        = L"bottom_right";
    int          appIconSize          = 12;
    bool         hideWhenNoMedia      = true;
    bool         enableAlbumArtHoverEffect = false;
    bool         enablePlayerHoverEffect   = true;
    bool         enableMediaButtonsHoverEffect = true;
    int          textMarginLeft       = 5;
    int          textMarginRight      = 0;
    int          controlsMarginLeft   = 4;
    int          controlsMarginRight  = 0;
    int          playerMarginLeft     = 0;
    int          playerMarginRight    = 0;
    int          mediaButtonsLeftMargin  = 0;
    int          mediaButtonsRightMargin = 1;
    bool         hideFullscreen       = true;
    int          idleHideSeconds      = 0;
    std::wstring theme                = L"auto";
    std::wstring backgroundType       = L"none";
    int          cornerRadius         = 5;
    int          albumArtCornerRadius = 4;
    int          buttonSpacing        = 0;
    int          buttonCornerRadius   = 14;
    int          titleFontSize        = 12;
    int          artistFontSize       = 10;
    std::wstring titleFont            = L"segoe_ui_variable";
    std::wstring artistFont           = L"segoe_ui_semibold";
    int          textSpacing          = 1;
    std::wstring customButtonColor    = L"255 255 255";
    std::wstring customTitleColor     = L"255 255 255";
    std::wstring customArtistColor    = L"200 200 200";
    bool         enableTreeDump       = false;
    bool         showDebugBorders     = false;
};
static ModSettings g_settings;

enum class MediaButtonType {
    Previous = 1,
    PlayPause = 2,
    Next = 3,
    Rewind5s = 4,
    Forward5s = 5,
    Shuffle = 6,
    Repeat = 7,
};

struct MediaButtonDefinition {
    std::wstring keyword;
    MediaButtonType type;
    int cmd;
};

static const std::vector<MediaButtonDefinition> g_mediaButtonDefinitions = {
    {L"prev", MediaButtonType::Previous, 1},
    {L"play", MediaButtonType::PlayPause, 2},
    {L"next", MediaButtonType::Next, 3},
    {L"rewind", MediaButtonType::Rewind5s, 5},
    {L"forward", MediaButtonType::Forward5s, 6},
    {L"shuffle", MediaButtonType::Shuffle, 7},
    {L"repeat", MediaButtonType::Repeat, 8},
};

struct MediaButtonConfig {
    MediaButtonType type;
    int cmd;
};

static std::vector<MediaButtonConfig> g_mediaButtons;
static std::mutex g_mediaButtonsMutex;

static std::wstring MapFontName(const std::wstring& key) {
    if (key == L"segoe_ui_variable") return L"Segoe UI Variable Display";
    if (key == L"segoe_ui") return L"Segoe UI";
    if (key == L"segoe_ui_semibold") return L"Segoe UI Semibold";
    if (key == L"segoe_ui_bold") return L"Segoe UI Bold";
    if (key == L"segoe_ui_light") return L"Segoe UI Light";
    if (key == L"segoe_ui_semilight") return L"Segoe UI Semilight";
    if (key == L"aptos") return L"Aptos";
    if (key == L"calibri") return L"Calibri";
    if (key == L"cambria") return L"Cambria";
    if (key == L"candara") return L"Candara";
    if (key == L"consolas") return L"Consolas";
    if (key == L"corbel") return L"Corbel";
    if (key == L"arial") return L"Arial";
    if (key == L"trebuchet") return L"Trebuchet MS";
    if (key == L"verdana") return L"Verdana";
    if (key == L"tahoma") return L"Tahoma";
    if (key == L"georgia") return L"Georgia";
    if (key == L"times_new_roman") return L"Times New Roman";
    return L"Segoe UI Variable Display";
}

static void LoadSettings() {
    auto Str = [](const wchar_t* key, const wchar_t* def) -> std::wstring {
        PCWSTR p = Wh_GetStringSetting(key);
        std::wstring r = p ? p : def;
        Wh_FreeStringSetting(p);
        return r;
    };
    auto Int = [](const wchar_t* key, int lo, int hi, int def) -> int {
        int v = Wh_GetIntSetting(key);
        if (v == 0 && def != 0) v = def;
        return std::clamp(v, lo, hi);
    };
    auto ParseMargin = [&Str](const wchar_t* key, const wchar_t* def, int& left, int& right) {
        std::wstring val = Str(key, def);
        try {
            size_t space = val.find(L' ');
            if (space != std::wstring::npos) {
                left  = std::stoi(val.substr(0, space));
                right = std::stoi(val.substr(space + 1));
            } else if (!val.empty()) {
                left = right = std::stoi(val);
            }
        } catch (...) {
            std::wstring d(def);
            size_t space = d.find(L' ');
            try {
                if (space != std::wstring::npos) {
                    left  = std::stoi(d.substr(0, space));
                    right = std::stoi(d.substr(space + 1));
                } else {
                    left = right = std::stoi(d);
                }
            } catch (...) { left = right = 0; }
        }
    };

    g_settings.position             = Str(L"MainSettings.position",    L"tray_right");
    ParseMargin(L"MainSettings.playerMargin", L"0 0", g_settings.playerMarginLeft, g_settings.playerMarginRight);
    ParseMargin(L"MainSettings.playerWidth", L"80 320", g_settings.playerMinWidth, g_settings.playerMaxWidth);
    int playerHeightMin = 40, playerHeightMax = 40;
    ParseMargin(L"MainSettings.playerHeight", L"40 40", playerHeightMin, playerHeightMax);
    g_settings.playerHeight = playerHeightMax;

    g_settings.mirrorLayout         = Wh_GetIntSetting(L"DisplaySettings.mirrorLayout") != 0;
    g_settings.showMediaButtons     = Wh_GetIntSetting(L"DisplaySettings.showMediaButtons") != 0;
    ParseMargin(L"DisplaySettings.mediaButtonsMargin", L"0 1", g_settings.mediaButtonsLeftMargin, g_settings.mediaButtonsRightMargin);
    g_settings.showTrackTitle       = Wh_GetIntSetting(L"DisplaySettings.showTrackTitle")    != 0;
    g_settings.showFullTitleOnHover = Wh_GetIntSetting(L"DisplaySettings.showFullTitleOnHover") != 0;
    g_settings.showTrackArtist      = Wh_GetIntSetting(L"DisplaySettings.showTrackArtist")   != 0;
    g_settings.showAlbumArt         = Wh_GetIntSetting(L"DisplaySettings.showAlbumArt")      != 0;
    g_settings.albumArtEmptyBehavior = Str(L"DisplaySettings.albumArtEmptyBehavior", L"show");
    g_settings.showPauseOverlay     = Wh_GetIntSetting(L"DisplaySettings.showPauseOverlay")  != 0;
    g_settings.pauseOverlayOpacity  = Int(L"DisplaySettings.pauseOverlayOpacity",     0, 100,  60);
    g_settings.iconStyle            = Str(L"DisplaySettings.iconStyle", L"fluent_outline");
    g_settings.showAppIcon          = Wh_GetIntSetting(L"DisplaySettings.showAppIcon")       != 0;
    g_settings.appIconCorner        = Str(L"DisplaySettings.appIconCorner",  L"bottom_right");
    g_settings.appIconSize          = Int(L"DisplaySettings.appIconSize",         8,  32,  12);

    g_settings.theme                = Str(L"AppearanceSettings.theme",          L"auto");
    g_settings.backgroundType       = Str(L"AppearanceSettings.backgroundType", L"none");
    g_settings.cornerRadius         = Int(L"AppearanceSettings.cornerRadius",          0,  24,   5);
    g_settings.albumArtSize         = Int(L"AppearanceSettings.albumArtSize",         16,  60,  30);
    g_settings.albumArtOpacity      = Int(L"AppearanceSettings.albumArtOpacity",       0, 100, 100);
    g_settings.albumArtCornerRadius = Int(L"AppearanceSettings.albumArtCornerRadius",  0,  24,   4);
    ParseMargin(L"AppearanceSettings.albumArtMargin", L"2 0", g_settings.albumArtLeftMargin, g_settings.albumArtRightMargin);
    ParseMargin(L"AppearanceSettings.textMargin", L"5 0", g_settings.textMarginLeft, g_settings.textMarginRight);
    ParseMargin(L"AppearanceSettings.controlsMargin", L"4 0", g_settings.controlsMarginLeft, g_settings.controlsMarginRight);
    g_settings.buttonSpacing        = Wh_GetIntSetting(L"AppearanceSettings.buttonSpacing");
    g_settings.buttonCornerRadius   = Int(L"AppearanceSettings.buttonCornerRadius",   0,  24,  14);
    g_settings.titleFontSize        = Int(L"AppearanceSettings.titleFontSize",         7,  24,  12);
    g_settings.titleFont            = MapFontName(Str(L"AppearanceSettings.titleFont", L"segoe_ui_variable"));
    g_settings.artistFontSize       = Int(L"AppearanceSettings.artistFontSize",        7,  24,  10);
    g_settings.artistFont           = MapFontName(Str(L"AppearanceSettings.artistFont", L"segoe_ui_semibold"));
    g_settings.textSpacing          = Int(L"AppearanceSettings.textSpacing",           0,  20,   1);
    g_settings.customButtonColor    = Str(L"AppearanceSettings.customButtonColor", L"255 255 255");
    g_settings.customTitleColor     = Str(L"AppearanceSettings.customTitleColor", L"255 255 255");
    g_settings.customArtistColor    = Str(L"AppearanceSettings.customArtistColor", L"200 200 200");

    g_settings.albumArtLeftClick    = Str(L"BehaviorSettings.albumArtLeftClick", L"switch_session");
    g_settings.albumArtRightClick   = Str(L"BehaviorSettings.albumArtRightClick", L"none");
    g_settings.albumArtMiddleClick  = Str(L"BehaviorSettings.albumArtMiddleClick", L"none");
    g_settings.albumArtLeftDoubleClick  = Str(L"BehaviorSettings.albumArtLeftDoubleClick", L"none");
    g_settings.albumArtRightDoubleClick = Str(L"BehaviorSettings.albumArtRightDoubleClick", L"none");
    g_settings.albumArtWheelAction  = Str(L"BehaviorSettings.albumArtWheelAction", L"switch_tracks");
    g_settings.playerLeftClick      = Str(L"BehaviorSettings.playerLeftClick", L"none");
    g_settings.playerRightClick     = Str(L"BehaviorSettings.playerRightClick", L"none");
    g_settings.playerMiddleClick    = Str(L"BehaviorSettings.playerMiddleClick", L"stop");
    g_settings.playerLeftDoubleClick  = Str(L"BehaviorSettings.playerLeftDoubleClick", L"none");
    g_settings.playerRightDoubleClick = Str(L"BehaviorSettings.playerRightDoubleClick", L"none");
    g_settings.playerWheelAction    = Str(L"BehaviorSettings.playerWheelAction", L"none");
    g_settings.hideWhenNoMedia      = Wh_GetIntSetting(L"BehaviorSettings.hideWhenNoMedia")   != 0;
    g_settings.hideFullscreen       = Wh_GetIntSetting(L"BehaviorSettings.hideFullscreen")    != 0;
    g_settings.idleHideSeconds      = std::max(Wh_GetIntSetting(L"BehaviorSettings.idleHideSeconds"), 0);
    g_settings.enableAlbumArtHoverEffect = Wh_GetIntSetting(L"BehaviorSettings.enableAlbumArtHoverEffect") != 0;
    g_settings.enablePlayerHoverEffect   = Wh_GetIntSetting(L"BehaviorSettings.enablePlayerHoverEffect") != 0;
    g_settings.enableMediaButtonsHoverEffect = Wh_GetIntSetting(L"BehaviorSettings.enableMediaButtonsHoverEffect") != 0;

    g_settings.enableTreeDump       = Wh_GetIntSetting(L"DebugSettings.enableTreeDump")    != 0;
    g_settings.showDebugBorders     = Wh_GetIntSetting(L"DebugSettings.showDebugBorders")  != 0;

    {
        std::lock_guard<std::mutex> lock(g_mediaButtonsMutex);
        g_mediaButtons.clear();
        std::set<MediaButtonType> seen;

        for (int i = 0; i < 10; i++) {
            PCWSTR itemStr = Wh_GetStringSetting(L"DisplaySettings.mediaButtons[%d]", i);
            if (!itemStr || !*itemStr) {
                Wh_FreeStringSetting(itemStr);
                break;
            }

            std::wstring keyword(itemStr);
            Wh_FreeStringSetting(itemStr);

            for (const auto& def : g_mediaButtonDefinitions) {
                if (def.keyword == keyword && seen.insert(def.type).second) {
                    g_mediaButtons.push_back({def.type, def.cmd});
                    break;
                }
            }
        }

        if (g_mediaButtons.empty()) {
            g_mediaButtons = {
                {MediaButtonType::Previous, 1},
                {MediaButtonType::PlayPause, 2},
                {MediaButtonType::Next, 3}
            };
        }
    }

    if (g_settings.position == L"taskbar_left")
        g_settings.position = L"taskbar_left_start";
    else if (g_settings.position == L"taskbar_right")
        g_settings.position = L"taskbar_right_start";
    else if (g_settings.position == L"taskbar_after_start")
        g_settings.position = L"taskbar_after_search_right";
    else if (g_settings.position == L"taskbar_after_search")
        g_settings.position = L"taskbar_after_search_right";
    else if (g_settings.position == L"tray_before_omni")
        g_settings.position = L"tray_before_omni_right";
    else if (g_settings.position == L"tray_after_showdesktop")
        g_settings.position = L"tray_after_showdesktop_right";
}

static HWND FindCurrentProcessTaskbarWnd();
static void DispatchMediaUpdate();
static void ApplySettings();
static void StartRetryThread();
static void StopRetryThread();

static std::atomic<bool> g_unloading{false};
static std::atomic<bool> g_applyingSettings{false};

static HWND             g_taskbarWnd      = nullptr;
static Grid             g_playerGrid      = nullptr;
static FrameworkElement g_injectionParent = nullptr;
static int              g_playerColumn    = -1;
static std::atomic<bool> g_needsUiUpdate{false};

static HWND  g_themeWatchWnd  = nullptr;
static HANDLE g_themeWatchThread  = nullptr;
static HANDLE g_themeWatchStop    = nullptr;

static FrameworkElement g_trackedElement = nullptr;
static std::wstring g_trackPosition = L"";
static winrt::event_token g_layoutUpdateToken{};

using CTaskBand_GetTaskbarHost_t  = void*(WINAPI*)(void*, void*);
using TaskbarHost_FrameHeight_t   = int  (WINAPI*)(void*);
using Std_Ref_Decref_t            = void (WINAPI*)(void*);

static CTaskBand_GetTaskbarHost_t  CTaskBand_GetTaskbarHost_Original  = nullptr;
static TaskbarHost_FrameHeight_t   TaskbarHost_FrameHeight_Original   = nullptr;
static Std_Ref_Decref_t            Std_Ref_Decref_Original            = nullptr;
static void* CTaskBand_ITaskListWndSite_vftable = nullptr;
static bool                        g_taskbarViewDllLoaded             = false;

using WindowThreadProc = void(*)(void*);

static bool RunFromWindowThread(HWND hWnd, WindowThreadProc proc, void* param) {
    static const UINT kMsg = RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);

    struct Payload { WindowThreadProc proc; void* param; };

    DWORD tid = GetWindowThreadProcessId(hWnd, nullptr);
    if (!tid) return false;

    if (tid == GetCurrentThreadId()) {
        proc(param);
        return true;
    }

    HHOOK hook = SetWindowsHookExW(WH_CALLWNDPROC,
        [](int code, WPARAM w, LPARAM l) -> LRESULT {
            if (code == HC_ACTION) {
                auto* cwp = reinterpret_cast<const CWPSTRUCT*>(l);
                static const UINT kM = RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);
                if (cwp->message == kM) {
                    auto* p = reinterpret_cast<Payload*>(cwp->lParam);
                    p->proc(p->param);
                }
            }
            return CallNextHookEx(nullptr, code, w, l);
        }, nullptr, tid);

    if (!hook) return false;

    Payload pay{proc, param};
    SendMessageW(hWnd, kMsg, 0, reinterpret_cast<LPARAM>(&pay));
    UnhookWindowsHookEx(hook);
    return true;
}

struct MediaState {
    std::wstring      title;
    std::wstring      artist;
    std::wstring      appUserModelId;
    bool              isPlaying     = false;
    bool              hasMedia      = false;
    std::vector<BYTE> thumbnailBytes;
    uint64_t          thumbnailHash = 0;
    std::vector<BYTE> appIconBytes;
    std::wstring      appIconKey;
};

static MediaState g_media;
static std::mutex g_mediaMtx;

enum class RepeatMode {
    Off = 0,
    All = 1,
    One = 2,
};

static std::atomic<bool> g_shuffleEnabled{false};
static std::atomic<RepeatMode> g_repeatMode{RepeatMode::Off};

static std::wstring g_cachedAlbumTitle;
static std::wstring g_cachedAlbumArtist;
static std::vector<BYTE> g_cachedThumbnailBytes;
static int g_cachedAppIconSize = -1;

static GlobalSystemMediaTransportControlsSessionManager g_sessionMgr     = nullptr;
static GlobalSystemMediaTransportControlsSession        g_currentSession = nullptr;
static std::mutex  g_sessionMtx;
static bool g_userSwitchedSession = false;

static winrt::event_token g_evSessionsChanged{};
static winrt::event_token g_evCurrentChanged{};
static winrt::event_token g_evMediaProps{};
static winrt::event_token g_evPlayback{};

static HANDLE g_mediaThread    = nullptr;
static HANDLE g_mediaStopEvent = nullptr;

static bool IsSystemLightTheme() {
    DWORD v = 0, sz = sizeof(v);
    if (RegGetValueW(HKEY_CURRENT_USER,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
        L"SystemUsesLightTheme", RRF_RT_DWORD, nullptr, &v, &sz) == ERROR_SUCCESS) {
        return v != 0;
    }
    v = 0; sz = sizeof(v);
    RegGetValueW(HKEY_CURRENT_USER,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
        L"AppsUseLightTheme", RRF_RT_DWORD, nullptr, &v, &sz);
    return v != 0;
}

static bool IsLightTheme() {
    if (g_settings.theme == L"light") return true;
    if (g_settings.theme == L"dark")  return false;
    return IsSystemLightTheme();
}

static winrt::Windows::UI::Color TextColor() {
    if (g_settings.theme == L"custom") {
        int r = 255, g = 255, b = 255;
        size_t pos1 = g_settings.customTitleColor.find(L' ');
        size_t pos2 = g_settings.customTitleColor.find(L' ', pos1 + 1);
        if (pos1 != std::wstring::npos && pos2 != std::wstring::npos) {
            try {
                r = std::stoi(g_settings.customTitleColor.substr(0, pos1));
                g = std::stoi(g_settings.customTitleColor.substr(pos1 + 1, pos2 - pos1 - 1));
                b = std::stoi(g_settings.customTitleColor.substr(pos2 + 1));
                r = std::clamp(r, 0, 255);
                g = std::clamp(g, 0, 255);
                b = std::clamp(b, 0, 255);
            } catch (...) {}
        }
        return winrt::Windows::UI::Color{0xE5, (BYTE)r, (BYTE)g, (BYTE)b};
    }
    return IsLightTheme()
        ? winrt::Windows::UI::Color{0xE5, 0x00, 0x00, 0x00}
        : winrt::Windows::UI::Color{0xE5, 0xFF, 0xFF, 0xFF};
}

static winrt::Windows::UI::Color ArtistColor() {
    if (g_settings.theme == L"custom") {
        int r = 200, g = 200, b = 200;
        size_t pos1 = g_settings.customArtistColor.find(L' ');
        size_t pos2 = g_settings.customArtistColor.find(L' ', pos1 + 1);
        if (pos1 != std::wstring::npos && pos2 != std::wstring::npos) {
            try {
                r = std::stoi(g_settings.customArtistColor.substr(0, pos1));
                g = std::stoi(g_settings.customArtistColor.substr(pos1 + 1, pos2 - pos1 - 1));
                b = std::stoi(g_settings.customArtistColor.substr(pos2 + 1));
                r = std::clamp(r, 0, 255);
                g = std::clamp(g, 0, 255);
                b = std::clamp(b, 0, 255);
            } catch (...) {}
        }
        return winrt::Windows::UI::Color{0x99, (BYTE)r, (BYTE)g, (BYTE)b};
    }
    auto c = TextColor();
    return winrt::Windows::UI::Color{0x99, c.R, c.G, c.B};
}

static winrt::Windows::UI::Color ButtonColor() {
    if (g_settings.theme == L"custom") {
        int r = 255, g = 255, b = 255;
        size_t pos1 = g_settings.customButtonColor.find(L' ');
        size_t pos2 = g_settings.customButtonColor.find(L' ', pos1 + 1);
        if (pos1 != std::wstring::npos && pos2 != std::wstring::npos) {
            try {
                r = std::stoi(g_settings.customButtonColor.substr(0, pos1));
                g = std::stoi(g_settings.customButtonColor.substr(pos1 + 1, pos2 - pos1 - 1));
                b = std::stoi(g_settings.customButtonColor.substr(pos2 + 1));
                r = std::clamp(r, 0, 255);
                g = std::clamp(g, 0, 255);
                b = std::clamp(b, 0, 255);
            } catch (...) {}
        }
        return winrt::Windows::UI::Color{0xFF, (BYTE)r, (BYTE)g, (BYTE)b};
    }
    return TextColor();
}

static winrt::Windows::UI::Color PanelBgColor() {
    if (g_settings.backgroundType != L"solid") {
        return winrt::Windows::UI::Color{0x00, 0x00, 0x00, 0x00};
    }
    if (IsLightTheme()) {
        return winrt::Windows::UI::Color{0xCC, 0xF3, 0xF3, 0xF3};
    } else {
        return winrt::Windows::UI::Color{0xCC, 0x20, 0x20, 0x20};
    }
}

static SolidColorBrush MakeBrush(winrt::Windows::UI::Color c) {
    SolidColorBrush b; b.Color(c); return b;
}

static winrt::Windows::UI::Color GetSystemButtonHoverColor() {
    if (IsLightTheme()) return winrt::Windows::UI::Color{0x25, 0x00, 0x00, 0x00};
    else return winrt::Windows::UI::Color{0x10, 0xFF, 0xFF, 0xFF};
}

static winrt::Windows::UI::Color GetSystemButtonPressedColor() {
    if (IsLightTheme()) return winrt::Windows::UI::Color{0x40, 0x00, 0x00, 0x00};
    else return winrt::Windows::UI::Color{0x0A, 0xFF, 0xFF, 0xFF};
}

static winrt::Windows::UI::Color GetSystemButtonBorderColor() {
    if (IsLightTheme()) return winrt::Windows::UI::Color{0x20, 0x00, 0x00, 0x00};
    else return winrt::Windows::UI::Color{0x14, 0xFF, 0xFF, 0xFF};
}

static Brush MakeBackgroundBrush() {
    auto& t = g_settings.backgroundType;

    if (t == L"acrylic") {
        try {
            winrt::Windows::UI::Xaml::Media::AcrylicBrush brush;
            brush.BackgroundSource(winrt::Windows::UI::Xaml::Media::AcrylicBackgroundSource::HostBackdrop);
            auto col = IsLightTheme()
                ? winrt::Windows::UI::Color{0x99, 0xF3, 0xF3, 0xF3}
                : winrt::Windows::UI::Color{0x99, 0x20, 0x20, 0x20};
            brush.TintColor(col);
            brush.TintOpacity(0.6);
            brush.FallbackColor(IsLightTheme()
                ? winrt::Windows::UI::Color{0xCC, 0xF3, 0xF3, 0xF3}
                : winrt::Windows::UI::Color{0xCC, 0x20, 0x20, 0x20});
            return brush;
        } catch (...) {}
    }

    if (t == L"mica" || t == L"mica_alt") {
        auto col = IsLightTheme()
            ? winrt::Windows::UI::Color{0x33, 0xF3, 0xF3, 0xF3}
            : winrt::Windows::UI::Color{0x33, 0x20, 0x20, 0x20};
        return MakeBrush(col);
    }

    if (t == L"solid") {
        return MakeBrush(PanelBgColor());
    }

    return MakeBrush({0x00, 0x00, 0x00, 0x00});
}

static FrameworkElement FindChildByName(FrameworkElement const& root, std::wstring_view name, int depth = 32) {
    if (!root || depth == 0) return nullptr;
    int n = VisualTreeHelper::GetChildrenCount(root);
    for (int i = 0; i < n; ++i) {
        auto child = VisualTreeHelper::GetChild(root, i).try_as<FrameworkElement>();
        if (!child) continue;
        if (child.Name() == name) return child;
        if (auto found = FindChildByName(child, name, depth - 1)) return found;
    }
    return nullptr;
}

static void DumpXamlTree(DependencyObject const& node, int depth, int maxDepth) {
    if (!node || depth > maxDepth) return;
    std::wstring indent(depth * 2, L' ');
    auto fe = node.try_as<FrameworkElement>();
    std::wstring name  = fe ? std::wstring(fe.Name()) : L"";
    winrt::hstring typeHstr = winrt::get_class_name(node);
    std::wstring type  = std::wstring(typeHstr);
    auto dot = type.rfind(L'.');
    if (dot != std::wstring::npos) type = type.substr(dot + 1);

    int col = fe ? Grid::GetColumn(fe) : -1;
    if (!name.empty()) LOG(L"%ls[%ls] name='%ls' col=%d", indent.c_str(), type.c_str(), name.c_str(), col);
    else LOG(L"%ls[%ls]", indent.c_str(), type.c_str());

    int n = VisualTreeHelper::GetChildrenCount(node);
    for (int i = 0; i < n; ++i) {
        auto child = VisualTreeHelper::GetChild(node, i);
        if (child) DumpXamlTree(child, depth + 1, maxDepth);
    }
}

static constexpr wchar_t kGridName[]        = L"FluentMediaBar";
static constexpr wchar_t kArtImageName[]    = L"FluentMedia_Art";
static constexpr wchar_t kAppIconImageName[]= L"FluentMedia_AppIcon";
static constexpr wchar_t kTextStackName[]   = L"FluentMedia_TextStack";
static constexpr wchar_t kTitleBlockName[]  = L"FluentMedia_Title";
static constexpr wchar_t kArtistBlockName[] = L"FluentMedia_Artist";
static constexpr wchar_t kPlayBtnName[]     = L"FluentMedia_Play";
static constexpr wchar_t kPrevBtnName[]     = L"FluentMedia_Prev";
static constexpr wchar_t kNextBtnName[]     = L"FluentMedia_Next";
static constexpr wchar_t kRewindBtnName[]   = L"FluentMedia_Rewind";
static constexpr wchar_t kForwardBtnName[]  = L"FluentMedia_Forward";
static constexpr wchar_t kShuffleBtnName[]  = L"FluentMedia_Shuffle";
static constexpr wchar_t kRepeatBtnName[]   = L"FluentMedia_Repeat";

static int  g_idleSeconds  = 0;
static bool g_hiddenByIdle = false;

static void SendMediaCommandAsync(int cmd) {
    std::thread([cmd]() {
        if (g_unloading) return;
        winrt::init_apartment(winrt::apartment_type::multi_threaded);
        try {
            GlobalSystemMediaTransportControlsSession session{nullptr};
            { std::lock_guard<std::mutex> lk(g_sessionMtx); session = g_currentSession; }
            if (session) {
                switch (cmd) {
                    case 1: session.TrySkipPreviousAsync().get();    break;
                    case 2: session.TryTogglePlayPauseAsync().get(); break;
                    case 3: session.TrySkipNextAsync().get();        break;
                    case 4: session.TryStopAsync().get();            break;
                    case 5:
                        try {
                            auto timeline = session.GetTimelineProperties();
                            auto currentPos = timeline.Position();
                            auto newPos = currentPos - std::chrono::seconds(5);
                            if (newPos.count() < 0) newPos = std::chrono::seconds(0);
                            session.TryChangePlaybackPositionAsync(newPos.count()).get();
                        } catch (...) {}
                        break;
                    case 6:
                        try {
                            auto timeline = session.GetTimelineProperties();
                            auto currentPos = timeline.Position();
                            auto endTime = timeline.EndTime();
                            auto newPos = currentPos + std::chrono::seconds(5);
                            if (newPos > endTime) newPos = endTime;
                            session.TryChangePlaybackPositionAsync(newPos.count()).get();
                        } catch (...) {}
                        break;
                    case 7:
                        try {
                            bool currentShuffle = g_shuffleEnabled.load();
                            session.TryChangeShuffleActiveAsync(!currentShuffle).get();
                        } catch (...) {}
                        break;
                    case 8:
                        try {
                            RepeatMode current = g_repeatMode.load();
                            winrt::Windows::Media::MediaPlaybackAutoRepeatMode mode;

                            switch (current) {
                                case RepeatMode::Off:
                                    mode = winrt::Windows::Media::MediaPlaybackAutoRepeatMode::List;
                                    break;
                                case RepeatMode::All:
                                    mode = winrt::Windows::Media::MediaPlaybackAutoRepeatMode::Track;
                                    break;
                                case RepeatMode::One:
                                default:
                                    mode = winrt::Windows::Media::MediaPlaybackAutoRepeatMode::None;
                                    break;
                            }

                            session.TryChangeAutoRepeatModeAsync(mode).get();
                        } catch (...) {}
                        break;
                }
            }
        } catch (...) {}
        winrt::uninit_apartment();
    }).detach();
}

static void FetchMediaPropertiesAsync();
static void FetchPlaybackInfoAsync();
static void OnSessionsChanged();
static void AttachToSession(GlobalSystemMediaTransportControlsSession session);

static void SwitchMediaSession() {
    GlobalSystemMediaTransportControlsSession nextSession{nullptr};
    {
        std::lock_guard<std::mutex> lk(g_sessionMtx);
        if (!g_sessionMgr) return;
        g_userSwitchedSession = true;
        try {
            auto sessions = g_sessionMgr.GetSessions();
            int count = (int)sessions.Size();
            if (count <= 1) return;

            int currentIndex = -1;
            if (g_currentSession) {
                auto curId = g_currentSession.SourceAppUserModelId();
                for (int i = 0; i < count; ++i) {
                    if (sessions.GetAt(i).SourceAppUserModelId() == curId) {
                        currentIndex = i;
                        break;
                    }
                }
            }
            int nextIndex = (currentIndex + 1) % count;
            nextSession = sessions.GetAt(nextIndex);
        } catch (...) { return; }
    }
    if (nextSession) {
        AttachToSession(nextSession);
    }
}

static void ExecuteMediaAction(const std::wstring& action) {
    if (action == L"none") {
        return;
    } else if (action == L"switch_session") {
        SwitchMediaSession();
    } else if (action == L"play_pause") {
        SendMediaCommandAsync(2);
        DispatchMediaUpdate();
    } else if (action == L"next_track") {
        SendMediaCommandAsync(3);
        DispatchMediaUpdate();
    } else if (action == L"prev_track") {
        SendMediaCommandAsync(1);
        DispatchMediaUpdate();
    } else if (action == L"stop") {
        SendMediaCommandAsync(4);
    } else if (action == L"open_app") {
        std::thread([]() {
            std::wstring app;
            {
                std::lock_guard<std::mutex> lk(g_sessionMtx);
                if (g_currentSession) {
                    try {
                        app = std::wstring(g_currentSession.SourceAppUserModelId());
                    } catch (...) {}
                }
            }
            if (!app.empty()) {
                HWND foundWindow = nullptr;

                struct FindData {
                    const std::wstring* aumid;
                    HWND hwnd;
                };
                FindData fd{&app, nullptr};

                EnumWindows([](HWND hWnd, LPARAM lParam) -> BOOL {
                    auto* fd2 = reinterpret_cast<FindData*>(lParam);
                    if (!IsWindowVisible(hWnd)) return TRUE;

                    DWORD pid = 0;
                    GetWindowThreadProcessId(hWnd, &pid);
                    if (!pid) return TRUE;

                    wchar_t procPath[MAX_PATH] = {};
                    HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
                    if (hProc) {
                        DWORD sz = MAX_PATH;
                        QueryFullProcessImageNameW(hProc, 0, procPath, &sz);
                        CloseHandle(hProc);
                    }

                    std::wstring procName = procPath;
                    auto slash = procName.rfind(L'\\');
                    if (slash != std::wstring::npos) procName = procName.substr(slash + 1);

                    auto dot = procName.rfind(L'.');
                    if (dot != std::wstring::npos) procName = procName.substr(0, dot);

                    const std::wstring& aumid = *fd2->aumid;
                    std::wstring aumidLower = aumid;
                    std::wstring procLower = procName;
                    for (auto& c : aumidLower) c = towlower(c);
                    for (auto& c : procLower) c = towlower(c);

                    if (aumidLower.find(procLower) != std::wstring::npos ||
                        procLower.find(aumidLower) != std::wstring::npos) {
                        fd2->hwnd = hWnd;
                        return FALSE;
                    }
                    return TRUE;
                }, reinterpret_cast<LPARAM>(&fd));

                foundWindow = fd.hwnd;

                if (foundWindow) {
                    if (IsIconic(foundWindow)) {
                        ShowWindow(foundWindow, SW_RESTORE);
                    }
                    SetForegroundWindow(foundWindow);
                } else {
                    std::wstring shellPath = L"shell:AppsFolder\\" + app;
                    ShellExecuteW(nullptr, L"open", shellPath.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
                }
            }
        }).detach();
    }
}

static std::vector<BYTE> FetchAppIconBytes(const std::wstring& appUserModelId, int iconSize) {
    std::vector<BYTE> result;
    if (appUserModelId.empty()) return result;

    HICON hIcon = nullptr;

    struct FindData { const std::wstring* aumid; HICON icon; DWORD pid; };
    FindData fd{&appUserModelId, nullptr, 0};

    EnumWindows([](HWND hWnd, LPARAM lParam) -> BOOL {
        auto* fd2 = reinterpret_cast<FindData*>(lParam);
        if (!IsWindowVisible(hWnd)) return TRUE;

        DWORD pid = 0;
        GetWindowThreadProcessId(hWnd, &pid);
        if (!pid) return TRUE;

        wchar_t procPath[MAX_PATH] = {};
        HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
        if (hProc) {
            DWORD sz = MAX_PATH;
            QueryFullProcessImageNameW(hProc, 0, procPath, &sz);
            CloseHandle(hProc);
        }

        std::wstring procName = procPath;
        auto slash = procName.rfind(L'\\');
        if (slash != std::wstring::npos) procName = procName.substr(slash + 1);

        auto dot = procName.rfind(L'.');
        if (dot != std::wstring::npos) procName = procName.substr(0, dot);

        const std::wstring& aumid = *fd2->aumid;
        std::wstring aumidLower = aumid;
        std::wstring procLower  = procName;
        for (auto& c : aumidLower) c = towlower(c);
        for (auto& c : procLower)  c = towlower(c);

        if (aumidLower.find(procLower) == std::wstring::npos &&
            procLower.find(aumidLower) == std::wstring::npos)
            return TRUE;

        HICON icon = (HICON)GetClassLongPtrW(hWnd, GCLP_HICONSM);
        if (!icon) icon = (HICON)GetClassLongPtrW(hWnd, GCLP_HICON);
        if (!icon) icon = (HICON)SendMessageW(hWnd, WM_GETICON, ICON_SMALL, 0);
        if (!icon) icon = (HICON)SendMessageW(hWnd, WM_GETICON, ICON_BIG,   0);

        if (icon) {
            fd2->icon = icon;
            fd2->pid  = pid;
            return FALSE;
        }
        return TRUE;
    }, reinterpret_cast<LPARAM>(&fd));

    hIcon = fd.icon;

    if (!hIcon && fd.pid) {
        wchar_t procPath[MAX_PATH] = {};
        HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, fd.pid);
        if (hProc) {
            DWORD sz = MAX_PATH;
            QueryFullProcessImageNameW(hProc, 0, procPath, &sz);
            CloseHandle(hProc);
        }
        if (procPath[0]) {
            SHFILEINFOW sfi{};
            if (SHGetFileInfoW(procPath, 0, &sfi, sizeof(sfi), SHGFI_ICON | SHGFI_SMALLICON))
                hIcon = sfi.hIcon;
        }
    }

    if (!hIcon) return result;

    ICONINFO ii{};
    if (!GetIconInfo(hIcon, &ii)) return result;

    BITMAP bm{};
    GetObjectW(ii.hbmColor ? ii.hbmColor : ii.hbmMask, sizeof(bm), &bm);

    int w = bm.bmWidth  ? bm.bmWidth  : iconSize;
    int h = bm.bmHeight ? bm.bmHeight : iconSize;

    HDC hdc = CreateCompatibleDC(nullptr);
    BITMAPINFO bi{};
    bi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
    bi.bmiHeader.biWidth       = w;
    bi.bmiHeader.biHeight      = -h;
    bi.bmiHeader.biPlanes      = 1;
    bi.bmiHeader.biBitCount    = 32;
    bi.bmiHeader.biCompression = BI_RGB;

    std::vector<BYTE> pixels(w * h * 4, 0);
    HBITMAP hBmp = CreateCompatibleBitmap(GetDC(nullptr), w, h);
    HBITMAP hOld = (HBITMAP)SelectObject(hdc, hBmp);
    DrawIconEx(hdc, 0, 0, hIcon, w, h, 0, nullptr, DI_NORMAL);
    GetDIBits(hdc, hBmp, 0, h, pixels.data(), &bi, DIB_RGB_COLORS);
    SelectObject(hdc, hOld);
    DeleteObject(hBmp);
    DeleteDC(hdc);

    if (ii.hbmColor) DeleteObject(ii.hbmColor);
    if (ii.hbmMask)  DeleteObject(ii.hbmMask);

    for (int i = 0; i + 3 < (int)pixels.size(); i += 4) {
        std::swap(pixels[i], pixels[i + 2]);
    }

    if (w != iconSize || h != iconSize) {
        std::vector<BYTE> scaled(iconSize * iconSize * 4, 0);
        for (int dy = 0; dy < iconSize; ++dy) {
            for (int dx = 0; dx < iconSize; ++dx) {
                int sx = dx * w / iconSize;
                int sy = dy * h / iconSize;
                int si = (sy * w + sx) * 4;
                int di = (dy * iconSize + dx) * 4;
                scaled[di+0] = pixels[si+0];
                scaled[di+1] = pixels[si+1];
                scaled[di+2] = pixels[si+2];
                scaled[di+3] = pixels[si+3];
            }
        }
        result = std::move(scaled);
    } else {
        result = std::move(pixels);
    }

    return result;
}

static void FetchMediaPropertiesAsync() {
    std::thread([]() {
        if (g_unloading) return;
        winrt::init_apartment(winrt::apartment_type::multi_threaded);
        try {
            GlobalSystemMediaTransportControlsSession session{nullptr};
            std::wstring aumid;
            {
                std::lock_guard<std::mutex> lk(g_sessionMtx);
                session = g_currentSession;
                if (session) aumid = std::wstring(session.SourceAppUserModelId());
            }
            if (!session) {
                winrt::uninit_apartment();
                return;
            }

            auto props = session.TryGetMediaPropertiesAsync().get();
            if (props) {
                std::vector<BYTE> thumbBytes;
                uint64_t          thumbHash = 0;

                if (auto thumbRef = props.Thumbnail()) {
                    try {
                        auto stream = thumbRef.OpenReadAsync().get();
                        if (stream) {
                            UINT64 sz = stream.Size();
                            if (sz > 0 && sz < 4 * 1024 * 1024) {
                                DataReader reader(stream);
                                reader.LoadAsync((UINT32)sz).get();
                                thumbBytes.resize((size_t)sz);
                                reader.ReadBytes(winrt::array_view<BYTE>(thumbBytes));
                                reader.DetachStream();
                                for (size_t i = 0; i < thumbBytes.size(); i += 1024)
                                    thumbHash = thumbHash * 31 + thumbBytes[i];
                            }
                        }
                    } catch (...) { thumbBytes.clear(); }
                }

                std::vector<BYTE> appIconBytes;
                std::wstring      appIconKey;
                {
                    std::lock_guard<std::mutex> lk(g_mediaMtx);
                    appIconKey = g_media.appIconKey;
                }
                if (g_settings.showAppIcon && aumid != appIconKey) {
                    appIconBytes = FetchAppIconBytes(aumid, g_settings.appIconSize);
                    appIconKey   = aumid;
                    g_cachedAppIconSize = g_settings.appIconSize;
                } else if (g_settings.showAppIcon) {
                    std::lock_guard<std::mutex> lk(g_mediaMtx);
                    appIconBytes = g_media.appIconBytes;
                    appIconKey   = g_media.appIconKey;
                }

                {
                    std::lock_guard<std::mutex> lk(g_mediaMtx);
                    g_media.title          = std::wstring(props.Title());
                    g_media.artist         = std::wstring(props.Artist());
                    g_media.hasMedia       = true;
                    g_media.thumbnailBytes = std::move(thumbBytes);
                    g_media.thumbnailHash  = thumbHash;
                    g_media.appUserModelId = aumid;
                    if (g_settings.showAppIcon) {
                        g_media.appIconBytes   = std::move(appIconBytes);
                        g_media.appIconKey     = appIconKey;
                    }
                }
            }
        } catch (...) {}
        DispatchMediaUpdate();
        winrt::uninit_apartment();
    }).detach();
}

static void FetchPlaybackInfoAsync() {
    std::thread([]() {
        if (g_unloading) return;
        winrt::init_apartment(winrt::apartment_type::multi_threaded);
        try {
            GlobalSystemMediaTransportControlsSession session{nullptr};
            { std::lock_guard<std::mutex> lk(g_sessionMtx); session = g_currentSession; }
            if (session) {
                auto info = session.GetPlaybackInfo();
                bool playing = info && (info.PlaybackStatus() == GlobalSystemMediaTransportControlsSessionPlaybackStatus::Playing);
                {
                    std::lock_guard<std::mutex> lk(g_mediaMtx);
                    g_media.isPlaying = playing;
                }
                if (playing) {
                    std::lock_guard<std::mutex> lk(g_sessionMtx);
                    g_userSwitchedSession = false;
                }

                try {
                    auto shuffleRef = info.IsShuffleActive();
                    if (shuffleRef) {
                        g_shuffleEnabled = shuffleRef.Value();
                    }
                } catch (...) {}

                try {
                    auto repeatRef = info.AutoRepeatMode();
                    if (repeatRef) {
                        using RM = winrt::Windows::Media::MediaPlaybackAutoRepeatMode;
                        auto v = repeatRef.Value();
                        if (v == RM::Track) g_repeatMode = RepeatMode::One;
                        else if (v == RM::List) g_repeatMode = RepeatMode::All;
                        else g_repeatMode = RepeatMode::Off;
                    }
                } catch (...) {}
            }
        } catch (...) {}
        DispatchMediaUpdate();
        winrt::uninit_apartment();
    }).detach();
}

static void DetachCurrentSession() {
    std::lock_guard<std::mutex> lk(g_sessionMtx);
    if (!g_currentSession) return;
    try {
        if (g_evMediaProps.value) { g_currentSession.MediaPropertiesChanged(g_evMediaProps); g_evMediaProps = {}; }
        if (g_evPlayback.value)   { g_currentSession.PlaybackInfoChanged(g_evPlayback); g_evPlayback = {}; }
    } catch (...) {}
    g_currentSession = nullptr;
}

static GlobalSystemMediaTransportControlsSession PickBestSession() {
    if (!g_sessionMgr) return nullptr;
    try {
        GlobalSystemMediaTransportControlsSession best{nullptr};
        for (auto const& s : g_sessionMgr.GetSessions()) {
            auto pb = s.GetPlaybackInfo();
            if (!pb) continue;
            if (pb.PlaybackStatus() == GlobalSystemMediaTransportControlsSessionPlaybackStatus::Playing) return s;
            if (!best) best = s;
        }
        return best;
    } catch (...) { return nullptr; }
}

static void AttachToSession(GlobalSystemMediaTransportControlsSession session) {
    if (!session) {
        DetachCurrentSession();
        { std::lock_guard<std::mutex> lk(g_mediaMtx); g_media = MediaState{}; }
        DispatchMediaUpdate();
        return;
    }

    {
        std::lock_guard<std::mutex> lk(g_sessionMtx);
        if (g_currentSession == session) goto fetch;
    }
    DetachCurrentSession();
    {
        std::lock_guard<std::mutex> lk(g_sessionMtx);
        g_currentSession = session;
        g_evMediaProps = g_currentSession.MediaPropertiesChanged([](auto const&, auto const&) { FetchMediaPropertiesAsync(); });
        g_evPlayback = g_currentSession.PlaybackInfoChanged([](auto const&, auto const&) { FetchPlaybackInfoAsync(); });
    }
fetch:
    FetchMediaPropertiesAsync();
    FetchPlaybackInfoAsync();
}

static void OnSessionsChanged() {
    if (g_unloading) return;
    bool userSwitched = false;
    {
        std::lock_guard<std::mutex> lk(g_sessionMtx);
        userSwitched = g_userSwitchedSession;
    }
    if (!userSwitched) {
        AttachToSession(PickBestSession());
    }
}

static DWORD WINAPI MediaThreadProc(void*) {
    try {
        winrt::init_apartment(winrt::apartment_type::multi_threaded);
        auto op = GlobalSystemMediaTransportControlsSessionManager::RequestAsync();
        while (op.Status() == winrt::Windows::Foundation::AsyncStatus::Started) {
            if (WaitForSingleObject(g_mediaStopEvent, 50) == WAIT_OBJECT_0) goto done;
        }
        g_sessionMgr = op.GetResults();

        g_evSessionsChanged = g_sessionMgr.SessionsChanged([](auto const&, auto const&) { OnSessionsChanged(); });
        g_evCurrentChanged  = g_sessionMgr.CurrentSessionChanged([](auto const&, auto const&) { OnSessionsChanged(); });

        OnSessionsChanged();
        WaitForSingleObject(g_mediaStopEvent, INFINITE);

        try { if (g_evSessionsChanged.value) g_sessionMgr.SessionsChanged(g_evSessionsChanged); } catch (...) {}
        try { if (g_evCurrentChanged.value)  g_sessionMgr.CurrentSessionChanged(g_evCurrentChanged); } catch (...) {}
        DetachCurrentSession();
        g_sessionMgr = nullptr;
    done:
        winrt::uninit_apartment();
    } catch (...) {}
    return 0;
}

static void StartMediaThread() {
    if (g_mediaThread) return;
    g_mediaStopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    if (!g_mediaStopEvent) return;
    g_mediaThread = CreateThread(nullptr, 0, MediaThreadProc, nullptr, 0, nullptr);
    if (!g_mediaThread) { CloseHandle(g_mediaStopEvent); g_mediaStopEvent = nullptr; }
}
static void StopMediaThread() {
    if (g_mediaStopEvent) SetEvent(g_mediaStopEvent);
    if (g_mediaThread) { WaitForSingleObject(g_mediaThread, 5000); CloseHandle(g_mediaThread); g_mediaThread = nullptr; }
    if (g_mediaStopEvent) { CloseHandle(g_mediaStopEvent); g_mediaStopEvent = nullptr; }
}

static HANDLE g_timerThread    = nullptr;
static HANDLE g_timerStopEvent = nullptr;

static void DispatchMediaUpdate() {
    if (g_unloading || g_applyingSettings || !g_playerGrid) return;

    try {
        auto dispatcher = g_playerGrid.Dispatcher();
        if (!dispatcher) {
            g_playerGrid = nullptr;
            g_injectionParent = nullptr;
            if (g_taskbarWnd) {
                StopRetryThread();
                StartRetryThread();
            }
            return;
        }
    } catch (...) {
        g_playerGrid = nullptr;
        g_injectionParent = nullptr;
        if (g_taskbarWnd) {
            StopRetryThread();
            StartRetryThread();
        }
        return;
    }

    g_needsUiUpdate = true;
}

static void RefreshPlayerContents();
static void UpdateVisibility();

static DWORD WINAPI TimerThreadProc(void*) {
    static bool lastThemeWasLight = IsSystemLightTheme();

    HKEY hKey = nullptr;
    HANDLE hEvent = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize", 0, KEY_NOTIFY, &hKey) == ERROR_SUCCESS) {
        RegNotifyChangeKeyValue(hKey, FALSE, REG_NOTIFY_CHANGE_LAST_SET, hEvent, TRUE);
    }

    while (!g_unloading) {
        HANDLE handles[] = {g_timerStopEvent, hEvent};
        DWORD wait = WaitForMultipleObjects(2, handles, FALSE, 100);

        if (wait == WAIT_OBJECT_0) break;
        if (g_applyingSettings) continue;

        HWND hWnd = g_taskbarWnd;
        if (!hWnd) continue;

        if (wait == WAIT_OBJECT_0 + 1 || g_settings.theme == L"auto") {
            bool currentThemeIsLight = IsSystemLightTheme();
            if (currentThemeIsLight != lastThemeWasLight) {
                lastThemeWasLight = currentThemeIsLight;
                g_needsUiUpdate = true;
            }
            if (hKey && wait == WAIT_OBJECT_0 + 1) {
                RegNotifyChangeKeyValue(hKey, FALSE, REG_NOTIFY_CHANGE_LAST_SET, hEvent, TRUE);
            }
        }

        bool needsUpdate = g_needsUiUpdate.exchange(false);
        if (needsUpdate) {
            RunFromWindowThread(hWnd, [](void*) {
                if (!g_unloading && !g_applyingSettings && g_playerGrid) {
                    RefreshPlayerContents();
                    UpdateVisibility();
                }
            }, nullptr);
        }
    }

    if (hKey) RegCloseKey(hKey);
    if (hEvent) CloseHandle(hEvent);
    return 0;
}

static void StartTimerThread() {
    if (g_timerThread) return;
    g_timerStopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    g_timerThread    = CreateThread(nullptr, 0, TimerThreadProc, nullptr, 0, nullptr);
    if (!g_timerThread) { CloseHandle(g_timerStopEvent); g_timerStopEvent = nullptr; }
}
static void StopTimerThread() {
    if (g_timerStopEvent) SetEvent(g_timerStopEvent);
    if (g_timerThread) { WaitForSingleObject(g_timerThread, 2000); CloseHandle(g_timerThread); g_timerThread = nullptr; }
    if (g_timerStopEvent) { CloseHandle(g_timerStopEvent); g_timerStopEvent = nullptr; }
}

static HANDLE g_idleThread    = nullptr;
static HANDLE g_idleStopEvent = nullptr;

static DWORD WINAPI IdleThreadProc(void*) {
    while (!g_unloading) {
        if (WaitForSingleObject(g_idleStopEvent, 1000) == WAIT_OBJECT_0) break;
        if (g_taskbarWnd) PostMessageW(g_taskbarWnd, WM_APP + 44, 0, 0);
    }
    return 0;
}

static void StartIdleTimer() {
    if (g_idleThread) return;
    g_idleStopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    g_idleThread    = CreateThread(nullptr, 0, IdleThreadProc, nullptr, 0, nullptr);
}

static void StopIdleTimer() {
    if (g_idleStopEvent) SetEvent(g_idleStopEvent);
    if (g_idleThread) { WaitForSingleObject(g_idleThread, 2000); CloseHandle(g_idleThread); g_idleThread = nullptr; }
    if (g_idleStopEvent) { CloseHandle(g_idleStopEvent); g_idleStopEvent = nullptr; }
}

static void RefreshThemeColors();

static LRESULT CALLBACK ThemeWatchWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (msg == WM_SETTINGCHANGE) {
        const wchar_t* section = reinterpret_cast<const wchar_t*>(lParam);
        if (section && wcscmp(section, L"ImmersiveColorSet") == 0) {
            if (g_taskbarWnd) {
                RunFromWindowThread(g_taskbarWnd, [](void*) {
                    if (!g_unloading && !g_applyingSettings && g_playerGrid)
                        RefreshThemeColors();
                }, nullptr);
            }
        }
    }
    return DefWindowProcW(hWnd, msg, wParam, lParam);
}

static DWORD WINAPI ThemeWatchThreadProc(void*) {
    WNDCLASSEXW wc{};
    wc.cbSize        = sizeof(wc);
    wc.lpfnWndProc   = ThemeWatchWndProc;
    wc.hInstance     = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"Windhawk_FMP_ThemeWatch";
    RegisterClassExW(&wc);

    g_themeWatchWnd = CreateWindowExW(0, L"Windhawk_FMP_ThemeWatch", nullptr, 0,
        0, 0, 0, 0, HWND_MESSAGE, nullptr, GetModuleHandleW(nullptr), nullptr);
    if (!g_themeWatchWnd) return 1;

    MSG msg{};
    while (!g_unloading) {
        if (WaitForSingleObject(g_themeWatchStop, 0) == WAIT_OBJECT_0) break;
        while (PeekMessageW(&msg, g_themeWatchWnd, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
        Sleep(50);
    }

    DestroyWindow(g_themeWatchWnd);
    g_themeWatchWnd = nullptr;
    UnregisterClassW(L"Windhawk_FMP_ThemeWatch", GetModuleHandleW(nullptr));
    return 0;
}

static void StartThemeWatcher() {
    if (g_themeWatchThread) return;
    g_themeWatchStop   = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    g_themeWatchThread = CreateThread(nullptr, 0, ThemeWatchThreadProc, nullptr, 0, nullptr);
}

static void StopThemeWatcher() {
    if (g_themeWatchStop) SetEvent(g_themeWatchStop);
    if (g_themeWatchThread) {
        WaitForSingleObject(g_themeWatchThread, 3000);
        CloseHandle(g_themeWatchThread);
        g_themeWatchThread = nullptr;
    }
    if (g_themeWatchStop) { CloseHandle(g_themeWatchStop); g_themeWatchStop = nullptr; }
}

static void RefreshThemeColors() {
    if (!g_playerGrid || g_unloading || g_applyingSettings) return;
    try {
        auto textClr = TextColor();
        auto artistClr = ArtistColor();
        auto buttonClr = ButtonColor();
        auto bgBrush = MakeBackgroundBrush();

        if (auto fe = FindChildByName(g_playerGrid, L"FluentMedia_OuterBorder")) {
            if (auto b = fe.try_as<Border>()) b.Background(bgBrush);
        }

        if (auto fe = FindChildByName(g_playerGrid, kTitleBlockName))
            if (auto tb = fe.try_as<TextBlock>()) tb.Foreground(MakeBrush(textClr));

        if (auto fe = FindChildByName(g_playerGrid, kArtistBlockName))
            if (auto ab = fe.try_as<TextBlock>()) ab.Foreground(MakeBrush(artistClr));

        for (const wchar_t* name : {kPrevBtnName, kPlayBtnName, kNextBtnName, kRewindBtnName, kForwardBtnName, kShuffleBtnName, kRepeatBtnName}) {
            if (auto fe = FindChildByName(g_playerGrid, name)) {
                if (auto btn = fe.try_as<Button>()) {
                    if (auto ct = btn.Content().try_as<TextBlock>()) ct.Foreground(MakeBrush(buttonClr));
                }
            }
        }
    } catch (...) {}
}

static HWND FindCurrentProcessTaskbarWnd() {
    HWND result = nullptr;
    EnumWindows([](HWND hWnd, LPARAM lp) -> BOOL {
        DWORD pid = 0; wchar_t cls[32] = {};
        if (GetWindowThreadProcessId(hWnd, &pid) && pid == GetCurrentProcessId() &&
            GetClassNameW(hWnd, cls, ARRAYSIZE(cls)) &&
            _wcsicmp(cls, L"Shell_TrayWnd") == 0)
        {
            *reinterpret_cast<HWND*>(lp) = hWnd;
            return FALSE;
        }
        return TRUE;
    }, reinterpret_cast<LPARAM>(&result));
    return result;
}

static XamlRoot GetTaskbarXamlRoot(HWND hTaskbarWnd) {
    try {
        HWND hTaskSwWnd = (HWND)GetProp(hTaskbarWnd, L"TaskbandHWND");
        if (!hTaskSwWnd) return nullptr;

        void* taskBand = (void*)GetWindowLongPtrW(hTaskSwWnd, 0);
        if (!taskBand) return nullptr;

        if (!CTaskBand_ITaskListWndSite_vftable) return nullptr;

        void* tbfs = taskBand;
        for (int i = 0; *(void**)tbfs != CTaskBand_ITaskListWndSite_vftable; ++i) {
            if (i == 20) return nullptr;
            tbfs = (void**)tbfs + 1;
        }

        void* tbhsp[2]{};
        if (!CTaskBand_GetTaskbarHost_Original) return nullptr;
        CTaskBand_GetTaskbarHost_Original(tbfs, tbhsp);
        if (!tbhsp[0] && !tbhsp[1]) return nullptr;

        size_t offset = 0x48;
        if (TaskbarHost_FrameHeight_Original) {
            const BYTE* b = (const BYTE*)TaskbarHost_FrameHeight_Original;
            if (b[0]==0x48&&b[1]==0x83&&b[2]==0xEC&&b[4]==0x48&&b[5]==0x83&&b[6]==0xC1&&b[7]<=0x7F)
                offset = b[7];
        }

        auto* iunk = *(IUnknown**)((BYTE*)tbhsp[0] + offset);
        if (!iunk) {
            if (tbhsp[1] && Std_Ref_Decref_Original) Std_Ref_Decref_Original(tbhsp[1]);
            return nullptr;
        }

        FrameworkElement taskbarElem{nullptr};
        iunk->QueryInterface(winrt::guid_of<FrameworkElement>(), winrt::put_abi(taskbarElem));
        auto result = taskbarElem ? taskbarElem.XamlRoot() : nullptr;

        if (tbhsp[1] && Std_Ref_Decref_Original) Std_Ref_Decref_Original(tbhsp[1]);
        return result;
    } catch (...) {
        return nullptr;
    }
}

static const wchar_t* GetGlyph(int cmd, bool isPlaying = false) {
    bool isFluent = (g_settings.iconStyle == L"fluent_outline" || g_settings.iconStyle == L"fluent_filled");
    bool isFilled = (g_settings.iconStyle == L"fluent_filled" || g_settings.iconStyle == L"mdl2_filled");

    switch (cmd) {
        case 1:
            if (isFilled) return L"";
            return L"";
        case 2:
            if (isPlaying) {
                if (isFluent && isFilled) return L"";
                if (!isFluent && isFilled) return L"";
                return L"";
            } else {
                if (isFilled) return L"";
                return L"";
            }
        case 3:
            if (isFilled) return L"";
            return L"";
        case 5:
            if (isFilled) return L"";
            return L"";
        case 6:
            if (isFilled) return L"";
            return L"";
        case 7:
            return L"";
        case 8: {
            RepeatMode mode = g_repeatMode.load();
            switch (mode) {
                case RepeatMode::Off: return L"";
                case RepeatMode::All: return L"";
                case RepeatMode::One: return L"";
            }
        }
    }
    return L"";
}

static TextBlock MakeIconText(const wchar_t* glyph, double sz, winrt::Windows::UI::Color c) {
    TextBlock t;
    t.Text(glyph);
    t.FontSize(sz);
    t.Foreground(MakeBrush(c));
    t.VerticalAlignment(VerticalAlignment::Center);
    t.HorizontalAlignment(HorizontalAlignment::Center);

    bool useFluent = (g_settings.iconStyle == L"fluent_outline" || g_settings.iconStyle == L"fluent_filled");

    try {
        if (useFluent) {
            t.FontFamily(FontFamily(L"Segoe Fluent Icons"));
        } else {
            t.FontFamily(FontFamily(L"Segoe MDL2 Assets"));
        }
    } catch (...) {
        try {
            t.FontFamily(FontFamily(L"Segoe MDL2 Assets"));
        } catch (...) {
            try {
                t.FontFamily(FontFamily(L"Segoe UI Symbol"));
            } catch (...) {}
        }
    }
    return t;
}

static Button MakeControlButton(int cmd, bool isPlaying, winrt::Windows::UI::Color iconColor) {
    Button btn;
    try {
        btn.Width(28); btn.Height(28);
        btn.Padding({1,1,1,1});
        double cr = (double)g_settings.buttonCornerRadius;
        btn.CornerRadius({cr,cr,cr,cr});
        btn.Background(MakeBrush({0x00,0,0,0}));
        btn.BorderThickness({0,0,0,0});
        btn.VerticalAlignment(VerticalAlignment::Center);
        btn.HorizontalAlignment(HorizontalAlignment::Center);

        const wchar_t* glyph = L"";

        double opacity = 1.0;
        if (cmd == 7 && !g_shuffleEnabled.load()) {
            opacity = 0.4;
        }

        auto iconText = MakeIconText(glyph, 12.0, iconColor);
        iconText.Opacity(opacity);
        btn.Content(winrt::box_value(iconText));

        btn.Click([cmd](auto const&, auto const&) {
            if (!g_unloading) {
                SendMediaCommandAsync(cmd);
                DispatchMediaUpdate();
            }
        });

        auto isPressed = std::make_shared<bool>(false);
        auto isHovered = std::make_shared<bool>(false);

        auto updateBtnVisualState = [btn, isPressed, isHovered]() {
            if (!g_settings.enableMediaButtonsHoverEffect) {
                btn.Background(MakeBrush({0x00,0,0,0}));
                return;
            }
            if (*isPressed) {
                btn.Background(MakeBrush(GetSystemButtonPressedColor()));
            } else if (*isHovered) {
                btn.Background(MakeBrush(GetSystemButtonHoverColor()));
            } else {
                btn.Background(MakeBrush({0x00,0,0,0}));
            }
        };

        btn.PointerEntered([isHovered, updateBtnVisualState](auto const&, auto const&) {
            *isHovered = true;
            updateBtnVisualState();
        });

        btn.PointerExited([isHovered, updateBtnVisualState](auto const&, auto const&) {
            *isHovered = false;
            updateBtnVisualState();
        });

        btn.PointerPressed([isPressed, updateBtnVisualState](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
            if (auto elem = sender.template try_as<UIElement>()) {
                elem.CapturePointer(e.Pointer());
            }
            *isPressed = true;
            updateBtnVisualState();
        });

        btn.PointerReleased([isPressed, isHovered, updateBtnVisualState, cmd](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
            bool actuallyHovered = false;
            auto prop = e.GetCurrentPoint(nullptr).Properties();
            auto kind = prop.PointerUpdateKind();

            if (auto elem = sender.template try_as<UIElement>()) {
                elem.ReleasePointerCapture(e.Pointer());
                try {
                    auto bounds = elem.RenderSize();
                    auto pos = e.GetCurrentPoint(elem).Position();
                    actuallyHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                } catch (...) {}
            }
            *isPressed = false;
            *isHovered = actuallyHovered;
            updateBtnVisualState();

            if (!g_unloading && actuallyHovered) {
                if (kind == winrt::Windows::UI::Input::PointerUpdateKind::LeftButtonReleased) {
                    SendMediaCommandAsync(cmd);
                    DispatchMediaUpdate();
                }
            }
            e.Handled(true);
        });

        btn.PointerCanceled([isPressed, isHovered, updateBtnVisualState](auto const&, auto const&) {
            *isPressed = false;
            *isHovered = false;
            updateBtnVisualState();
        });

        btn.PointerCaptureLost([isPressed, isHovered, updateBtnVisualState](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
            *isPressed = false;
            if (auto elem = sender.template try_as<UIElement>()) {
                try {
                    auto bounds = elem.RenderSize();
                    auto pos = e.GetCurrentPoint(elem).Position();
                    *isHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                } catch (...) { *isHovered = false; }
            }
            updateBtnVisualState();
        });

    } catch (...) {}
    return btn;
}

static Grid BuildPlayerGrid() {
    try {
        auto textClr = TextColor();
        auto artistClr = ArtistColor();
        auto buttonClr = ButtonColor();
        auto bgBrush = MakeBackgroundBrush();
        double cr    = (double)g_settings.cornerRadius;
        double ph    = (double)g_settings.playerHeight;

        bool hasTextOrButtons = g_settings.showTrackTitle || g_settings.showTrackArtist || (g_settings.showMediaButtons && !g_mediaButtons.empty());

        Border outerBorder;
        outerBorder.Name(L"FluentMedia_OuterBorder");
        outerBorder.CornerRadius({cr,cr,cr,cr});
        outerBorder.Background(bgBrush);

        if (hasTextOrButtons) {
            outerBorder.Padding({4,2,4,2});
        } else {
            outerBorder.Padding({0,0,0,0});
        }

        outerBorder.VerticalAlignment(VerticalAlignment::Center);
        outerBorder.MinHeight(ph);

        if (g_settings.showDebugBorders) {
            outerBorder.BorderBrush(MakeBrush({0xFF, 0xFF, 0x00, 0x00}));
            outerBorder.BorderThickness({2,2,2,2});
        }

        Grid panel;
        panel.VerticalAlignment(VerticalAlignment::Center);

        if (g_settings.showDebugBorders) {
            Border panelDebugBorder;
            panelDebugBorder.BorderBrush(MakeBrush({0xFF, 0x00, 0xFF, 0x00}));
            panelDebugBorder.BorderThickness({1,1,1,1});
            panel.Children().Append(panelDebugBorder);
        }

        bool buttonsLeft = g_settings.mirrorLayout;
        bool albumArtLeft = !g_settings.mirrorLayout;

        ColumnDefinition colFirst, colText, colLast;
        colFirst.Width({1.0, GridUnitType::Auto});

        if (g_settings.showTrackTitle || g_settings.showTrackArtist) {
            colText.Width({1.0, GridUnitType::Star});
        } else {
            colText.Width({1.0, GridUnitType::Auto});
        }

        colLast.Width({1.0, GridUnitType::Auto});
        panel.ColumnDefinitions().Append(colFirst);
        panel.ColumnDefinitions().Append(colText);
        panel.ColumnDefinitions().Append(colLast);

        Grid artContainer{nullptr};

        if (g_settings.showAlbumArt) {
            int artSz = std::max(8, std::min(g_settings.albumArtSize, (int)(ph - 4)));
            double acr = (double)g_settings.albumArtCornerRadius;
            int iconSz = g_settings.appIconSize;

            artContainer = Grid();
            artContainer.Width(artSz); artContainer.Height(artSz);
            artContainer.VerticalAlignment(VerticalAlignment::Center);

            if (hasTextOrButtons) {
                artContainer.Margin({(double)g_settings.albumArtLeftMargin, 0, (double)g_settings.albumArtRightMargin, 0});
            } else {
                artContainer.Margin({0, 0, 0, 0});
            }

            artContainer.Opacity(g_settings.albumArtOpacity / 100.0);
            artContainer.Background(MakeBrush({0x00,0x00,0x00,0x00}));

            if (g_settings.showDebugBorders) {
                Border artDebugBorder;
                artDebugBorder.BorderBrush(MakeBrush({0xFF, 0xFF, 0xFF, 0x00}));
                artDebugBorder.BorderThickness({2,2,2,2});
                artContainer.Children().Append(artDebugBorder);
            }

            winrt::Windows::UI::Xaml::Shapes::Rectangle placeholder;
            placeholder.Fill(MakeBrush({0x40,0x80,0x80,0x80}));
            placeholder.RadiusX(acr); placeholder.RadiusY(acr);
            artContainer.Children().Append(placeholder);

            Border artBorder;
            artBorder.CornerRadius({acr,acr,acr,acr});
            artBorder.Width(artSz); artBorder.Height(artSz);

            Controls::Image artImage;
            artImage.Name(kArtImageName);
            artImage.Stretch(Stretch::UniformToFill);
            artImage.Width(artSz); artImage.Height(artSz);
            artBorder.Child(artImage);
            artContainer.Children().Append(artBorder);

            Border artRing;
            artRing.CornerRadius({acr,acr,acr,acr});
            artRing.BorderThickness({1,1,1,1});
            artRing.BorderBrush(MakeBrush({0x25,0x80,0x80,0x80}));
            artContainer.Children().Append(artRing);

            if (g_settings.showAppIcon) {
                Grid iconOverlay;
                iconOverlay.Width(artSz); iconOverlay.Height(artSz);
                iconOverlay.VerticalAlignment(VerticalAlignment::Stretch);
                iconOverlay.HorizontalAlignment(HorizontalAlignment::Stretch);

                Controls::Image appIconImage;
                appIconImage.Name(kAppIconImageName);
                appIconImage.Width(iconSz);
                appIconImage.Height(iconSz);
                appIconImage.Stretch(Stretch::UniformToFill);
                appIconImage.Visibility(Visibility::Collapsed);

                const auto& corner = g_settings.appIconCorner;
                double margin_right  = 0, margin_bottom = 0;
                double margin_left   = 0, margin_top    = 0;
                HorizontalAlignment ha = HorizontalAlignment::Right;
                VerticalAlignment   va = VerticalAlignment::Bottom;

                if (corner == L"top_left") {
                    ha = HorizontalAlignment::Left;
                    va = VerticalAlignment::Top;
                } else if (corner == L"top_right") {
                    ha = HorizontalAlignment::Right;
                    va = VerticalAlignment::Top;
                } else if (corner == L"bottom_left") {
                    ha = HorizontalAlignment::Left;
                    va = VerticalAlignment::Bottom;
                } else {
                    ha = HorizontalAlignment::Right;
                    va = VerticalAlignment::Bottom;
                }

                appIconImage.HorizontalAlignment(ha);
                appIconImage.VerticalAlignment(va);
                appIconImage.Margin({margin_left, margin_top, margin_right, margin_bottom});

                iconOverlay.Children().Append(appIconImage);
                Canvas::SetZIndex(iconOverlay, 15);
                artContainer.Children().Append(iconOverlay);
            }

            if (g_settings.showPauseOverlay) {
                Border pauseBorder;
                pauseBorder.Name(L"PauseIconOverlay");
                pauseBorder.Width(artSz);
                pauseBorder.Height(artSz);
                pauseBorder.CornerRadius({acr + 1, acr + 1, acr + 1, acr + 1});
                BYTE opacity = (BYTE)((g_settings.pauseOverlayOpacity * 255) / 100);
                pauseBorder.Background(MakeBrush({opacity, 0x00, 0x00, 0x00}));
                pauseBorder.Visibility(Visibility::Collapsed);
                Canvas::SetZIndex(pauseBorder, 8);

                TextBlock pauseIcon;
                pauseIcon.Text(L"");
                pauseIcon.FontFamily(Media::FontFamily(L"Segoe MDL2 Assets"));
                pauseIcon.FontSize(16);
                pauseIcon.Foreground(MakeBrush({0xFF, 0xFF, 0xFF, 0xFF}));
                pauseIcon.HorizontalAlignment(HorizontalAlignment::Center);
                pauseIcon.VerticalAlignment(VerticalAlignment::Center);

                pauseBorder.Child(pauseIcon);
                artContainer.Children().Append(pauseBorder);
            }

            Border artHoverOverlay;
            artHoverOverlay.CornerRadius({acr, acr, acr, acr});
            artHoverOverlay.Background(MakeBrush({0x00, 0, 0, 0}));
            artHoverOverlay.IsHitTestVisible(false);
            Canvas::SetZIndex(artHoverOverlay, 20);
            artContainer.Children().Append(artHoverOverlay);

            auto artIsPressed = std::make_shared<bool>(false);
            auto artIsHovered = std::make_shared<bool>(false);

            auto updateArtVisualStateSystem = [artHoverOverlay, artIsPressed, artIsHovered]() {
                if (g_settings.enableAlbumArtHoverEffect) {
                    if (*artIsPressed) {
                        artHoverOverlay.Background(MakeBrush(GetSystemButtonPressedColor()));
                    } else if (*artIsHovered) {
                        artHoverOverlay.Background(MakeBrush(GetSystemButtonHoverColor()));
                    } else {
                        artHoverOverlay.Background(MakeBrush({0x00, 0x00, 0x00, 0x00}));
                    }
                }
            };

            artContainer.PointerEntered([artIsHovered, updateArtVisualStateSystem](auto const&, auto const&) mutable {
                *artIsHovered = true;
                updateArtVisualStateSystem();
            });

            artContainer.PointerExited([artIsHovered, updateArtVisualStateSystem](auto const&, auto const&) mutable {
                *artIsHovered = false;
                updateArtVisualStateSystem();
            });

            artContainer.PointerPressed([artIsPressed, updateArtVisualStateSystem](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                if (auto elem = sender.template try_as<UIElement>()) {
                    elem.CapturePointer(e.Pointer());
                }
                *artIsPressed = true;
                updateArtVisualStateSystem();
                e.Handled(true);
            });

            artContainer.PointerReleased([artIsPressed, artIsHovered, updateArtVisualStateSystem](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                *artIsPressed = false;
                bool actuallyHovered = false;
                if (auto elem = sender.template try_as<UIElement>()) {
                    elem.ReleasePointerCapture(e.Pointer());
                    try {
                        auto pointerPoint = e.GetCurrentPoint(elem);
                        auto bounds = elem.RenderSize();
                        auto pos = pointerPoint.Position();
                        actuallyHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                    } catch (...) { actuallyHovered = false; }
                }
                *artIsHovered = actuallyHovered;
                updateArtVisualStateSystem();

                if (g_unloading) return;

                if (actuallyHovered) {
                    auto kind = e.GetCurrentPoint(nullptr).Properties().PointerUpdateKind();
                    if (kind == winrt::Windows::UI::Input::PointerUpdateKind::LeftButtonReleased) {
                        ExecuteMediaAction(g_settings.albumArtLeftClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::RightButtonReleased) {
                        ExecuteMediaAction(g_settings.albumArtRightClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::MiddleButtonReleased) {
                        ExecuteMediaAction(g_settings.albumArtMiddleClick);
                    }
                }
                e.Handled(true);
            });

            artContainer.PointerCanceled([artIsPressed, artIsHovered, updateArtVisualStateSystem](auto const&, auto const&) mutable {
                *artIsPressed = false;
                *artIsHovered = false;
                updateArtVisualStateSystem();
            });

            artContainer.PointerCaptureLost([artIsPressed, artIsHovered, updateArtVisualStateSystem](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                *artIsPressed = false;
                if (auto elem = sender.template try_as<UIElement>()) {
                    try {
                        auto pointerPoint = e.GetCurrentPoint(elem);
                        auto bounds = elem.RenderSize();
                        auto pos = pointerPoint.Position();
                        *artIsHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                    } catch (...) { *artIsHovered = false; }
                }
                updateArtVisualStateSystem();
            });

            artContainer.DoubleTapped([artIsPressed, updateArtVisualStateSystem](auto const&, winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) mutable {
                *artIsPressed = false;
                updateArtVisualStateSystem();
                if (g_unloading) return;
                ExecuteMediaAction(g_settings.albumArtLeftDoubleClick);
                e.Handled(true);
            });

            artContainer.PointerWheelChanged([](winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
                if (g_unloading) return;
                auto action = g_settings.albumArtWheelAction;
                if (action == L"none") return;

                auto props = e.GetCurrentPoint(nullptr).Properties();
                int delta = props.MouseWheelDelta();

                if (action == L"switch_tracks") {
                    if (delta > 0) SendMediaCommandAsync(1);
                    else if (delta < 0) SendMediaCommandAsync(3);
                    DispatchMediaUpdate();
                } else if (action == L"switch_sessions") {
                    if (delta != 0) SwitchMediaSession();
                }
                e.Handled(true);
            });

            artContainer.Tag(winrt::box_value(winrt::hstring(L"FluentMediaArtContainer")));

            if (albumArtLeft) {
                Grid::SetColumn(artContainer, 0);
            } else {
                Grid::SetColumn(artContainer, 2);
            }
            panel.Children().Append(artContainer);
        }

        if (g_settings.showTrackTitle || g_settings.showTrackArtist) {
            Border textContainer;
            textContainer.VerticalAlignment(VerticalAlignment::Center);
            textContainer.Margin({(double)g_settings.textMarginLeft, 0, (double)g_settings.textMarginRight, 0});

            if (g_settings.showDebugBorders) {
                textContainer.BorderBrush(MakeBrush({0xFF, 0x00, 0xFF, 0xFF}));
                textContainer.BorderThickness({1,1,1,1});
            }

            StackPanel textStack;
            textStack.Name(kTextStackName);
            textStack.Orientation(Orientation::Vertical);
            textStack.VerticalAlignment(VerticalAlignment::Center);
            textStack.HorizontalAlignment(g_settings.mirrorLayout ? HorizontalAlignment::Right : HorizontalAlignment::Left);
            textStack.Spacing((double)g_settings.textSpacing);

            if (g_settings.showTrackTitle) {
                TextBlock titleBlock;
                titleBlock.Name(kTitleBlockName);
                titleBlock.FontSize((double)g_settings.titleFontSize);
                titleBlock.FontFamily(Media::FontFamily(g_settings.titleFont));
                titleBlock.Foreground(MakeBrush(textClr));
                titleBlock.TextWrapping(TextWrapping::NoWrap);
                titleBlock.TextTrimming(TextTrimming::CharacterEllipsis);
                titleBlock.TextAlignment(g_settings.mirrorLayout ? TextAlignment::Right : TextAlignment::Left);
                textStack.Children().Append(titleBlock);
            }

            if (g_settings.showTrackArtist) {
                TextBlock artistBlock;
                artistBlock.Name(kArtistBlockName);
                artistBlock.FontSize((double)g_settings.artistFontSize);
                artistBlock.FontFamily(Media::FontFamily(g_settings.artistFont));
                artistBlock.Foreground(MakeBrush(artistClr));
                artistBlock.TextWrapping(TextWrapping::NoWrap);
                artistBlock.TextTrimming(TextTrimming::CharacterEllipsis);
                artistBlock.TextAlignment(g_settings.mirrorLayout ? TextAlignment::Right : TextAlignment::Left);
                textStack.Children().Append(artistBlock);
            }

            textContainer.Child(textStack);

            Grid::SetColumn(textContainer, 1);
            panel.Children().Append(textContainer);
        }

        if (g_settings.showMediaButtons) {
            StackPanel ctrlPanel;
            ctrlPanel.Orientation(Orientation::Horizontal);
            ctrlPanel.Spacing((double)g_settings.buttonSpacing);
            ctrlPanel.VerticalAlignment(VerticalAlignment::Center);
            ctrlPanel.HorizontalAlignment(buttonsLeft ? HorizontalAlignment::Left : HorizontalAlignment::Right);

            std::vector<MediaButtonConfig> currentButtons;
            {
                std::lock_guard<std::mutex> lock(g_mediaButtonsMutex);
                currentButtons = g_mediaButtons;
            }

            bool hasButtons = !currentButtons.empty();
            if (hasButtons) {
                ctrlPanel.Margin({(double)g_settings.mediaButtonsLeftMargin, 0, (double)g_settings.mediaButtonsRightMargin, 0});
            }

            if (g_settings.showDebugBorders) {
                Border ctrlDebugBorder;
                ctrlDebugBorder.BorderBrush(MakeBrush({0xFF, 0xFF, 0x00, 0xFF}));
                ctrlDebugBorder.BorderThickness({1,1,1,1});
                Grid::SetColumn(ctrlDebugBorder, buttonsLeft ? 0 : 2);
                panel.Children().Append(ctrlDebugBorder);
            }

            for (const auto& btnCfg : currentButtons) {
                auto btn = MakeControlButton(btnCfg.cmd, false, buttonClr);

                switch (btnCfg.type) {
                    case MediaButtonType::Previous:
                        btn.Name(kPrevBtnName);
                        break;
                    case MediaButtonType::PlayPause:
                        btn.Name(kPlayBtnName);
                        break;
                    case MediaButtonType::Next:
                        btn.Name(kNextBtnName);
                        break;
                    case MediaButtonType::Rewind5s:
                        btn.Name(kRewindBtnName);
                        break;
                    case MediaButtonType::Forward5s:
                        btn.Name(kForwardBtnName);
                        break;
                    case MediaButtonType::Shuffle:
                        btn.Name(kShuffleBtnName);
                        break;
                    case MediaButtonType::Repeat:
                        btn.Name(kRepeatBtnName);
                        break;
                }

                ctrlPanel.Children().Append(btn);
            }

            if (buttonsLeft) {
                Grid::SetColumn(ctrlPanel, 0);
            } else {
                Grid::SetColumn(ctrlPanel, 2);
            }

            if (hasButtons) {
                panel.Children().Append(ctrlPanel);
            }
        }

        outerBorder.Child(panel);

        Grid wrapper;
        wrapper.Name(kGridName);
        wrapper.VerticalAlignment(VerticalAlignment::Stretch);
        wrapper.HorizontalAlignment(HorizontalAlignment::Left);

        if (hasTextOrButtons && g_settings.playerMinWidth > 0) {
            wrapper.MinWidth((double)g_settings.playerMinWidth);
        }

        if (g_settings.playerMaxWidth > 0) {
            wrapper.MaxWidth((double)g_settings.playerMaxWidth);
        }

        wrapper.Background(MakeBrush({0x00,0,0,0}));
        wrapper.Children().Append(outerBorder);

        if (g_settings.enablePlayerHoverEffect) {
            outerBorder.Background(MakeBrush({0x00, 0x00, 0x00, 0x00}));
            outerBorder.BorderBrush(MakeBrush({0x00, 0x00, 0x00, 0x00}));
            outerBorder.BorderThickness({1,1,1,1});
            double borderCr = (double)g_settings.cornerRadius;
            outerBorder.CornerRadius({borderCr,borderCr,borderCr,borderCr});

            try {
                winrt::Windows::UI::Xaml::BrushTransition bgTransition;
                bgTransition.Duration(winrt::Windows::Foundation::TimeSpan(std::chrono::milliseconds(83)));
                outerBorder.BackgroundTransition(bgTransition);
            } catch (...) {}

            auto isPressed = std::make_shared<bool>(false);
            auto isHovered = std::make_shared<bool>(false);

            auto updateVisualState = [outerBorder, isPressed, isHovered]() {
                if (*isPressed) {
                    outerBorder.Background(MakeBrush(GetSystemButtonPressedColor()));
                    outerBorder.BorderBrush(MakeBrush(GetSystemButtonBorderColor()));
                } else if (*isHovered) {
                    outerBorder.Background(MakeBrush(GetSystemButtonHoverColor()));
                    outerBorder.BorderBrush(MakeBrush(GetSystemButtonBorderColor()));
                } else {
                    outerBorder.Background(MakeBrush({0x00, 0x00, 0x00, 0x00}));
                    outerBorder.BorderBrush(MakeBrush({0x00, 0x00, 0x00, 0x00}));
                }
            };

            wrapper.PointerEntered([isHovered, updateVisualState](auto const&, auto const&) mutable {
                *isHovered = true;
                updateVisualState();
            });

            wrapper.PointerExited([isHovered, updateVisualState](auto const&, auto const&) mutable {
                *isHovered = false;
                updateVisualState();
            });

            wrapper.PointerPressed([isPressed, updateVisualState](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                if (auto elem = sender.template try_as<UIElement>()) {
                    elem.CapturePointer(e.Pointer());
                }
                *isPressed = true;
                updateVisualState();
            });

            wrapper.PointerReleased([isPressed, isHovered, updateVisualState](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                *isPressed = false;
                bool actuallyHovered = false;
                if (auto elem = sender.template try_as<UIElement>()) {
                    elem.ReleasePointerCapture(e.Pointer());
                    try {
                        auto pointerPoint = e.GetCurrentPoint(elem);
                        auto bounds = elem.RenderSize();
                        auto pos = pointerPoint.Position();
                        actuallyHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                    } catch (...) { actuallyHovered = false; }
                }
                *isHovered = actuallyHovered;
                updateVisualState();

                if (g_unloading || e.Handled()) return;

                if (actuallyHovered) {
                    auto kind = e.GetCurrentPoint(nullptr).Properties().PointerUpdateKind();
                    if (kind == winrt::Windows::UI::Input::PointerUpdateKind::LeftButtonReleased) {
                        ExecuteMediaAction(g_settings.playerLeftClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::RightButtonReleased) {
                        ExecuteMediaAction(g_settings.playerRightClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::MiddleButtonReleased) {
                        ExecuteMediaAction(g_settings.playerMiddleClick);
                    }
                }
            });

            wrapper.PointerCanceled([isPressed, isHovered, updateVisualState](auto const&, auto const&) mutable {
                *isPressed = false;
                *isHovered = false;
                updateVisualState();
            });

            wrapper.PointerCaptureLost([isPressed, isHovered, updateVisualState](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) mutable {
                *isPressed = false;
                if (auto elem = sender.template try_as<UIElement>()) {
                    try {
                        auto pointerPoint = e.GetCurrentPoint(elem);
                        auto bounds = elem.RenderSize();
                        auto pos = pointerPoint.Position();
                        *isHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                    } catch (...) { *isHovered = false; }
                }
                updateVisualState();
            });

            wrapper.DoubleTapped([isPressed, updateVisualState](auto const&, winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) mutable {
                *isPressed = false;
                updateVisualState();
                if (g_unloading) return;
                ExecuteMediaAction(g_settings.playerLeftDoubleClick);
                e.Handled(true);
            });
        } else {
            wrapper.PointerPressed([](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
                if (auto elem = sender.template try_as<UIElement>()) elem.CapturePointer(e.Pointer());
            });
            wrapper.PointerReleased([](auto const& sender, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
                bool actuallyHovered = false;
                if (auto elem = sender.template try_as<UIElement>()) {
                    elem.ReleasePointerCapture(e.Pointer());
                    try {
                        auto bounds = elem.RenderSize();
                        auto pos = e.GetCurrentPoint(elem).Position();
                        actuallyHovered = (pos.X >= 0 && pos.X <= bounds.Width && pos.Y >= 0 && pos.Y <= bounds.Height);
                    } catch (...) {}
                }
                if (g_unloading || e.Handled()) return;
                if (actuallyHovered) {
                    auto kind = e.GetCurrentPoint(nullptr).Properties().PointerUpdateKind();
                    if (kind == winrt::Windows::UI::Input::PointerUpdateKind::LeftButtonReleased) {
                        ExecuteMediaAction(g_settings.playerLeftClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::RightButtonReleased) {
                        ExecuteMediaAction(g_settings.playerRightClick);
                    } else if (kind == winrt::Windows::UI::Input::PointerUpdateKind::MiddleButtonReleased) {
                        ExecuteMediaAction(g_settings.playerMiddleClick);
                    }
                }
            });
        }

        wrapper.Tag(winrt::box_value(winrt::hstring(L"FluentMediaBarWrapper")));

        wrapper.PointerWheelChanged([](auto const&, winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) {
            if (g_unloading) return;
            auto action = g_settings.playerWheelAction;
            if (action == L"none") return;

            auto props = e.GetCurrentPoint(nullptr).Properties();
            int delta = props.MouseWheelDelta();

            if (action == L"switch_tracks") {
                if (delta > 0) SendMediaCommandAsync(1);
                else if (delta < 0) SendMediaCommandAsync(3);
                DispatchMediaUpdate();
            } else if (action == L"switch_sessions") {
                if (delta != 0) SwitchMediaSession();
            }
            e.Handled(true);
        });

        try {
            winrt::Windows::UI::Xaml::Interop::TypeName gridType;
            gridType.Name = L"Windows.UI.Xaml.Controls.Grid";
            gridType.Kind = winrt::Windows::UI::Xaml::Interop::TypeKind::Metadata;

            winrt::Windows::UI::Xaml::Style wrapperStyle(gridType);
            wrapper.Style(wrapperStyle);
        } catch (...) {}

        return wrapper;
    } catch (...) {
        LOG(L"BuildPlayerGrid: exception");
        return nullptr;
    }
}

struct InjectionTarget {
    Grid grid;
    int  insertCol = 0;
};

static const wchar_t* const kStartButtonNames[] = {
    L"StartButton",
    L"StartMenuButton",
    L"StartMenuLaunchButton", 
    L"LaunchListButton",
};

static const wchar_t* const kSearchButtonNames[] = {
    L"SearchBoxButton",
    L"SearchButton",
    L"TaskbarSearchBox",
    L"SearchBoxControl",
};

static const wchar_t* const kAppIconsNames[] = {
    L"TaskListView",
    L"RunningAppsListView",
    L"TaskListGrid",
    L"IconContainer",
    L"OverflowFlyoutList",
    L"TaskListLargeView",
};

static Grid FindParentGrid(FrameworkElement const& elem, bool immediate = true) {
    if (!elem) return nullptr;
    DependencyObject cur = elem;
    while (cur) {
        auto par = VisualTreeHelper::GetParent(cur);
        if (!par) break;
        if (auto g = par.try_as<Grid>()) {
            if (immediate) return g;
        }
        cur = par;
    }
    return nullptr;
}

static Grid FindRootGrid(FrameworkElement const& elem) {
    if (!elem) return nullptr;
    Grid last{nullptr};
    DependencyObject cur = elem;
    while (cur) {
        auto par = VisualTreeHelper::GetParent(cur);
        if (!par) break;
        if (auto g = par.try_as<Grid>()) last = g;
        cur = par;
    }
    return last;
}

static Grid FindTaskbarRootGrid(FrameworkElement const& root) {
    FrameworkElement taskbarFrame = nullptr;
    int count = VisualTreeHelper::GetChildrenCount(root);

    for (int i = 0; i < count; i++) {
        auto c = VisualTreeHelper::GetChild(root, i).try_as<FrameworkElement>();
        if (c) {
            auto className = winrt::get_class_name(c);
            if (className == L"Taskbar.TaskbarFrame") {
                taskbarFrame = c;
                break;
            }
        }
    }

    if (!taskbarFrame) {
        return nullptr;
    }

    auto rootGrid = FindChildByName(taskbarFrame, L"RootGrid");

    return rootGrid ? rootGrid.try_as<Grid>() : nullptr;
}

static FrameworkElement FindElementInRepeater(FrameworkElement const& repeater, const wchar_t* const* names, int nameCount) {
    if (!repeater) return nullptr;

    int childCount = VisualTreeHelper::GetChildrenCount(repeater);
    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(repeater, i).try_as<FrameworkElement>();
        if (!child) continue;

        for (int j = 0; j < nameCount; j++) {
            if (child.Name() == names[j]) return child;
        }
    }

    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(repeater, i).try_as<FrameworkElement>();
        if (!child) continue;

        int subChildCount = VisualTreeHelper::GetChildrenCount(child);
        for (int k = 0; k < subChildCount; k++) {
            auto subChild = VisualTreeHelper::GetChild(child, k).try_as<FrameworkElement>();
            if (!subChild) continue;

            for (int j = 0; j < nameCount; j++) {
                if (subChild.Name() == names[j]) return subChild;
            }
        }
    }

    return nullptr;
}

static FrameworkElement FindElementByClassName(FrameworkElement const& parent, const wchar_t* className) {
    if (!parent) return nullptr;

    int childCount = VisualTreeHelper::GetChildrenCount(parent);
    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(parent, i).try_as<FrameworkElement>();
        if (!child) continue;

        auto childClassName = winrt::get_class_name(child);
        if (childClassName == className) return child;
    }

    return nullptr;
}

static FrameworkElement FindNthElementByClassName(FrameworkElement const& parent, const wchar_t* className, int index) {
    if (!parent) return nullptr;

    int foundCount = 0;
    int childCount = VisualTreeHelper::GetChildrenCount(parent);

    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(parent, i).try_as<FrameworkElement>();
        if (!child) continue;

        auto childClassName = winrt::get_class_name(child);
        if (childClassName == className) {
            if (foundCount == index) return child;
            foundCount++;
        }
    }

    return nullptr;
}

static FrameworkElement FindFirstElementByClassName(FrameworkElement const& parent, const wchar_t* className) {
    if (!parent) return nullptr;

    int childCount = VisualTreeHelper::GetChildrenCount(parent);

    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(parent, i).try_as<FrameworkElement>();
        if (!child) continue;

        auto childClassName = winrt::get_class_name(child);

        if (childClassName == className) {
            return child;
        }
    }

    return nullptr;
}

static FrameworkElement FindLastElementByClassName(FrameworkElement const& parent, const wchar_t* className) {
    if (!parent) return nullptr;

    FrameworkElement lastFound = nullptr;
    int childCount = VisualTreeHelper::GetChildrenCount(parent);

    for (int i = 0; i < childCount; i++) {
        auto child = VisualTreeHelper::GetChild(parent, i).try_as<FrameworkElement>();
        if (!child) continue;

        auto childClassName = winrt::get_class_name(child);

        if (childClassName == className) {
            lastFound = child;
        }
    }

    return lastFound;
}

static bool IsStartButtonModActive(FrameworkElement const& root) {
    try {
        auto rootGrid = FindTaskbarRootGrid(root);
        if (!rootGrid) return false;

        auto repeater = FindChildByName(rootGrid, L"TaskbarFrameRepeater");
        if (!repeater) return false;

        static const wchar_t* kStartNames[] = {L"StartButton"};
        auto startButton = FindElementInRepeater(repeater, kStartNames, 1);
        if (!startButton) return false;

        auto margin = startButton.Margin();
        return margin.Right < -10.0;
    } catch (...) {
        return false;
    }
}

static double GetStartButtonAdjustment(FrameworkElement const& root) {
    try {
        auto rootGrid = FindTaskbarRootGrid(root);
        if (!rootGrid) return 0.0;

        auto repeater = FindChildByName(rootGrid, L"TaskbarFrameRepeater");
        if (!repeater) return 0.0;

        static const wchar_t* kStartNames[] = {L"StartButton"};
        auto startButton = FindElementInRepeater(repeater, kStartNames, 1);
        if (!startButton) return 0.0;

        return startButton.ActualWidth();
    } catch (...) {
        return 0.0;
    }
}

static InjectionTarget ResolveInjectionTarget(
    FrameworkElement const& root,
    std::wstring_view position)
{
    auto trayFrame = FindChildByName(root, L"SystemTrayFrameGrid");
    if (auto trayGrid = trayFrame ? trayFrame.try_as<Grid>() : nullptr) {

        int col = -1;
        if      (position == L"tray_right")
            col = (int)trayGrid.ColumnDefinitions().Size();
        else if (position == L"tray_left")
            col = 0;
        else if (position == L"tray_before_clock") {
            auto clockBtn = FindChildByName(trayGrid, L"NotificationCenterButton");
            if (!clockBtn) clockBtn = FindChildByName(root, L"NotificationCenterButton");
            col = clockBtn ? Grid::GetColumn(clockBtn) : -1;
        }
        else if (position == L"tray_after_clock") {
            auto showDesktop = FindChildByName(trayGrid, L"ShowDesktopStack");
            if (!showDesktop) showDesktop = FindChildByName(root, L"ShowDesktopStack");
            col = showDesktop ? Grid::GetColumn(showDesktop) : -1;
        }
        else if (position == L"tray_before_omni_left") {
            auto omniBtn = FindChildByName(trayGrid, L"ControlCenterButton");
            if (!omniBtn) omniBtn = FindChildByName(root, L"ControlCenterButton");
            col = omniBtn ? Grid::GetColumn(omniBtn) : -1;
        }
        else if (position == L"tray_before_omni_right") {
            auto omniBtn = FindChildByName(trayGrid, L"ControlCenterButton");
            if (!omniBtn) omniBtn = FindChildByName(root, L"ControlCenterButton");
            if (omniBtn) col = Grid::GetColumn(omniBtn) + 1;
            else col = -1;
        }
        else if (position == L"tray_after_showdesktop_left") {
            auto showDesktop = FindChildByName(trayGrid, L"ShowDesktopStack");
            if (!showDesktop) showDesktop = FindChildByName(root, L"ShowDesktopStack");
            col = showDesktop ? Grid::GetColumn(showDesktop) : -1;
        }
        else if (position == L"tray_after_showdesktop_right") {
            auto showDesktop = FindChildByName(trayGrid, L"ShowDesktopStack");
            if (!showDesktop) showDesktop = FindChildByName(root, L"ShowDesktopStack");
            if (showDesktop) col = Grid::GetColumn(showDesktop) + 1;
            else col = (int)trayGrid.ColumnDefinitions().Size();
        }

        if (col >= 0) {
            return {trayGrid, col};
        }
    }

    if (position == L"taskbar_left_start"  ||
        position == L"taskbar_right_start" ||
        position == L"taskbar_after_search_left"||
        position == L"taskbar_after_search_right"||
        position == L"taskbar_after_taskview_left"||
        position == L"taskbar_after_taskview_right"||
        position == L"taskbar_after_widgets_left"||
        position == L"taskbar_after_widgets_right"||
        position == L"taskbar_left_edge"   ||
        position == L"taskbar_right_edge")
    {
        auto rootGrid = FindTaskbarRootGrid(root);
        if (!rootGrid) {
            auto tf2 = FindChildByName(root, L"SystemTrayFrameGrid");
            if (auto tg2 = tf2 ? tf2.try_as<Grid>() : nullptr)
                return {tg2, (int)tg2.ColumnDefinitions().Size()};
            return {};
        }

        return {rootGrid, -1};
    }

    return {};
}

static bool InjectPlayerGrid() {
    HWND hWnd = g_taskbarWnd ? g_taskbarWnd : FindCurrentProcessTaskbarWnd();
    if (!hWnd) { return false; }
    g_taskbarWnd = hWnd;

    try {
        auto xamlRoot = GetTaskbarXamlRoot(hWnd);
        if (!xamlRoot) { return false; }

        auto root = xamlRoot.Content().try_as<FrameworkElement>();
        if (!root) { return false; }

        if (g_settings.enableTreeDump) {
            DumpXamlTree(root, 0, 5);
            auto rootGrid = FindTaskbarRootGrid(root);
            if (rootGrid) {
                auto repeater = FindChildByName(rootGrid, L"TaskbarFrameRepeater");
                if (repeater) {
                    DumpXamlTree(repeater, 0, 3);
                }
            }
        }

        auto [targetGrid, insertCol] = ResolveInjectionTarget(root, g_settings.position);

        if (!targetGrid) {
            if (g_settings.enableTreeDump) {
                DumpXamlTree(root, 0, 8);
            }
            return false;
        }

        Grid playerGrid = BuildPlayerGrid();
        if (!playerGrid) return false;

        bool startButtonModActive = IsStartButtonModActive(root);

        bool isTrayGrid = (targetGrid.Name() == L"SystemTrayFrameGrid");

        if (isTrayGrid) {
            ColumnDefinition newCol;
            newCol.Width({1.0, GridUnitType::Auto});

            if (insertCol >= (int)targetGrid.ColumnDefinitions().Size()) {
                targetGrid.ColumnDefinitions().Append(newCol);
            } else {
                targetGrid.ColumnDefinitions().InsertAt(insertCol, newCol);
                for (uint32_t i = 0; i < targetGrid.Children().Size(); ++i) {
                    auto child = targetGrid.Children().GetAt(i).try_as<FrameworkElement>();
                    if (child) {
                        int childCol = Grid::GetColumn(child);
                        if (childCol >= insertCol)
                            Grid::SetColumn(child, childCol + 1);
                    }
                }
            }

            playerGrid.Margin({(double)g_settings.playerMarginLeft, 0,
                              (double)g_settings.playerMarginRight, 0});
            Grid::SetColumn(playerGrid, insertCol);
            targetGrid.Children().Append(playerGrid);
            g_playerColumn = insertCol;

        }
        else {
            auto repeater  = FindChildByName(targetGrid, L"TaskbarFrameRepeater");
            auto trayFrame = FindChildByName(targetGrid, L"SystemTrayFrameGrid");

            bool isEdgePosition = (g_settings.position == L"taskbar_left_edge" ||
                                   g_settings.position == L"taskbar_right_edge");

            bool isTrackingPosition = (g_settings.position == L"taskbar_left_start" ||
                                       g_settings.position == L"taskbar_right_start" ||
                                       g_settings.position == L"taskbar_after_search_left" ||
                                       g_settings.position == L"taskbar_after_search_right" ||
                                       g_settings.position == L"taskbar_after_taskview_left" ||
                                       g_settings.position == L"taskbar_after_taskview_right" ||
                                       g_settings.position == L"taskbar_after_widgets_left" ||
                                       g_settings.position == L"taskbar_after_widgets_right");

            if (isEdgePosition || isTrackingPosition) {
                double leftMargin  = (double)g_settings.playerMarginLeft;
                double rightMargin = (double)g_settings.playerMarginRight;

                playerGrid.HorizontalAlignment(HorizontalAlignment::Left);

                if (isEdgePosition) {
                    if (g_settings.position == L"taskbar_left_edge") {
                        playerGrid.Margin({leftMargin, 0, rightMargin, 0});
                    }
                    else if (g_settings.position == L"taskbar_right_edge") {
                        playerGrid.HorizontalAlignment(HorizontalAlignment::Right);
                        if (trayFrame) rightMargin += trayFrame.ActualWidth() + 4;
                        playerGrid.Margin({leftMargin, 0, rightMargin, 0});
                    }
                } else if (isTrackingPosition) {
                    FrameworkElement targetElem = nullptr;
                    std::wstring trackSide = L"right";

                    if (repeater) {
                        if (g_settings.position == L"taskbar_left_start") {
                            targetElem = FindElementInRepeater(repeater, kStartButtonNames, ARRAYSIZE(kStartButtonNames));
                            trackSide = L"left";
                        } else if (g_settings.position == L"taskbar_right_start") {
                            targetElem = FindElementInRepeater(repeater, kStartButtonNames, ARRAYSIZE(kStartButtonNames));
                            trackSide = L"right";
                        } else if (g_settings.position == L"taskbar_after_search_left") {
                            targetElem = FindElementByClassName(repeater, L"Taskbar.TaskbarExtensionElement");
                            trackSide = L"left";
                        } else if (g_settings.position == L"taskbar_after_search_right") {
                            targetElem = FindElementByClassName(repeater, L"Taskbar.TaskbarExtensionElement");
                            trackSide = L"right";
                        } else if (g_settings.position == L"taskbar_after_taskview_left") {
                            targetElem = FindNthElementByClassName(repeater, L"Taskbar.ExperienceToggleButton", 1);
                            trackSide = L"left";
                        } else if (g_settings.position == L"taskbar_after_taskview_right") {
                            targetElem = FindNthElementByClassName(repeater, L"Taskbar.ExperienceToggleButton", 1);
                            trackSide = L"right";
                        } else if (g_settings.position == L"taskbar_after_widgets_left") {
                            targetElem = FindElementByClassName(repeater, L"Taskbar.ExperienceToggleButton");
                            trackSide = L"left";
                        } else if (g_settings.position == L"taskbar_after_widgets_right") {
                            targetElem = FindElementByClassName(repeater, L"Taskbar.ExperienceToggleButton");
                            trackSide = L"right";
                        }
                    }

                    if (targetElem) {
                        g_trackedElement = targetElem;
                        g_trackPosition = trackSide;

                        bool startButtonModActiveMod = IsStartButtonModActive(root);
                        double startButtonOffset = 0.0;

                        if (startButtonModActiveMod &&
                            (g_settings.position == L"taskbar_left_start" ||
                             g_settings.position == L"taskbar_right_start" ||
                             g_settings.position == L"taskbar_after_taskview_left" ||
                             g_settings.position == L"taskbar_after_taskview_right")) {
                            startButtonOffset = GetStartButtonAdjustment(root);
                        }

                        g_layoutUpdateToken = targetGrid.LayoutUpdated(
                            [targetGrid, startButtonModActiveMod, startButtonOffset](winrt::Windows::Foundation::IInspectable const&, winrt::Windows::Foundation::IInspectable const&) {
                                if (!g_playerGrid || !g_trackedElement || g_unloading) return;

                                bool isVisible = (g_playerGrid.Visibility() == Visibility::Visible);
                                double w = isVisible ? g_playerGrid.ActualWidth() : 0.0;

                                double desiredGap = isVisible ? (w + g_settings.playerMarginLeft + g_settings.playerMarginRight) : 0.0;
                                auto m = g_trackedElement.Margin();
                                bool changedMargin = false;

                                if (g_trackPosition == L"left") {
                                    if (std::abs(m.Left - desiredGap) > 1.0) { m.Left = desiredGap; changedMargin = true; }
                                } else {
                                    if (std::abs(m.Right - desiredGap) > 1.0) { m.Right = desiredGap; changedMargin = true; }
                                }

                                if (changedMargin) g_trackedElement.Margin(m);

                                if (isVisible) {
                                    try {
                                        auto transform = g_trackedElement.TransformToVisual(targetGrid);
                                        auto point = transform.TransformPoint({0, 0});
                                        double leftPos = point.X;

                                        if (g_trackPosition == L"left") {
                                            leftPos = point.X - desiredGap + g_settings.playerMarginLeft;
                                            if (startButtonModActiveMod && startButtonOffset > 0) {
                                                leftPos += startButtonOffset;
                                            }
                                        } else {
                                            leftPos = point.X + g_trackedElement.ActualWidth() + g_settings.playerMarginLeft;
                                        }

                                        auto pm = g_playerGrid.Margin();
                                        if (std::abs(pm.Left - leftPos) > 1.0) {
                                            g_playerGrid.Margin({leftPos, 0, 0, 0});
                                        }
                                    } catch (...) {}
                                }
                            }
                        );
                    } else {
                        playerGrid.Margin({leftMargin, 0, rightMargin, 0});
                    }
                }

                Grid::SetColumn(playerGrid, 0);
                Canvas::SetZIndex(playerGrid, 1000);
                targetGrid.Children().Append(playerGrid);
                g_playerColumn = -1;
            }
            else {
                ColumnDefinition newCol;
                newCol.Width({1.0, GridUnitType::Auto});

                if (insertCol >= (int)targetGrid.ColumnDefinitions().Size()) {
                    targetGrid.ColumnDefinitions().Append(newCol);
                } else {
                    targetGrid.ColumnDefinitions().InsertAt(insertCol, newCol);
                    for (uint32_t i = 0; i < targetGrid.Children().Size(); ++i) {
                        auto child = targetGrid.Children().GetAt(i).try_as<FrameworkElement>();
                        if (child) {
                            int childCol = Grid::GetColumn(child);
                            if (childCol >= insertCol)
                                Grid::SetColumn(child, childCol + 1);
                        }
                    }
                }

                playerGrid.Margin({(double)g_settings.playerMarginLeft, 0,
                                  (double)g_settings.playerMarginRight, 0});
                Grid::SetColumn(playerGrid, insertCol);
                targetGrid.Children().Append(playerGrid);
                g_playerColumn = insertCol;
            }
        }

        g_playerGrid      = playerGrid;
        g_injectionParent = targetGrid;

        g_playerGrid.Visibility(Visibility::Visible);
        g_playerGrid.UpdateLayout();

        OnSessionsChanged();
        g_needsUiUpdate = true;
        return true;
    } catch (...) {
        return false;
    }
}

static void RemovePlayerGrid() {
    if (!g_injectionParent) return;

    try {
        if (g_layoutUpdateToken.value) {
            auto targetGrid = g_injectionParent.try_as<Grid>();
            if (targetGrid) {
                try { targetGrid.LayoutUpdated(g_layoutUpdateToken); } catch (...) {}
            }
            g_layoutUpdateToken = {};
        }
        
        if (g_trackedElement) {
            try {
                auto m = g_trackedElement.Margin();
                if (g_trackPosition == L"left") m.Left = 0;
                if (g_trackPosition == L"right") m.Right = 0;
                g_trackedElement.Margin(m);
            } catch (...) {}
            g_trackedElement = nullptr;
        }
        g_trackPosition = L"";

        auto targetGrid = g_injectionParent.try_as<Grid>();
        int playerCol = -1;

        for (uint32_t i = 0; i < targetGrid.Children().Size(); ++i) {
            auto fe = targetGrid.Children().GetAt(i).try_as<FrameworkElement>();
            if (fe && fe.Name() == kGridName) {
                playerCol = Grid::GetColumn(fe);
                try { targetGrid.Children().RemoveAt(i); } catch (...) {}
                break;
            }
        }

        bool isTrackingPosition = (g_settings.position == L"taskbar_left_edge" ||
                                  g_settings.position == L"taskbar_right_edge" ||
                                  g_settings.position == L"taskbar_left_start" ||
                                  g_settings.position == L"taskbar_right_start" ||
                                  g_settings.position == L"taskbar_after_search_left" ||
                                  g_settings.position == L"taskbar_after_search_right" ||
                                  g_settings.position == L"taskbar_after_taskview_left" ||
                                  g_settings.position == L"taskbar_after_taskview_right" ||
                                  g_settings.position == L"taskbar_after_widgets_left" ||
                                  g_settings.position == L"taskbar_after_widgets_right");

        if (!isTrackingPosition && playerCol >= 0 && playerCol < (int)targetGrid.ColumnDefinitions().Size()) {
            for (uint32_t i = 0; i < targetGrid.Children().Size(); ++i) {
                auto child = targetGrid.Children().GetAt(i).try_as<FrameworkElement>();
                if (child) {
                    int childCol = Grid::GetColumn(child);
                    if (childCol > playerCol)
                        Grid::SetColumn(child, childCol - 1);
                }
            }
            targetGrid.ColumnDefinitions().RemoveAt(playerCol);
        }

        g_playerGrid      = nullptr;
        g_injectionParent = nullptr;
        g_playerColumn    = -1;

        g_cachedAlbumTitle.clear();
        g_cachedAlbumArtist.clear();
        g_cachedThumbnailBytes.clear();
        g_cachedAppIconSize = -1;
    } catch (...) {
        g_playerGrid      = nullptr;
        g_injectionParent = nullptr;
        g_playerColumn    = -1;

        g_cachedAlbumTitle.clear();
        g_cachedAlbumArtist.clear();
        g_cachedThumbnailBytes.clear();
        g_cachedAppIconSize = -1;
    }
}

static void RefreshPlayerContents() {
    if (!g_playerGrid || g_unloading || g_applyingSettings) return;

    try {
        auto dispatcher = g_playerGrid.Dispatcher();
        if (!dispatcher) {
            g_playerGrid = nullptr;
            g_injectionParent = nullptr;
            if (g_taskbarWnd) {
                StopRetryThread();
                StartRetryThread();
            }
            return;
        }
    } catch (...) {
        g_playerGrid = nullptr;
        g_injectionParent = nullptr;
        if (g_taskbarWnd) {
            StopRetryThread();
            StartRetryThread();
        }
        return;
    }

    std::wstring      title, artist;
    bool              isPlaying = false, hasMedia = false;
    std::vector<BYTE> thumbBytes;
    std::vector<BYTE> appIconBytes;
    {
        std::lock_guard<std::mutex> lk(g_mediaMtx);
        title        = g_media.title;
        artist       = g_media.artist;
        isPlaying    = g_media.isPlaying;
        hasMedia     = g_media.hasMedia;
        thumbBytes   = g_media.thumbnailBytes;
        appIconBytes = g_media.appIconBytes;
    }
    bool hasSession = false;
    { std::lock_guard<std::mutex> lk(g_sessionMtx); hasSession = (g_currentSession != nullptr); }

    if (auto fe = FindChildByName(g_playerGrid, kTitleBlockName))
        if (auto tb = fe.try_as<TextBlock>())
            try {
                tb.Text(winrt::hstring(title));
                tb.Foreground(MakeBrush(TextColor()));
                bool visible = g_settings.showTrackTitle && (!title.empty() || hasSession);
                tb.Visibility(visible ? Visibility::Visible : Visibility::Collapsed);

                if (g_settings.showFullTitleOnHover && !title.empty()) {
                    ToolTipService::SetToolTip(tb, winrt::box_value(winrt::hstring(title)));
                    ToolTipService::SetPlacement(tb, Controls::Primitives::PlacementMode::Top);
                } else {
                    ToolTipService::SetToolTip(tb, nullptr);
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kArtistBlockName))
        if (auto ab = fe.try_as<TextBlock>())
            try {
                ab.Text(winrt::hstring(artist));
                bool visible = g_settings.showTrackArtist && !artist.empty();
                ab.Visibility(visible ? Visibility::Visible : Visibility::Collapsed);
                ab.Foreground(MakeBrush(ArtistColor()));

                if (g_settings.showFullTitleOnHover && !artist.empty()) {
                    ToolTipService::SetToolTip(ab, winrt::box_value(winrt::hstring(artist)));
                    ToolTipService::SetPlacement(ab, Controls::Primitives::PlacementMode::Top);
                } else {
                    ToolTipService::SetToolTip(ab, nullptr);
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kPlayBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    const wchar_t* glyph = GetGlyph(2, isPlaying);
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kPrevBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    const wchar_t* glyph = GetGlyph(1);
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kNextBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    const wchar_t* glyph = GetGlyph(3);
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kRewindBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    const wchar_t* glyph = GetGlyph(5);
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kForwardBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    const wchar_t* glyph = GetGlyph(6);
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kShuffleBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    bool isEnabled = g_shuffleEnabled.load();
                    const wchar_t* glyph = L"";
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                    ct.Opacity(isEnabled ? 1.0 : 0.4);
                }
            } catch (...) {}

    if (auto fe = FindChildByName(g_playerGrid, kRepeatBtnName))
        if (auto btn = fe.try_as<Button>())
            try {
                if (auto ct = btn.Content().try_as<TextBlock>()) {
                    RepeatMode mode = g_repeatMode.load();
                    const wchar_t* glyph;
                    switch (mode) {
                        case RepeatMode::Off:
                            glyph = L"";
                            break;
                        case RepeatMode::All:
                            glyph = L"";
                            break;
                        case RepeatMode::One:
                            glyph = L"";
                            break;
                    }
                    ct.Text(winrt::hstring(glyph));
                    ct.Foreground(MakeBrush(ButtonColor()));
                    ct.Opacity(1.0);
                }
            } catch (...) {}

    if (g_settings.showPauseOverlay && g_settings.showAlbumArt) {
        if (auto fe = FindChildByName(g_playerGrid, L"PauseIconOverlay"))
            if (auto overlay = fe.try_as<Border>()) {
                try {
                    bool showPause = !isPlaying;
                    overlay.Visibility(showPause ? Visibility::Visible : Visibility::Collapsed);

                    if (auto pauseIcon = overlay.Child().try_as<TextBlock>()) {
                        pauseIcon.Text(GetGlyph(2, true));
                        bool useFluent = (g_settings.iconStyle == L"fluent_outline" || g_settings.iconStyle == L"fluent_filled");
                        pauseIcon.FontFamily(Media::FontFamily(useFluent ? L"Segoe Fluent Icons" : L"Segoe MDL2 Assets"));
                    }

                    if (showPause) {
                        if (auto artImg = FindChildByName(g_playerGrid, kArtImageName)) {
                            if (auto parent = VisualTreeHelper::GetParent(artImg)) {
                                if (auto container = parent.try_as<FrameworkElement>()) {
                                    if (auto grandParent = VisualTreeHelper::GetParent(container)) {
                                        if (auto artContainer = grandParent.try_as<Grid>()) {
                                            for (uint32_t i = 0; i < artContainer.Children().Size(); ++i) {
                                                auto child = artContainer.Children().GetAt(i);
                                                if (auto border = child.try_as<Border>()) {
                                                    if (border.Name() == L"EmptyIconBorder") {
                                                        border.Visibility(Visibility::Collapsed);
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } catch (...) {}
            }
    }

    if (auto fe = FindChildByName(g_playerGrid, kArtImageName))
        if (auto img = fe.try_as<Controls::Image>()) {
            if (!thumbBytes.empty() && g_settings.showAlbumArt) {
                bool isSameAlbum = (title == g_cachedAlbumTitle &&
                                   artist == g_cachedAlbumArtist &&
                                   thumbBytes == g_cachedThumbnailBytes);

                if (!isSameAlbum) {
                    try {
                        auto stream = winrt::Windows::Storage::Streams::InMemoryRandomAccessStream();
                        DataWriter writer(stream);
                        writer.WriteBytes(winrt::array_view<const BYTE>(thumbBytes));
                        auto storeOp = writer.StoreAsync();
                        if (storeOp.wait_for(std::chrono::milliseconds(100)) == winrt::Windows::Foundation::AsyncStatus::Completed) {
                            writer.DetachStream();
                            stream.Seek(0);
                            BitmapImage bmp;
                            bmp.DecodePixelHeight(g_settings.albumArtSize);
                            bmp.SetSourceAsync(stream);
                            img.Source(bmp);
                            img.Visibility(Visibility::Visible);

                            g_cachedAlbumTitle = title;
                            g_cachedAlbumArtist = artist;
                            g_cachedThumbnailBytes = thumbBytes;

                            if (auto parent = VisualTreeHelper::GetParent(img)) {
                                if (auto container = parent.try_as<FrameworkElement>()) {
                                    if (auto grandParent = VisualTreeHelper::GetParent(container)) {
                                        if (auto artContainer = grandParent.try_as<Grid>()) {
                                            artContainer.Visibility(Visibility::Visible);
                                            for (uint32_t i = 0; i < artContainer.Children().Size(); ++i) {
                                                auto child = artContainer.Children().GetAt(i);
                                                if (auto border = child.try_as<Border>()) {
                                                    if (border.Name() == L"EmptyIconBorder") {
                                                        border.Visibility(Visibility::Collapsed);
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } catch (...) { try { img.Source(nullptr); } catch (...) {} }
                } else {
                    img.Visibility(Visibility::Visible);
                    if (auto parent = VisualTreeHelper::GetParent(img)) {
                        if (auto container = parent.try_as<FrameworkElement>()) {
                            if (auto grandParent = VisualTreeHelper::GetParent(container)) {
                                if (auto artContainer = grandParent.try_as<Grid>()) {
                                    artContainer.Visibility(Visibility::Visible);
                                }
                            }
                        }
                    }
                }
            } else {
                g_cachedAlbumTitle.clear();
                g_cachedAlbumArtist.clear();
                g_cachedThumbnailBytes.clear();

                try {
                    img.Source(nullptr);
                    img.Visibility(Visibility::Collapsed);

                    if (g_settings.albumArtEmptyBehavior == L"hide" && thumbBytes.empty()) {
                        if (auto parent = VisualTreeHelper::GetParent(img)) {
                            if (auto container = parent.try_as<FrameworkElement>()) {
                                if (auto grandParent = VisualTreeHelper::GetParent(container)) {
                                    if (auto artContainer = grandParent.try_as<FrameworkElement>()) {
                                        artContainer.Visibility(Visibility::Collapsed);
                                    }
                                }
                            }
                        }
                    } else if ((g_settings.albumArtEmptyBehavior == L"show_question" ||
                                g_settings.albumArtEmptyBehavior == L"show_note") && thumbBytes.empty()) {
                        if (auto parent = VisualTreeHelper::GetParent(img)) {
                            if (auto container = parent.try_as<FrameworkElement>()) {
                                if (auto grandParent = VisualTreeHelper::GetParent(container)) {
                                    if (auto artContainer = grandParent.try_as<Grid>()) {
                                        artContainer.Visibility(Visibility::Visible);

                                        Border iconBorder = nullptr;
                                        for (uint32_t i = 0; i < artContainer.Children().Size(); ++i) {
                                            auto child = artContainer.Children().GetAt(i);
                                            if (auto border = child.try_as<Border>()) {
                                                if (border.Name() == L"EmptyIconBorder") {
                                                    iconBorder = border;
                                                    break;
                                                }
                                            }
                                        }

                                        if (!iconBorder) {
                                            double acr = (double)g_settings.albumArtCornerRadius;
                                            iconBorder = Border();
                                            iconBorder.Name(L"EmptyIconBorder");
                                            iconBorder.Background(MakeBrush({0x40, 0x80, 0x80, 0x80}));
                                            iconBorder.CornerRadius({acr, acr, acr, acr});
                                            iconBorder.HorizontalAlignment(HorizontalAlignment::Stretch);
                                            iconBorder.VerticalAlignment(VerticalAlignment::Stretch);
                                            Canvas::SetZIndex(iconBorder, 5);

                                            TextBlock iconText = TextBlock();
                                            iconText.Name(L"EmptyIconText");
                                            bool useFluent = (g_settings.iconStyle == L"fluent_outline" || g_settings.iconStyle == L"fluent_filled");
                                            iconText.FontFamily(Media::FontFamily(useFluent ? L"Segoe Fluent Icons" : L"Segoe MDL2 Assets"));
                                            iconText.FontSize(16);
                                            iconText.Foreground(MakeBrush({0xFF, 0xFF, 0xFF, 0xFF}));
                                            iconText.HorizontalAlignment(HorizontalAlignment::Center);
                                            iconText.VerticalAlignment(VerticalAlignment::Center);

                                            iconBorder.Child(iconText);
                                            artContainer.Children().Append(iconBorder);
                                        }

                                        if (auto textBlock = iconBorder.Child().try_as<TextBlock>()) {
                                            if (g_settings.albumArtEmptyBehavior == L"show_question") {
                                                textBlock.Text(L"?");
                                                textBlock.FontFamily(Media::FontFamily(L"Segoe UI"));
                                            } else {
                                                textBlock.Text(L"");
                                                textBlock.FontFamily(Media::FontFamily(L"Segoe MDL2 Assets"));
                                            }
                                        }

                                        iconBorder.Visibility(Visibility::Visible);
                                    }
                                }
                            }
                        }
                    }
                } catch (...) {}
            }
        }

    if (g_settings.showAppIcon) {
        if (auto fe = FindChildByName(g_playerGrid, kAppIconImageName))
            if (auto img = fe.try_as<Controls::Image>()) {
                bool sizeChanged = (g_cachedAppIconSize != g_settings.appIconSize);
                if (sizeChanged && !appIconBytes.empty()) {
                    std::wstring aumid;
                    {
                        std::lock_guard<std::mutex> lk(g_mediaMtx);
                        aumid = g_media.appUserModelId;
                    }
                    if (!aumid.empty()) {
                        appIconBytes = FetchAppIconBytes(aumid, g_settings.appIconSize);
                        {
                            std::lock_guard<std::mutex> lk(g_mediaMtx);
                            g_media.appIconBytes = appIconBytes;
                        }
                    }
                    g_cachedAppIconSize = g_settings.appIconSize;
                }

                if (!appIconBytes.empty()) {
                    try {
                        int iconSz = g_settings.appIconSize;
                        size_t expectedBytes = (size_t)iconSz * iconSz * 4;
                        if (appIconBytes.size() != expectedBytes) {
                            int computed = (int)std::sqrt((double)appIconBytes.size() / 4.0);
                            if (computed > 0 && (size_t)computed * computed * 4 == appIconBytes.size())
                                iconSz = computed;
                        }

                        img.Width(iconSz);
                        img.Height(iconSz);

                        size_t bytesNeeded = (size_t)iconSz * iconSz * 4;
                        winrt::Windows::UI::Xaml::Media::Imaging::WriteableBitmap wb(iconSz, iconSz);
                        auto buf = wb.PixelBuffer();

                        auto bufferByteAccess = buf.as<Windows::Storage::Streams::IBufferByteAccess>();
                        BYTE* pixels = nullptr;
                        bufferByteAccess->Buffer(&pixels);

                        if (appIconBytes.size() >= bytesNeeded && pixels) {
                            for (size_t i = 0; i + 3 < bytesNeeded; i += 4) {
                                pixels[i+0] = appIconBytes[i+2];
                                pixels[i+1] = appIconBytes[i+1];
                                pixels[i+2] = appIconBytes[i+0];
                                pixels[i+3] = appIconBytes[i+3];
                            }
                        }
                        buf.Length(static_cast<uint32_t>(bytesNeeded));
                        wb.Invalidate();
                        img.Source(wb);
                        img.Visibility(Visibility::Visible);
                    } catch (...) {
                        try { img.Source(nullptr); img.Visibility(Visibility::Collapsed); } catch (...) {}
                    }
                } else {
                    try { img.Source(nullptr); img.Visibility(Visibility::Collapsed); } catch (...) {}
                }
            }
    }
}

static bool IsFullscreenActive() {
    using Fn = HRESULT(WINAPI*)(int*);
    static Fn pfn = nullptr; static bool tried = false;
    if (!tried) {
        tried = true;
        HMODULE h = GetModuleHandleW(L"shell32.dll");
        if (!h) h = LoadLibraryW(L"shell32.dll");
        if (h) pfn = (Fn)GetProcAddress(h, (LPCSTR)2573);
    }
    if (!pfn) return false;
    int s = 0;
    return SUCCEEDED(pfn(&s)) && (s == 2 || s == 3 || s == 4);
}

static void UpdateVisibility() {
    if (!g_playerGrid || g_unloading || g_applyingSettings) return;

    bool hide = false;
    if (g_settings.hideFullscreen && IsFullscreenActive()) hide = true;

    if (!hide && g_settings.idleHideSeconds > 0) {
        bool playing = false;
        { std::lock_guard<std::mutex> lk(g_mediaMtx); playing = g_media.isPlaying; }
        if (playing) { g_idleSeconds = 0; g_hiddenByIdle = false; }
        else if (++g_idleSeconds >= g_settings.idleHideSeconds) g_hiddenByIdle = true;
        if (g_hiddenByIdle) hide = true;
    }

    if (!hide) {
        bool hasMedia = false, hasSession = false;
        { std::lock_guard<std::mutex> lk(g_mediaMtx); hasMedia = g_media.hasMedia; }
        { std::lock_guard<std::mutex> lk(g_sessionMtx); hasSession = (g_currentSession != nullptr); }
        if (g_settings.hideWhenNoMedia && !hasMedia && !hasSession) hide = true;
    }

    try {
        if (g_playerColumn == -1) {
            if (hide) {
                g_playerGrid.Visibility(Visibility::Collapsed);
            } else {
                g_playerGrid.Visibility(Visibility::Visible);
            }
        } else {
            g_playerGrid.Visibility(hide ? Visibility::Collapsed : Visibility::Visible);

            if (g_injectionParent) {
                if (auto targetGrid = g_injectionParent.try_as<Grid>()) {
                    if (g_playerColumn < (int)targetGrid.ColumnDefinitions().Size()) {
                        auto colDef = targetGrid.ColumnDefinitions().GetAt(g_playerColumn);
                        if (hide) {
                            colDef.Width({0.0, GridUnitType::Pixel});
                        } else {
                            colDef.Width({1.0, GridUnitType::Auto});
                        }
                    }
                }
            }

            if (hide) {
                g_playerGrid.MinWidth(0);
                g_playerGrid.MaxWidth(0);
                g_playerGrid.Width(0);
            } else {
                bool hasTextOrButtons = g_settings.showTrackTitle || g_settings.showTrackArtist || (g_settings.showMediaButtons && !g_mediaButtons.empty());
                if (hasTextOrButtons && g_settings.playerMinWidth > 0) {
                    g_playerGrid.MinWidth((double)g_settings.playerMinWidth);
                } else {
                    g_playerGrid.MinWidth(0);
                }
                if (g_settings.playerMaxWidth > 0) {
                    g_playerGrid.MaxWidth((double)g_settings.playerMaxWidth);
                } else {
                    g_playerGrid.ClearValue(FrameworkElement::MaxWidthProperty());
                }
                g_playerGrid.ClearValue(FrameworkElement::WidthProperty());
            }
        }

        g_playerGrid.UpdateLayout();
    } catch (...) {}
}

static void ApplySettings() {
    try { RemovePlayerGrid(); } catch (...) {}
    if (!g_unloading)
        try { InjectPlayerGrid(); } catch (...) {}
}

using IconView_IconView_t = void*(WINAPI*)(void*);
static IconView_IconView_t IconView_IconView_Original = nullptr;

static void StartRetryThread();
static void StopRetryThread();

static void* WINAPI IconView_IconView_Hook(void* pThis) {
    auto r = IconView_IconView_Original(pThis);
    if (!g_unloading && !g_playerGrid) {
        HWND hWnd = FindCurrentProcessTaskbarWnd();
        if (hWnd) {
            g_taskbarWnd = hWnd;
            StopRetryThread();
            RunFromWindowThread(hWnd, [](void*) {
                if (!g_playerGrid && !g_unloading) ApplySettings();
            }, nullptr);
            StartRetryThread();
        }
    }
    return r;
}

using LoadLibraryExW_t = HMODULE(WINAPI*)(LPCWSTR, HANDLE, DWORD);
static LoadLibraryExW_t LoadLibraryExW_Original = nullptr;

static HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR path, HANDLE file, DWORD flags) {
    HMODULE h = LoadLibraryExW_Original(path, file, flags);
    if (h && path && !g_taskbarViewDllLoaded) {
        const wchar_t* base = wcsrchr(path, L'\\');
        base = base ? base + 1 : path;
        if (_wcsicmp(base, L"Taskbar.View.dll") == 0 ||
            _wcsicmp(base, L"ExplorerExtensions.dll") == 0) {
            WindhawkUtils::SYMBOL_HOOK hooks[] = {{
                {LR"(public: __cdecl winrt::SystemTray::implementation::IconView::IconView(void))"},
                &IconView_IconView_Original,
                IconView_IconView_Hook,
            }};
            if (WindhawkUtils::HookSymbols(h, hooks, ARRAYSIZE(hooks))) {
                g_taskbarViewDllLoaded = true;
                Wh_ApplyHookOperations();
            }
        }
    }
    return h;
}

static bool HookTaskbarDllSymbols() {
    HMODULE h = LoadLibraryExW(L"taskbar.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!h) { return false; }

    WindhawkUtils::SYMBOL_HOOK hooks[] = {
        {{LR"(const CTaskBand::`vftable'{for `ITaskListWndSite'})"},
         &CTaskBand_ITaskListWndSite_vftable},
        {{LR"(public: virtual class std::shared_ptr<class TaskbarHost> __cdecl CTaskBand::GetTaskbarHost(void)const )"},
         &CTaskBand_GetTaskbarHost_Original},
        {{LR"(public: int __cdecl TaskbarHost::FrameHeight(void)const )"},
         &TaskbarHost_FrameHeight_Original},
        {{LR"(public: void __cdecl std::_Ref_count_base::_Decref(void))"},
         &Std_Ref_Decref_Original},
    };
    bool ok = WindhawkUtils::HookSymbols(h, hooks, ARRAYSIZE(hooks));
    return ok;
}

static bool HookTaskbarViewDllSymbols(HMODULE h) {
    WindhawkUtils::SYMBOL_HOOK hooks[] = {{
        {LR"(public: __cdecl winrt::SystemTray::implementation::IconView::IconView(void))"},
        &IconView_IconView_Original,
        IconView_IconView_Hook,
    }};
    if (!WindhawkUtils::HookSymbols(h, hooks, ARRAYSIZE(hooks))) {
        return false;
    }
    g_taskbarViewDllLoaded = true;
    return true;
}

static HMODULE GetTaskbarViewModule() {
    for (auto* n : {L"Taskbar.View.dll", L"taskbar.view.dll", L"ExplorerExtensions.dll"})
        if (HMODULE h = GetModuleHandleW(n)) return h;
    return nullptr;
}

static HANDLE g_retryThread    = nullptr;
static HANDLE g_retryStopEvent = nullptr;

static void StartRetryThread() {
    if (g_retryThread) return;
    g_retryStopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    g_retryThread = CreateThread(nullptr, 0, [](void*) -> DWORD {
        const DWORD delays[] = {2000, 3000, 4000, 5000, 6000, 8000, 10000};
        int attempt = 0;
        while (!g_unloading) {
            DWORD delay = (attempt < 7) ? delays[attempt] : 15000;
            if (WaitForSingleObject(g_retryStopEvent, delay) != WAIT_TIMEOUT) break;
            if (g_playerGrid || g_unloading) break;
            HWND hWnd = FindCurrentProcessTaskbarWnd();
            if (hWnd) {
                g_taskbarWnd = hWnd;
                RunFromWindowThread(hWnd, [](void*) {
                    if (!g_playerGrid && !g_unloading) ApplySettings();
                }, nullptr);
            }
            ++attempt;
        }
        return 0;
    }, nullptr, 0, nullptr);
}

static void StopRetryThread() {
    if (g_retryStopEvent) SetEvent(g_retryStopEvent);
    if (g_retryThread) { WaitForSingleObject(g_retryThread, 3000); CloseHandle(g_retryThread); g_retryThread = nullptr; }
    if (g_retryStopEvent) { CloseHandle(g_retryStopEvent); g_retryStopEvent = nullptr; }
}

BOOL Wh_ModInit() {
    LoadSettings();

    Sleep(500);

    if (!HookTaskbarDllSymbols()) {
    }

    if (HMODULE h = GetTaskbarViewModule()) {
        HookTaskbarViewDllSymbols(h);
    } else {
        HMODULE kb = GetModuleHandleW(L"kernelbase.dll");
        auto pLLEW = kb ? (LoadLibraryExW_t)GetProcAddress(kb, "LoadLibraryExW") : nullptr;
        if (pLLEW)
            Wh_SetFunctionHook((void*)pLLEW, (void*)LoadLibraryExW_Hook,
                               (void**)&LoadLibraryExW_Original);
    }

    return TRUE;
}

void Wh_ModAfterInit() {
    Sleep(1000);

    if (!g_taskbarViewDllLoaded)
        if (HMODULE h = GetTaskbarViewModule())
            HookTaskbarViewDllSymbols(h);

    g_taskbarWnd = FindCurrentProcessTaskbarWnd();

    if (g_taskbarWnd)
        RunFromWindowThread(g_taskbarWnd, [](void*) { ApplySettings(); }, nullptr);

    StartMediaThread();
    StartTimerThread();
    StartIdleTimer();
    StartRetryThread();
    StartThemeWatcher();
}

void Wh_ModUninit() {
    g_unloading = true;

    StopRetryThread();
    StopTimerThread();
    StopIdleTimer();
    StopMediaThread();
    StopThemeWatcher();

    if (g_taskbarWnd)
        RunFromWindowThread(g_taskbarWnd, [](void*) { RemovePlayerGrid(); }, nullptr);
}

void Wh_ModSettingsChanged() {
    g_applyingSettings = true;

    StopRetryThread();
    StopTimerThread();
    StopIdleTimer();

    LoadSettings();

    HWND hWnd = g_taskbarWnd ? g_taskbarWnd : FindCurrentProcessTaskbarWnd();
    if (!hWnd) {
        g_applyingSettings = false;
        StartTimerThread();
        StartIdleTimer();
        StartRetryThread();
        return;
    }
    g_taskbarWnd = hWnd;

    DWORD threadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (threadId && threadId != GetCurrentThreadId()) {
        struct WorkData { HWND hWnd; };
        WorkData* data = new WorkData{hWnd};

        HANDLE hThread = CreateThread(nullptr, 0, [](LPVOID param) -> DWORD {
            WorkData* data2 = (WorkData*)param;
            RunFromWindowThread(data2->hWnd, [](void*) {
                try {
                    RemovePlayerGrid();
                    if (!g_unloading) InjectPlayerGrid();
                } catch (...) {
                    g_playerGrid = nullptr;
                    g_injectionParent = nullptr;
                }
            }, nullptr);
            return 0;
        }, data, 0, nullptr);

        if (hThread) {
            WaitForSingleObject(hThread, 2000);
            CloseHandle(hThread);
        }
        delete data;
    } else {
        try {
            RemovePlayerGrid();
            if (!g_unloading) InjectPlayerGrid();
        } catch (...) {
            g_playerGrid = nullptr;
            g_injectionParent = nullptr;
        }
    }

    g_applyingSettings = false;
    g_needsUiUpdate = true;

    StartTimerThread();
    StartIdleTimer();
    StartRetryThread();
}
