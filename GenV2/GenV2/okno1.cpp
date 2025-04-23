#include "okno1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	srand(static_cast<unsigned int>(time(0)));
	setlocale(LC_ALL, "Russian");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	generator::okno1 form;
	Application::Run(% form);
}


