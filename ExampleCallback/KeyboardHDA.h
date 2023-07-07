#pragma once

#include "iCallBackKey.h"

class KeyboardHDA
{
public:
	KeyboardHDA(iCallBackKey &par_cbKey);
	void KeyPress();
private:
	iCallBackKey* cbKey;
};

