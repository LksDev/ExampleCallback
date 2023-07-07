// ExampleCallback.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "App.h"
#include "KeyboardHDA.h"

void A(int par) {
    std::cout << "I have a parameter '" << par <<"' \n";
}

// callback function
void B(void (App::*ptr)(int))
{   
    int par = 2;
    ; // callback to A
}

int main()
{
    std::cout << "Hello World!\n";
    
    App *app = new App();
    app->Update(4);
    std::cout << std::to_string(app->zahl) << "\n";

    App app2;

    KeyboardHDA keyboard;
    //keyboard.callbackKeyPress(&app2.Update(2));

    App *app3 = &app2;

    //void (App:: *ptr)(int);

    auto ptr = &App::Update;

    (app2.*ptr)(2);

    // calling function B and passing
    // address of the function A as argument
    B(ptr);
}

