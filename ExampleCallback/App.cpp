#include "App.h"

App::App() {
	pressKey = new PressKeyboard(this);
	keyboard = new KeyboardHDA(*pressKey);
}

void App::Update(int parZahl) {
	this->zahl = parZahl;
}