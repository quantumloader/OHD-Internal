#pragma once
#include "ImGui/imgui_internal.h"

class c_menu {
public:
	static inline bool showMenu = false;
	union u_vars
	{
		static inline bool EspSkeleton = true;
		static inline bool ShowName = true;
        static inline bool ShowGun = true;
        static inline bool ShowHealth = true;
        static inline bool ShowDistance = true;
		static inline bool ShowBox = true;
        static inline bool Chams = false;
		static inline bool ShowTargetLine = false;

		static inline bool SilentAim = true;
		static inline float FovRadius = 120.f;
		static inline bool VisCheck = true;
        static inline bool FovRadiusBool = true;

		static inline bool NoRecoil = false;
		static inline bool ShowCurrAmmo = true;
		static inline bool InfStamina = false;
        static inline bool ShowNazi = false;
        static inline bool SpeedHack = false;

        static inline bool GrenadeWarning = false;

        static inline bool GunLine = false;

		static inline const char* BoneList[] = { "Head", "Body", "Feet" };
        static inline const char* BoxTypes[2] = { "Full Box","Cornered Box" };
		static inline int AimBone = 0;
        static inline int BoxType = 0;
        static inline int speed = 0;
        static inline float cross1 = 0;
        static inline float cross2 = 0;

        // chams stuff
        static inline float ChamsColor[3]{ 1.f, 0.f, 1.f };
        static  inline float White[3]{ 1.f, 1.f, 1.f };
        static  inline float Black[3]{ 0.f, 0.f, 0.f };
        static  inline float Red[3]{ 1.f, 0.f, 0.f };
        static  inline float Green[3]{ 0.f, 1.f, 0.f };
        static  inline float Blue[3]{ 0.f, 0.f, 1.f };
        static  inline float Cian[3]{ 0.f, 1.f, 1.f };
        static  inline float Pink[3]{ 1.f, 0.f, 1.f };
        static  inline float Yellow[3]{ 1.f, 1.f, 0.f };
        static  inline float Visible[3]{ 0.f, 0.f, 1.f };
        static  inline float NotVisible[3]{ 1.f, 0.f, 0.f };
	};

	static void Tick()
	{
        if (showMenu)
        {
            // pasted
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            ImDrawList* draw;
            static float f = 0.2f;
            static int counter = 0;
            int screenSize = GetSystemMetrics(SM_CXSCREEN) / GetSystemMetrics(SM_CYSCREEN);


            //things you need for the background part
            ImGuiStyle& style = ImGui::GetStyle();

            ImGui::SetNextWindowPos(ImVec2(0, 0));
            ImGui::SetNextWindowSize(ImVec2(3000, 3000));
            ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.1f, 0.1f, 0.1f, 0.5f));
            ImGui::Begin("##bg", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoTitleBar);
            {
                //proper draw call
                draw = ImGui::GetWindowDrawList();

                ImVec2 screenSize = ImGui::GetIO().DisplaySize;
                ImGui::Particles(draw, screenSize); // it's important to define this in imgui_widgets.cpp otherwise it wouldn't work properly

            }ImGui::End();
            ImGui::PopStyleColor();
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


            ImGui::SetNextWindowSize(ImVec2(800, 600), ImGuiCond_Always);
            ImVec4* colors = style.Colors;

            colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
            colors[ImGuiCol_TextDisabled] = ImVec4(ImColor(255, 255, 255, 179));
            colors[ImGuiCol_WindowBg] = ImVec4(ImColor(17, 17, 17));
            colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_PopupBg] = ImVec4(ImColor(28, 28, 28));
            colors[ImGuiCol_Border] = ImVec4(ImColor(50, 50, 50));
            colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_FrameBg] = ImVec4(ImColor(28, 28, 28));
            colors[ImGuiCol_FrameBgHovered] = ImVec4(ImColor(23, 23, 23));
            colors[ImGuiCol_FrameBgActive] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_TitleBg] = ImVec4(ImColor(28, 28, 28));
            colors[ImGuiCol_TitleBgActive] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_TitleBgCollapsed] = ImVec4(ImColor(23, 23, 23));
            colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
            colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.00f);
            colors[ImGuiCol_ScrollbarGrab] = ImVec4(ImColor(20, 20, 20));
            colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(ImColor(20, 20, 20));
            colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(ImColor(20, 20, 20));
            colors[ImGuiCol_CheckMark] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_SliderGrab] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_SliderGrabActive] = ImVec4(ImColor(145, 47, 47));
            colors[ImGuiCol_Button] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_ButtonHovered] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_ButtonActive] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_Header] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_HeaderHovered] = ImVec4(ImColor(255, 0, 0));
            colors[ImGuiCol_HeaderActive] = ImVec4(ImColor(23, 23, 23));
            colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
            colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
            colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
            colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.20f);
            colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
            colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
            colors[ImGuiCol_Tab] = ImLerp(colors[ImGuiCol_Header], colors[ImGuiCol_TitleBgActive], 0.80f);
            colors[ImGuiCol_TabHovered] = colors[ImGuiCol_HeaderHovered];
            colors[ImGuiCol_TabActive] = ImLerp(colors[ImGuiCol_HeaderActive], colors[ImGuiCol_TitleBgActive], 0.60f);
            colors[ImGuiCol_TabUnfocused] = ImLerp(colors[ImGuiCol_Tab], colors[ImGuiCol_TitleBg], 0.80f);
            colors[ImGuiCol_TabUnfocusedActive] = ImLerp(colors[ImGuiCol_TabActive], colors[ImGuiCol_TitleBg], 0.40f);
            colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
            colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
            colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
            colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
            colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);
            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
            colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);   // Prefer using Alpha=1.0 here
            colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);   // Prefer using Alpha=1.0 here
            colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
            colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
            colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
            colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
            colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
            colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

            if (ImGui::Begin("Operation: Harsh Doorstop | Internal", &showMenu, ImGuiWindowFlags_NoResize))
            {
                static int selectedTab = 0;

                // Создаем боковую панель
                ImGui::BeginChild("SidePanel", ImVec2(150, 0), true);
                {
                    if (ImGui::Selectable("Aim", selectedTab == 0))
                        selectedTab = 0;
                    if (ImGui::Selectable("Visuals", selectedTab == 1))
                        selectedTab = 1;
                    if (ImGui::Selectable("Exploits", selectedTab == 2))
                        selectedTab = 2;
                    if (ImGui::Selectable("Misc", selectedTab == 3))
                        selectedTab = 3;
                }
                ImGui::EndChild();

                ImGui::SameLine();

                ImGui::BeginChild("MainPanel", ImVec2(0, 0), true);
                {
                    switch (selectedTab)
                    {
                    case 1: // Visuals
                        ImGui::TextColored(ImVec4(ImColor(255, 0, 0)), "Visuals");
                        ImGui::Spacing();
                        ImGui::Checkbox("Name", &u_vars::ShowName);
                        ImGui::Checkbox("Distance", &u_vars::ShowDistance);
                        ImGui::Checkbox("Health", &u_vars::ShowHealth);
                        ImGui::Checkbox("Skeletons", &u_vars::EspSkeleton);
                        ImGui::Checkbox("Box", &u_vars::ShowBox);
                        ImGui::Combo("Box Type", &u_vars::BoxType, u_vars::BoxTypes, sizeof(u_vars::BoxTypes) / sizeof(u_vars::BoxTypes[0]));
                        ImGui::Checkbox("Chams", &u_vars::Chams);
                        break;

                    case 0: // Aim
                        ImGui::TextColored(ImVec4(ImColor(255, 0, 0)), "Aim");
                        ImGui::Spacing();
                        ImGui::Checkbox("Silent Aim", &u_vars::SilentAim);
                        ImGui::Checkbox("Aim FOV", &u_vars::FovRadiusBool);
                        ImGui::Checkbox("Vis Check", &u_vars::VisCheck);
                        ImGui::Checkbox("Target Line", &u_vars::ShowTargetLine);
                        ImGui::DragFloat("Fov Radius", &u_vars::FovRadius);
                        ImGui::ListBox("AimBone", &u_vars::AimBone, u_vars::BoneList, sizeof(u_vars::BoneList) / sizeof(u_vars::BoneList[0]));
                        break;

                    case 2: // Exploits
                        ImGui::TextColored(ImVec4(ImColor(255, 0, 0)), "Exploits");
                        ImGui::Spacing();
                        ImGui::Checkbox("No Recoil", &u_vars::NoRecoil);
                        ImGui::Checkbox("Inf Stamina", &u_vars::InfStamina);
                        ImGui::Checkbox("Speed Hack", &u_vars::SpeedHack);
                        ImGui::SliderInt("Value", &u_vars::speed, 0, 25);
                        break;

                    case 3: // Misc
                        ImGui::TextColored(ImVec4(ImColor(255, 0, 0)), "Misc");
                        ImGui::Spacing();
                        ImGui::Checkbox("Show Ammo", &u_vars::ShowCurrAmmo);
                        ImGui::Checkbox("Show Grende Warning", &u_vars::GrenadeWarning);
                        ImGui::Checkbox("Show Crosshair", &u_vars::ShowNazi);
                        ImGui::SliderFloat("Size", &u_vars::cross1, 1, 50);
                        ImGui::SliderFloat("Width", &u_vars::cross2, 1, 5);
                        break;

                    default:
                        ImGui::TextColored(ImVec4(ImColor(255,0,0)), "Select a tab from the left.");
                        break;
                    }
                }
                ImGui::EndChild();
            }
            ImGui::End();


        }
	}
};