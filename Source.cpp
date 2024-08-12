#include <iostream>
#include "MyForm.h"
#include "includings.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace testGUI;

int main(){

	testGUI::MyForm form;
	form.ShowDialog();


	return 0;
}