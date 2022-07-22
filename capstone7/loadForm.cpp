/*
Andrew Crandall
7/22/2022
Title: loadForm
Summary: Functions for main.cpp used within loadForm.h
*/



#include "loadForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO; //File input and output


//getData Function used in constructor for textBox's
String^ capstone7::loadForm::getData()
{
	//Reads the data from data.txt used in onePlayer Form
	//opens the file stream using 'rf'
	//reads each line, and returns the data

	String^ filename = "data.txt";
	try {
		StreamReader^ rf = File::OpenText(filename);
		String^ tmp;
		String^ newData;

		while ((tmp = rf->ReadLine()) != nullptr) {
			newData = newData +  tmp + "\r\n";
		}

		return newData;

	}
	//Any error in this stage will completley close the applicaiton
	catch (Exception^ e)
	{
		Application::Exit();
	}


}
