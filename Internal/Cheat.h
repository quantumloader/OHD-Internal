SDK::UMaterial* TransparentMaterial{};
SDK::UMaterial* WireframeMaterial{};
SDK::UMaterial* FlameMaterial{};
SDK::UMaterialInstanceDynamic* ChamsMat{};
SDK::UMaterialInstanceDynamic* ChamsMatVisible{};
SDK::UMaterialInstanceDynamic* ChamsMatNotVisible{};
SDK::UMaterialInstanceDynamic* WeaponChamsMat{};
SDK::UMaterialInstanceDynamic* EnemieWEaponMat{};


class c_cheat {
	static SDK::FVector2D BoneToScreenLocation(SDK::APlayerController* Controller, SDK::AHDPlayerCharacter* Player, int BoneId)
	{
		if (!Controller || !Player || !Player->Mesh)
			return { 0, 0 };

		SDK::USkeletalMeshComponent* Mesh = Player->Mesh;

		SDK::FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
		SDK::FVector2D BoneScreenLocation;

		if (Controller->ProjectWorldLocationToScreen(BoneLocation, &BoneScreenLocation, false))
			return BoneScreenLocation;

		return { 0, 0 };
	}

	static float Distance2D(SDK::FVector2D main, SDK::FVector2D other)
	{
		float dx = main.X - other.X;
		float dy = main.Y - other.Y;
		return std::sqrt(dx * dx + dy * dy);
	}

	//pasted ???
	static auto DrawLine(const ImVec2& aPoint1, const ImVec2 aPoint2, ImU32 aColor, const FLOAT aLineWidth) -> VOID
	{
		auto vList = ImGui::GetForegroundDrawList();
		vList->AddLine(aPoint1, aPoint2, aColor, aLineWidth);
	}

	//pasted
	static auto DrawBox(float x0, float y0, float x1, float y1, float w, float h, ImColor color, float rounding, float thikness) -> VOID
	{
		auto vList = ImGui::GetForegroundDrawList();

		vList->AddRect(ImVec2((x0 - w), y0), ImVec2(x1 + w, y1), color, rounding, 0, thikness);
		vList->AddRect(ImVec2((x0 - w) - 1, y0 - 1), ImVec2(x1 + w + 1, y1 + 1), ImColor(0,0,0), rounding, 0, thikness);
		vList->AddRect(ImVec2((x0 - w) + 1, y0 + 1), ImVec2(x1 + w - 1, y1 - 1), ImColor(0, 0, 0), rounding, 0, thikness);
	}
	//pasted ???
	static auto RectFilled(float x0, float y0, float x1, float y1, ImColor color, float rounding, int rounding_corners_flags) -> VOID
	{
		auto vList = ImGui::GetForegroundDrawList();
		vList->AddRectFilled(ImVec2(x0, y0), ImVec2(x1, y1), color, rounding, rounding_corners_flags);
	}

	#define max(a,b)            (((a) > (b)) ? (a) : (b))
	#define min(a,b)            (((a) < (b)) ? (a) : (b))

	//pasted
	static auto HealthBar(float x, float y, float w, float h, int phealth, bool Outlined) -> VOID
	{
		auto vList = ImGui::GetForegroundDrawList();

		int healthValue = max(0, min(phealth, 100));

		ImColor barColor = ImColor
		(
			min(510 * (100 - healthValue) / 100, 255),
			min(510 * healthValue / 100, 255),
			25,
			255
		);

		if (Outlined)
			vList->AddRect(ImVec2(x - 1 - 6, y - 1), ImVec2(x + w + 1 - 6, y + h + 1), ImColor(0.f, 0.f, 0.f), 0.0f, 0, 1.0f);

		RectFilled(x - 6, y, x + w - 6, y + (int)(((float)h / 100.0f) * (float)phealth), barColor, 0.0f, 0);
	}

