#include "KeyboardHDA.h"

KeyboardHDA::KeyboardHDA(iCallBackKey &par_cbKey){
	cbKey = &par_cbKey;
}

void KeyboardHDA::KeyPress() {
	cbKey->PressKey(2);
}
