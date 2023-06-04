#include "MyForm.h"

using namespace Hackaton;

void main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Hackaton::MyForm);
};