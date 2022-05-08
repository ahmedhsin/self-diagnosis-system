#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
typedef std::string string;
typedef std::fstream fstream;
//////////
static std::string toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}
///////////////
// string to system gcnew String(str.c_str());
System::String^ toSystemString(string str) {
	return gcnew System::String(str.c_str());
}
int numofdoctors = 0;
int numofpatients = 0;
int numofdiseases = 0;
int numofaccounts = 0;
struct accounts {
	string username;
	string password;
	bool isdoctor;
};
struct doctors {
	string name;
	accounts account;
	//account.isdoctor = 1;
	int numofdiseases;
	string diseases_added[100];
};
struct patients {
	string name;
	accounts account;
	int age;
	string gender;
	//account.isdoctor = 0;
	int numofdiseases;
	string diseases_history[100];
};
struct diseases {
	string title;
	string id;
	string general_info;
	int numofsymp;
	string symp[100];
};
struct multireturn {
	double percent;
	int ans;

};
accounts account[1000];
doctors doctor[500];
patients patient[500];
diseases disease[1000];
void retrieve_data() {
	fstream f1, f2, f3, f4;
	f1.open("database/doctors.txt", std::ios::in);
	f2.open("database/patients.txt", std::ios::in);
	f4.open("database/accounts.txt", std::ios::in);
	f3.open("database/diseases.txt", std::ios::in);
	for (int i = 0; true; i++) {
		string temp;
		getline(f1, temp, '$');
		if (temp == "\nendfile") break;
		if (temp[0] == '\n') temp.erase(0, 1);
		doctor[i].name = temp;
		f1 >> doctor[i].account.username >> doctor[i].account.password >> doctor[i].numofdiseases;
		for (int j = 0; j < doctor[i].numofdiseases; j++) f1 >> doctor[i].diseases_added[j];
		numofdoctors++;
	}
	for (int i = 0; true; i++) {
		string temp;
		getline(f2, temp, '$');
		if (temp == "\nendfile") break;
		if (temp[0] == '\n') temp.erase(0, 1);
		patient[i].name = temp;
		f2 >> patient[i].account.username >> patient[i].account.password >> patient[i].age >> patient[i].gender >> patient[i].numofdiseases;
		for (int j = 0; j < patient[i].numofdiseases; j++) f2 >> patient[i].diseases_history[j];
		numofpatients++;
	}
	for (int i = 0; true; i++) {
		string temp;
		getline(f3, temp, '$');
		if (temp == "\nendfile") break;
		if (temp[0] == '\n') temp.erase(0, 1);
		disease[i].title = temp;
		getline(f3, disease[i].id, '$');
		getline(f3, disease[i].general_info, '$');
		f3 >> disease[i].numofsymp;
		for (int j = 0; j < disease[i].numofsymp; j++) getline(f3, disease[i].symp[j], '$');
		numofdiseases++;
	}
	for (int i = 0; !f4.eof(); i++) {
		string temp;
		getline(f4, temp, '$');
		if (temp == "\nendfile") break;
		if (temp[0] == '\n') temp.erase(0, 1);
		account[i].username = temp;
		getline(f4, account[i].password, '$');
		f4 >> account[i].isdoctor;
		numofaccounts++;
	}
}
void update_data() {
	fstream f1, f2, f3, f4;
	////////////////doctors
	f1.open("database/doctors.txt", std::ios::out);
	for (int i = 0;i < numofdoctors;i++) {
		f1 << doctor[i].name + '$' << doctor[i].account.username << " " << doctor[i].account.password << " " << doctor[i].numofdiseases;
		if (doctor[i].numofdiseases) f1 << " ";
		for (int j = 0;j < doctor[i].numofdiseases;j++) {
			f1 << doctor[i].diseases_added[j];
			if (j != doctor[i].numofdiseases - 1) f1 << " ";
		}
		f1 << std::endl;
	}
	f1 << "endfile$";
	/////////////////patients
	f2.open("database/patients.txt", std::ios::out);
	for (int i = 0;i < numofpatients;i++) {
		f2 << patient[i].name + '$' << patient[i].account.username << " " << patient[i].account.password << " " << patient[i].age << " " << patient[i].gender << " " << patient[i].numofdiseases;
		if (patient[i].numofdiseases) f2 << " ";
		for (int j = 0;j < patient[i].numofdiseases;j++) {
			f2 << patient[i].diseases_history[j];
			if (j != patient[i].numofdiseases - 1) f2 << " ";
		}
		f2 << std::endl;
	}
	f2 << "endfile$";
	//////////////////////diseases
	f3.open("database/diseases.txt", std::ios::out);
	for (int i = 0;i < numofdiseases;i++) {
		f3 << disease[i].title + '$' << disease[i].id + '$' << disease[i].general_info + '$' << disease[i].numofsymp;
		for (int j = 0;j < disease[i].numofsymp;j++) f3 << disease[i].symp[j] + '$';
		f3 << std::endl;
	}
	f3 << "endfile$";
	/////////////////////////////
	f4.open("database/accounts.txt", std::ios::out);
	for (int i = 0;i < numofaccounts;i++) {
		f4 << account[i].username + '$' << account[i].password + '$' << account[i].isdoctor;
		f4 << std::endl;
	}
	f4 << "endfile$";
}
int login(string user, string pass) {

	if (user.empty() || pass.empty()) {
		return 800; //"enter username or password please !"
	}
	else if (user.size() > 8 || pass.size() > 8) {
		return 801; //" the inputs max than required , the size must not be more than 8 characters "
	}
	for (int i = 0; i < numofaccounts; i++) {

		if (user == account[i].username && pass == account[i].password) {
			if (account[i].isdoctor)
				return 1; // found and is a doctor
			else
				return 2; // found and is a patient
		}

	}
	return 0; // not found

}
int signup(string name, string user, string pass, string repass, bool isdoctor, int age = 16, string gender = "male") {
	if (isdoctor) {
		if (name.size() < 10 || name.size() > 25)
			return 800; // " the name must not be less than 15 or more than 35 "
		if ((user.size() < 6 || pass.size() < 6) || (user.size() > 15 || pass.size() > 15))
			return 802; //" the entered characters must not be less than 8 or more than 30 "
		for (int i = 0; i < numofaccounts;i++) {
			if (account[i].username == user)
				return 801;//" the entered username is not available "
		}
		if (pass != repass)
			return 803;

		doctor[numofdoctors++] = { name,{user,pass,1},0 };
		account[numofaccounts++] = { user,pass,1 };
		return 1;
	}
	else {
		if (name.size() < 15 || name.size() > 35)
			return 800; //" the name must not be less than 15 or more than 35 "
		if ((user.size() < 8 || pass.size() < 8) || (user.size() > 30 || pass.size() > 30))
			return 801; //" the entered characters must not be less than 8 or more than 30 "
		for (int i = 0; i < numofaccounts;i++) {
			if (account[i].username == user)
				return 802;// "the entered username is not available "
		}
		if (pass != repass)
			return 803;
		patient[numofpatients++] = { name,{user,pass,0},age,gender,0 };
		account[numofaccounts++] = { user,pass,0 };
		return 1;
	}
}
int add_diseases(int idx, string title, string id,string general_info) {
	disease[numofdiseases].title = title;
	// Getting the id of the disease
	//if return = 2 : there is a char in the id
	// if return = 3 : id is already found
	for (int i = 0; i < id.size(); ++i)
	{
		if (id[i] < '0' || id[i]>'9')return 2;
	}
	for (int i = 0; i < numofdiseases; ++i) {
		if (disease[i].id == id)return 3;
	}
	disease[numofdiseases].id = id;
	disease[numofdiseases].general_info = general_info;
	return 1;
}

