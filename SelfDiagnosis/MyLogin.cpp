int current_form = 1, current_index = 0;
#include "MyFunctions.h"
#include "MyLogin.h"
#include "MySignup.h"
#include "MySdoctor.h"
#include "MySpatient.h"
#include "displaydiseases.h";
#include "patientWithDisease.h"
#include "MySymptoms.h"
#include "MyMaindoctor.h"
#include "MyDiagnosis.h"
#include "MyAddRemoveDisease.h"
#include "MyPatiethistory.h"
#include "MyViewSymptoms.h"
#include "MyMainpatient.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array < String^>^ args) {
	retrieve_data();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	SelfDiagnosis::MyLogin fr1;
	Application::Run(% fr1);
	SelfDiagnosis::MySignup fr2;
	SelfDiagnosis::MyMaindoctor fr3;
	SelfDiagnosis::MyMainpatient fr4;
	SelfDiagnosis::MySpatient fr5;
	SelfDiagnosis::MySdoctor fr6;
	if (current_form == 2)
		Application::Run(% fr2);
	if (current_form == 3)
		Application::Run(% fr3);
	if (current_form == 4)
		Application::Run(% fr4);
	if (current_form == 5) {
		Application::Run(% fr5);
		Application::Run(% fr4);
	}
	if (current_form == 6) {
		Application::Run(% fr6);
		Application::Run(% fr3);
	}
	update_data();
}