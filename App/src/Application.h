#pragma once

enum class UIStyle { Dark, Light, Custom};

class Application
{
public:
	const wchar_t* name = L"aphorist multi-instance";
	int windowWidth = 400;
	int windowHight = 200;
	UIStyle style = UIStyle::Dark;
	bool useFloatingWindows = true;

	void Start();
	void PreUpdate();
	void OnGUI();
	void PostUpdate();
	void Destroy();
};

