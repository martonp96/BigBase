#include "MainScript.hpp"
#include "ScriptCallback.hpp"
#include "Natives.hpp"
#include "Timer.hpp"
#include "CustomText.hpp"

namespace Big
{
	enum Submenu : std::uint32_t
	{
		SubmenuHome,
		SubmenuSettings,
		SubmenuSettingsHeader,
		SubmenuSettingsHeaderStaticBackground,
		SubmenuSettingsHeaderGradientBackground,
		SubmenuSettingsHeaderText,
		SubmenuSettingsSubmenuBar,
		SubmenuSettingsOption,
		SubmenuSettingsFooter,
		SubmenuSettingsDescription,
		SubmenuSettingsInput,
		SubmenuSettingsLanguage,
		SubmenuSelectedPlayer,
		SubmenuPlayerList,
		SubmenuTest
	};

	bool MainScript::IsInitialized()
	{
		return m_Initialized;
	}

	ScriptType MainScript::GetType()
	{
		return ScriptType::Game;
	}

	void MainScript::Initialize()
	{
		m_Initialized = true;

		g_CustomText->AddText(CONSTEXPR_JOAAT("HUD_JOINING"), "Isn't " BIGBASE_NAME " the fucking best?");
		g_CustomText->AddText(CONSTEXPR_JOAAT("HUD_TRANSP"), "Isn't " BIGBASE_NAME " the fucking best?");
	}

	void MainScript::Destroy()
	{

	}

	void MainScript::Tick()
	{

	}
}
