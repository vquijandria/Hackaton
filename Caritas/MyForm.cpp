#include "MyForm.h"

using namespace Caritas;
void main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew Caritas::MyForm());
	Application::SetCompatibleTextRenderingDefault(false);
}