	//pasted
	static auto DrawOutlinedText(const std::string& text, const ImVec2& pos, float size, ImU32 color, bool center, float distance) -> void
	{
		ImFont* pFont = ImGui::GetIO().Fonts->Fonts[0];

		ImGui::PushFont(pFont);

		pFont->FontSize = size;

		std::stringstream stream(text);
		std::string line;

		int index = 0;

		const float outlineSize = 1.0f;
		ImVec2 offsets[] = {
			ImVec2(-outlineSize, -outlineSize),
			ImVec2(outlineSize, -outlineSize),
			ImVec2(-outlineSize, outlineSize),
			ImVec2(outlineSize, outlineSize),
			ImVec2(0.0f, -outlineSize),
			ImVec2(0.0f, outlineSize),
			ImVec2(-outlineSize, 0.0f),
			ImVec2(outlineSize, 0.0f)
		};

		while (std::getline(stream, line))
		{
			ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());

			if (center)
			{
				ImVec2 centeredPos = ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * index);

				for (auto& offset : offsets)
				{
					ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2(centeredPos.x + offset.x, centeredPos.y + offset.y), IM_COL32(0, 0, 0, 255), line.c_str());
				}

				ImGui::GetForegroundDrawList()->AddText(pFont, size, centeredPos, color, line.c_str());
			}
			else
			{
				ImVec2 leftPos = ImVec2(pos.x, pos.y + textSize.y * index);

				for (auto& offset : offsets)
				{
					ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2(leftPos.x + offset.x, leftPos.y + offset.y), IM_COL32(0, 0, 0, 255), line.c_str());
				}

				ImGui::GetForegroundDrawList()->AddText(pFont, size, leftPos, color, line.c_str());
			}

			index++;
		}

		ImGui::PopFont();
	}


	//pasted
	static auto DrawCorneredBox(float X, float Y, float W, float H, const ImU32& color, float thickness) -> VOID
	{
		auto vList = ImGui::GetForegroundDrawList();

		float lineW = (W / 3);
		float lineH = (H / 3);
		auto col = ImGui::GetColorU32(color);
		auto black = ImGui::GetColorU32(ImVec4(0, 0, 0, 1));

		float outlineThickness = thickness + 2.0f;

		// Top left
		vList->AddLine(ImVec2(X, Y - outlineThickness / 2), ImVec2(X, Y + lineH), black, outlineThickness);
		vList->AddLine(ImVec2(X - outlineThickness / 2, Y), ImVec2(X + lineW, Y), black, outlineThickness);

		// Top right
		vList->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W + outlineThickness / 2, Y), black, outlineThickness);
		vList->AddLine(ImVec2(X + W, Y - outlineThickness / 2), ImVec2(X + W, Y + lineH), black, outlineThickness);

		// Bottom left
		vList->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H + (outlineThickness / 2)), black, outlineThickness);
		vList->AddLine(ImVec2(X - outlineThickness / 2, Y + H), ImVec2(X + lineW, Y + H), black, outlineThickness);

		// Bottom right
		vList->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W + outlineThickness / 2, Y + H), black, outlineThickness);
		vList->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H + (outlineThickness / 2)), black, outlineThickness);

		// Top left
		vList->AddLine(ImVec2(X, Y - thickness / 2), ImVec2(X, Y + lineH), col, thickness);
		vList->AddLine(ImVec2(X - thickness / 2, Y), ImVec2(X + lineW, Y), col, thickness);

		// Top right
		vList->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W + thickness / 2, Y), col, thickness);
		vList->AddLine(ImVec2(X + W, Y - thickness / 2), ImVec2(X + W, Y + lineH), col, thickness);

		// Bottom left
		vList->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H + (thickness / 2)), col, thickness);
		vList->AddLine(ImVec2(X - thickness / 2, Y + H), ImVec2(X + lineW, Y + H), col, thickness);

		// Bottom right
		vList->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W + thickness / 2, Y + H), col, thickness);
		vList->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H + (thickness / 2)), col, thickness);
	}

	static inline void DrawCrosshair(const float aSize, ImColor colour, float w) 
	{
		auto vList = ImGui::GetForegroundDrawList();

		vList->AddLine({ Screen.X / 2, Screen.Y / 2 - (aSize + 1) }, { Screen.X / 2 ,Screen.Y / 2 + (aSize + 1) }, colour, w);
		vList->AddLine({ Screen.X / 2 - (aSize + 1),Screen.Y / 2 }, { Screen.X / 2 + (aSize + 1), Screen.Y / 2 }, colour, w);
	}


