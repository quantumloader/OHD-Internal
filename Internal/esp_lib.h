//auto DrawLine(const ImVec2& aPoint1, const ImVec2 aPoint2, ImU32 aColor, const FLOAT aLineWidth) -> VOID
//{
//	auto vList = ImGui::GetOverlayDrawList();
//	vList->AddLine(aPoint1, aPoint2, aColor, aLineWidth);
//}
//
//auto DrawBox(float x, float y, float w, float h, ImColor color) -> VOID
//{
//	DrawLine(ImVec2(x, y), ImVec2(x + w, y), color, 1.3f); // top 
//	DrawLine(ImVec2(x, y - 1.3f), ImVec2(x, y + h + 1.4f), color, 1.3f); // left
//	DrawLine(ImVec2(x + w, y - 1.3f), ImVec2(x + w, y + h + 1.4f), color, 1.3f);  // right
//	DrawLine(ImVec2(x, y + h), ImVec2(x + w, y + h), color, 1.3f);   // bottom 
//}
//auto RectFilled(float x0, float y0, float x1, float y1, ImColor color, float rounding, int rounding_corners_flags) -> VOID
//{
//	auto vList = ImGui::GetOverlayDrawList();
//	vList->AddRectFilled(ImVec2(x0, y0), ImVec2(x1, y1), color, rounding, rounding_corners_flags);
//}
//
//#define max(a,b)            (((a) > (b)) ? (a) : (b))
//#define min(a,b)            (((a) < (b)) ? (a) : (b))
//
//auto HealthBar(float x, float y, float w, float h, int phealth, bool Outlined) -> VOID
//{
//	auto vList = ImGui::GetOverlayDrawList();
//
//	int healthValue = max(0, min(phealth, 100));
//
//	ImColor barColor = ImColor
//	(
//		min(510 * (100 - healthValue) / 100, 255), min(510 * healthValue / 100, 255),
//		25,
//		255
//	);
//	if (Outlined)
//		vList->AddRect(ImVec2(x - 1, y - 1), ImVec2(x + w + 1, y + h + 1), ImColor(0.f, 0.f, 0.f), 0.0f, 0, 1.0f);
//
//	RectFilled(x, y, x + w, y + (int)(((float)h / 100.0f) * (float)phealth), barColor, 0.0f, 0);
//}
//
//auto DrawOutlinedText(ImFont* pFont, const std::string& text, const ImVec2& pos, float size, ImU32 color, bool center) -> VOID
//{
//	ImGui::PushFont(Verdana);
//	std::stringstream stream(text);
//	std::string line;
//
//	float y = 0.0f;
//	int index = 0;
//
//	while (std::getline(stream, line))
//	{
//		ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());
//
//		if (center)
//		{
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * index) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * index) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * index), ImGui::GetColorU32(color), line.c_str());
//		}
//		else
//		{//
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * index) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * index) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
//			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * index), ImGui::GetColorU32(color), line.c_str());
//		}
//
//		y = pos.y + textSize.y * (index + 1);
//		index++;
//	}
//	ImGui::PopFont();
//}
//
//auto DrawCorneredBox(float X, float Y, float W, float H, const ImU32& color, float thickness) -> VOID
//{
//	auto vList = ImGui::GetOverlayDrawList();
//
//	float lineW = (W / 3);
//	float lineH = (H / 3);
//	//black outlines
//	auto col = ImGui::GetColorU32(color);
//
//	//corners
//	vList->AddLine(ImVec2(X, Y - thickness / 2), ImVec2(X, Y + lineH), col, thickness);//top left
//	vList->AddLine(ImVec2(X - thickness / 2, Y), ImVec2(X + lineW, Y), col, thickness);
//
//	vList->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W + thickness / 2, Y), col, thickness);//top right horizontal
//	vList->AddLine(ImVec2(X + W, Y - thickness / 2), ImVec2(X + W, Y + lineH), col, thickness);
//
//	vList->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H + (thickness / 2)), col, thickness);//bot left
//	vList->AddLine(ImVec2(X - thickness / 2, Y + H), ImVec2(X + lineW, Y + H), col, thickness);
//
//	vList->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W + thickness / 2, Y + H), col, thickness);//bot right
//	vList->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H + (thickness / 2)), col, thickness);
//
//}