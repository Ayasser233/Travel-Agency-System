#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FirstTrial::MyForm form;
	Application::Run(% form);
}
 struct userInfo
{
	string USER_NAME;
	string PASSWORD;
	string FIRST_NAME;
	string LAST_NAME;
	string EMAIL;
	string ADDRESS;
	string PHONE_NUMBER;
} obj ;
