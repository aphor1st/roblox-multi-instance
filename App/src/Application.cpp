#include "Precompiled.h"
#include "Application.h"
#include "WindowManager.h"
#include <windows.h>
#include <string>

class GUI {
private:
    HWND hwnd;
    HWND title;
    HWND textbox;

public:
    GUI() : hwnd(nullptr), title(nullptr), textbox(nullptr) {}

    void howtonamefunctionsimretarded() {
        CreateMutex(nullptr, TRUE, L"ROBLOX_singletonEvent");

        HINSTANCE hInstance = GetModuleHandle(nullptr);

        WinMain(hInstance, nullptr, nullptr, SW_SHOWDEFAULT);
    }

    int Run(HINSTANCE hInstance) {
        return 0;
    }
};

int main() {
    GUI gui;
    gui.howtonamefunctionsimretarded();
    return 0;
}

void Application::Start()
{
	
}

void Application::PreUpdate()
{
}

void Application::OnGUI()
{
    if (ImGui::Button("Follow @aphor1st on github")) ShellExecuteW(NULL, L"open", L"https://github.com/aphor1st", NULL, NULL, SW_SHOWNORMAL);

    ImGui::Text("roblox multi-instance tool by @aphor1st on github\n\n");
    ImGui::Separator();
    ImGui::Text("u have to open this before roblox or it wont work.");
}

void Application::PostUpdate()
{
}

void Application::Destroy()
{
}
