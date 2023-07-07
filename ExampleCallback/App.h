#pragma once

#include "KeyboardHDA.h"
#include "PressKeyboard.cpp"
using namespace App_Callbacks;

class App
{
public:
	int zahl{ 0 };

	App(void);
	void Update(int parZahl);
private:
	PressKeyboard* pressKey;
	KeyboardHDA* keyboard;
	
};

