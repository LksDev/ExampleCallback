
#include "iCallBackKey.h"
#include "App.h"
#include <iostream>

namespace App_Callbacks {

	class PressKeyboard : iCallBackKey
	{
	public:
		PressKeyboard(App& par_App);
		~PressKeyboard();
		void PressKey(int code) override;

	private:
		App* app;
	};

	PressKeyboard::PressKeyboard(App& par_App)
	{
		*app = par_App;
	}

	PressKeyboard::~PressKeyboard()
	{
	}

	void PressKeyboard::PressKey(int code) {
		std::cout << "Die Taste: " << code << "wurde gedrückt\n";
		app->Update(code);
	}
}