public:
	static inline SDK::FVector2D Screen = {
			static_cast<float>(GetSystemMetrics(SM_CXSCREEN)),
			static_cast<float>(GetSystemMetrics(SM_CYSCREEN))
	};

	static inline SDK::FVector2D ScreenCenter = {
		Screen.X / 2.f,
		Screen.Y / 2.f
	};

	static inline SDK::FName StrToName(const wchar_t* str)
	{
		return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(TEXT(str)));
	}
	static inline SDK::FLinearColor FloatToColor(float color[3])
	{
		return SDK::FLinearColor{ color[0], color[1], color[2] };
	}
	static inline SDK::FString NameToStr(SDK::FName str)
	{
		return SDK::UKismetStringLibrary::Conv_NameToString(str);
	}

	static void Tick()
	{
		
		SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
		if (!Gworld)
			return;

		SDK::UGameInstance* GameInstance = Gworld->OwningGameInstance;
		if (!GameInstance)
			return;

		SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
		if (!LocalPlayer)
			return;

		SDK::APlayerController* PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController)
			return;

		SDK::APlayerState* SelfPlayerState = PlayerController->PlayerState;
		if (!SelfPlayerState)
			return;

		SDK::APlayerController* SelfPlayerController = LocalPlayer->PlayerController;
		if (!SelfPlayerController)
			return;

		SDK::AHDPlayerCharacter* SelfPlayerCharacter = static_cast<SDK::AHDPlayerCharacter*>(PlayerController->AcknowledgedPawn);
		if (!SelfPlayerCharacter)
			return;

		auto Weapon = reinterpret_cast<SDK::AHDBaseWeapon*>(SelfPlayerCharacter->EquippedItem);
		if (!Weapon)
		{
			return;
		}

		SDK::AGameStateBase* GameState = Gworld->GameState;
		if (!GameState)
			return;

		SDK::ULevel* PersistentLevel = Gworld->PersistentLevel;
		if (!PersistentLevel)
			return;

		uintptr_t Actors = *(uintptr_t*)((uintptr_t)PersistentLevel + 0x98);
		if (!Actors)
			return;

		int32_t ActorCount = *(int32_t*)((uintptr_t)PersistentLevel + 0xa0);
		if (!ActorCount)
			return;


		// chams stuff
		static SDK::UMaterial* WireframeMaterial = SDK::UObject::FindObject<SDK::UMaterial>("Material WireframeMaterial.WireframeMaterial");

		if (WireframeMaterial)
		{
			WireframeMaterial->bDisableDepthTest = true;
			WireframeMaterial->Wireframe = true;
			WireframeMaterial->BlendMode = SDK::EBlendMode::BLEND_Translucent;
			WireframeMaterial->MaterialDomain = SDK::EMaterialDomain::MD_Surface;
			WireframeMaterial->AllowTranslucentCustomDepthWrites = true;
			WireframeMaterial->bIsBlendable = true;
			WireframeMaterial->LightmassSettings.EmissiveBoost = 2;
			WireframeMaterial->LightmassSettings.DiffuseBoost = 0;
		}

		static SDK::UMaterialInstanceDynamic* ChamsMat = SDK::UKismetMaterialLibrary::CreateDynamicMaterialInstance(Gworld, WireframeMaterial, StrToName(L"ChamsMaterial"));

		if (ChamsMat)
		{
			ChamsMat->SetVectorParameterValue(StrToName(L"Color"), FloatToColor(c_menu::u_vars::ChamsColor));
		}


		// code
		if (c_menu::u_vars::ShowCurrAmmo)
		{
			// mega shit
			auto AmmoCount = (std::to_string(Weapon->CurrentAmmoClip->GetCurrentClipAmmo()));

			auto TextToAmmo = "Ammo [ " + AmmoCount + " ]";
			DrawOutlinedText(TextToAmmo, ImVec2(ScreenCenter.X, ScreenCenter.Y + 20), 24.f, ImColor(255, 255, 255), true, 0);
		}

		if (c_menu::u_vars::SpeedHack)
		{
			// for testing (donot work on the servers)
			SelfPlayerCharacter->CustomTimeDilation = (float)c_menu::u_vars::speed;
		}

		if (c_menu::u_vars::ShowNazi)
		{
			// now its not nazi :):):)
			DrawCrosshair(c_menu::u_vars::cross1, ImColor(255, 255, 255), c_menu::u_vars::cross2);
		}

		if (c_menu::u_vars::SilentAim)
		{
			// i dont like it
			ImGui::GetForegroundDrawList()->AddCircle({ ScreenCenter.X, ScreenCenter.Y }, c_menu::u_vars::FovRadius, ImColor(255, 255, 255), 100, 1.1f);
		}

		for (std::int32_t i = 0; i < ActorCount; i++)
		{
			SDK::AActor* Actor = *(SDK::AActor**)(Actors + i * sizeof(uintptr_t));
			if (!Actor)
				continue;

			// funny stuff
			if (Actor->IsA(SDK::AHDProj_Grenade::StaticClass()))
			{
				SDK::AHDProj_Grenade* Grenade = (SDK::AHDProj_Grenade*)Actor;
				if (!Grenade)
					continue;

				SDK::FVector2D Grenade2D;

				auto Grenaade = SelfPlayerController->ProjectWorldLocationToScreen((Grenade->K2_GetActorLocation()), &Grenade2D, true);

				if (Grenaade)
				{
					if (c_menu::u_vars::GrenadeWarning)
					{
						DrawOutlinedText("!!! GRENADE !!!", { Grenade2D.X, Grenade2D.Y }, 24, ImColor(255, 0, 0), true, 0);
					}
				}
			}

			float ClosestDistance = FLT_MAX;
			SDK::AHDPlayerCharacter* Target = nullptr;
			SDK::FVector AimLocation;
			ImColor Color{};

			if (Actor->IsA(SDK::AHDPlayerCharacter::StaticClass()))
			{
				SDK::AHDPlayerCharacter* PlayerCharacter = (SDK::AHDPlayerCharacter*)Actor;
				if (!PlayerCharacter)
					continue;

				SDK::APlayerState* PlayerState = PlayerCharacter->PlayerState;
				if (!PlayerState || SelfPlayerState == PlayerState)
					continue;

				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D Feet = BoneToScreenLocation(PlayerController, PlayerCharacter, 61);
				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, 48);

				if (!Head.X || !Head.Y)
					continue;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);


				//////////////////////// IF IM STUPID SORRY ////////////////////////
																				////
				if (PlayerCharacter->TeamNum == SelfPlayerCharacter->TeamNum)   ////
					ImColor(0, 0, 0, 0);									    ////
																				////
				if (PlayerCharacter->TeamNum == SelfPlayerCharacter->TeamNum)   ////
					continue;													////
																				////
				//////////////////////// IF IM STUPID SORRY ////////////////////////

				if (c_menu::u_vars::Chams)
				{
					SDK::TArray<SDK::UMaterialInterface*> TargetMaterials = PlayerCharacter->Mesh->GetMaterials();

					for (int i = 0; i < TargetMaterials.Num(); i++)
					{
						if (!TargetMaterials.IsValidIndex(i))
							continue;

						if (ChamsMat && TargetMaterials[i] == ChamsMat)
							continue;

						PlayerCharacter->Mesh->SetMaterial(i, ChamsMat);
					}
				}


				if (c_menu::u_vars::EspSkeleton)
				{
					std::vector<int> LeftArmtoRightArm = { 24, 6, 5, 27, 45 };
					std::vector<int> HeadtoLeftFoot = { 5, 5, 1, 49, 50, 52 };
					std::vector<int> PelvistoRightFoot = { 1, 55, 56, 58 };
					std::vector<std::vector<int>> SkeletonVec{ LeftArmtoRightArm, HeadtoLeftFoot, PelvistoRightFoot };

					for (std::vector<int>& BodyPart : SkeletonVec)
					{
						SDK::FVector2D PrevScreenPosition;

						for (size_t i = 0; i < BodyPart.size(); i++)
						{
							int BoneId = BodyPart.at(i);

							SDK::FVector2D BoneScreenPosition = BoneToScreenLocation(PlayerController, PlayerCharacter, BoneId);

							if (i != 0)
								ImGui::GetForegroundDrawList()->AddLine({ PrevScreenPosition.X, PrevScreenPosition.Y }, { BoneScreenPosition.X, BoneScreenPosition.Y }, Color);

							PrevScreenPosition = BoneScreenPosition;
						}
					}
					ImGui::GetForegroundDrawList()->AddCircle({ Head.X, Head.Y }, 2.f, Color);
				}

				std::string Name = PlayerState->GetPlayerName().ToString();
				float Health = PlayerCharacter->Health;
				float MaxHealth = PlayerCharacter->MaxHealth;
				float Distance = (SelfPlayerCharacter->GetDistanceTo(PlayerCharacter) / 100);

				auto CornerHeight = abs(Head.Y - Feet.Y);
				auto CornerWidth = CornerHeight / 3.f;

				if (c_menu::u_vars::ShowName)
				{
					DrawOutlinedText(Name, ImVec2(Head.X, Head.Y - 10), 6.0f, ImColor(255, 255, 255), true, Distance);
				}

				if (c_menu::u_vars::ShowDistance)
				{
					std::string TextRelease = std::to_string((int)Distance) + "m.";
					DrawOutlinedText(TextRelease, ImVec2(Feet.X, Feet.Y), 14.0f, ImColor(255, 255, 255), true, Distance);
				}

				if (c_menu::u_vars::ShowHealth)
				{
					auto procentage = Health * 100 / MaxHealth;

					float width = CornerWidth / 10;
					if (width < 2.f) width = 2.;
					if (width > 3) width = 3.;

					HealthBar(Head.X - (CornerWidth / 2), Head.Y, width, Feet.Y - Head.Y, procentage, true);
				}


				if (c_menu::u_vars::ShowBox)
				{
					if (c_menu::u_vars::BoxType == 1)
					{
						DrawCorneredBox(Head.X - (CornerWidth / 2), Head.Y, CornerWidth, CornerHeight, Color, 1.5);
					}
					if (c_menu::u_vars::BoxType == 0)
					{
						DrawBox(Head.X, Head.Y, Feet.X, Feet.Y, CornerWidth, CornerHeight, Color, 0.f, 1.f);
					}
				}

				if (c_menu::u_vars::InfStamina)
				{
					// work on serverside
					SelfPlayerCharacter->DFCharacterMovement->JumpStamina = 9999.f;
					SelfPlayerCharacter->DFCharacterMovement->SprintStamina = 9999.f;
				}

				if (c_menu::u_vars::NoRecoil)
				{
					// work on serverside
					Weapon->bNoRecoil = true;
				}

				if (c_menu::u_vars::SilentAim)
				{
					// need recode
					//if (Target == nullptr)
					//{
						if (!c_menu::u_vars::VisCheck || (c_menu::u_vars::VisCheck && EntityVisible))
						{
							float Distance = Distance2D(ScreenCenter, Head);
							if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius)
							{
								static int boneId = 48;

								switch (c_menu::u_vars::AimBone)
								{
								case 0:
									boneId = 48;
									break;
								case 1:
									boneId = 5;
									break;
								case 2:
									boneId = 58;
									break;
								default:
									break;
								}

								ClosestDistance = Distance;
								Target = PlayerCharacter;
								AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));


								// other shit
								SDK::FVector2D TargLoc2D;
								SDK::FVector2D MuzLoc2D;
								auto MuzLoc = Weapon->GetMuzzleLocation(false);
								auto TargLoc = Target->K2_GetActorLocation();
								auto MuzDir = Weapon->GetMuzzleDirection(false);

								auto www = SelfPlayerController->ProjectWorldLocationToScreen(AimLocation, &TargLoc2D, true);
								auto wwww = SelfPlayerController->ProjectWorldLocationToScreen(MuzLoc, &MuzLoc2D, true);

								if (www && wwww)
								{
									if (c_menu::u_vars::ShowTargetLine)
									{
										ImGui::GetForegroundDrawList()->AddLine({ MuzLoc2D.X, MuzLoc2D.Y }, { TargLoc2D.X, TargLoc2D.Y }, ImColor(255, 255, 255), 1.f);
									}
								}
							}
						}
					//}
				}
			}
			else if (c_menu::u_vars::SilentAim && Actor->IsA(SDK::AHDProj_Bullet::StaticClass()))
			{
				SDK::AHDProj_Bullet* Bullet = (SDK::AHDProj_Bullet*)Actor;
				if (!Bullet)
					continue;

				if (Bullet->InstigatingController == PlayerController)
				{
					if (AimLocation.X && AimLocation.Y && AimLocation.Z)
					{
						Bullet->K2_SetActorLocation(AimLocation, false, nullptr, true);
					}
				}
			}
		}
	}
};