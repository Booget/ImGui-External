#include "ImGui/ImGui.h"
#include "ImGui/imgui_impl_dx9.h"
#include "ImGui/imgui_impl_win32.h"

#include "menu.h"
#include "globals.h"

#include <iostream>
#include <windows.h>

class initWindow {
public:
    const char* window_title = "booget external";
    ImVec2 window_size{ 400, 400 };
    
    DWORD window_flags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize;
} iw;

void menu::render()
{
    if (globals.active)
    {
        ImGui::SetNextWindowSize(iw.window_size);
        ImGui::SetNextWindowBgAlpha(1.0f);
        ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
        {

        }
        ImGui::End();
    }
    else
    {
        exit(0);
    }
}