int is_exist(string up_id,int idx) {
	for (int i = 0; i < numofdiseases; i++) {
		if (up_id == disease[i].id) {
			for (int j = 0; j < doctor[idx].numofdiseases; j++)
				if (up_id == doctor[idx].diseases_added[j]) 
					return i;
		}
	}
		return -1;
}

int get_idx(string user,bool isdoctor) {
	if (isdoctor) {
		for (int i = 0; i < numofdoctors; i++)
			if (user == doctor[i].account.username)
				return i;
	}
	else {
		for (int i = 0; i < numofpatients; i++)
			if (user == patient[i].account.username)
				return i;
	}
}
int get_disease_idx(string id) {
	for (int i = 0; i < numofdiseases; i++) {
		if (id == disease[i].id)
			return i;
	}
	return -1;
}

multireturn diagnose(int idx, int n, string arr[]) {
	multireturn x;
	double percent = 0;
	int ans;
	for (int i = 0; i < numofdiseases; i++) {
		double cnt = 0;
		for (int j = 0; j < disease[i].numofsymp; j++) {
			for (int k = 0; k < n; k++) {
				if (arr[k] == disease[i].symp[j]) {
					cnt++;
					break;
				}
			}

		}
		double temp = ((double)cnt / disease[i].numofsymp) * 100;
		if (temp > percent)
			ans = i;
		percent = max(temp, percent);
	}
	if (percent >= 60) {
		bool isfound = true;
		for (int i = 0; i < patient[idx].numofdiseases; i++) {
			if (patient[idx].diseases_history[i] == disease[ans].id)
				isfound = false;
		}
		if (isfound) {
			patient[idx].diseases_history[patient[idx].numofdiseases] = disease[ans].id;
			patient[idx].numofdiseases++;
		}
	}
	x.percent = percent;
	x.ans = ans;
	return x;
}
int add_diseases(int idx, string title, string id, string general_info, int n, string symptoms[]) {
	disease[numofdiseases].title = title;
	// Getting the id of the disease
	//if return = 2 : there is a char in the id
	// if return = 3 : id is already found
	for (int i = 0; i < id.size(); ++i)
	{
		if (id[i] < '0' || id[i]>'9')return 2;
	}
	for (int i = 0; i < numofdiseases; ++i) {
		if (disease[i].id == id)return 3;
	}
	disease[numofdiseases].id = id;
	disease[numofdiseases].general_info = general_info;
	disease[numofdiseases].numofsymp = n;
	for (int i = 0; i < n; i++) {
		disease[numofdiseases].symp[i] = symptoms[i];
	}
	numofdiseases++;
	doctor[idx].diseases_added[doctor[idx].numofdiseases++] = id;
	return 1;
}
void remove_disease(int idx, string id) {
	for (int i = 0, j = 0; i < numofdiseases; i++) {
		if (i != idx) {
			disease[j] = disease[i];
			j++;
		}
	}
	for (int i = 0, j = 0; i < doctor[current_index].numofdiseases; i++) {
		if (doctor[current_index].diseases_added[i] != id) {
			doctor[current_index].diseases_added[j] = doctor[current_index].diseases_added[i];
			j++;
		}
	}
	doctor[current_index].numofdiseases--;
	numofdiseases--;
}