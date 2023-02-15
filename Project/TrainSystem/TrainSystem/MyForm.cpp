#include "MyForm.h"

using namespace::System;
using namespace::System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TrainSystem::MyForm form; //Replace your project name as video
	Application::Run(% form);
}
