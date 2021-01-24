#include "Worker.h"
#include <fstream>
using std::ofstream;



void addWorker(vector<Worker>&);
void showAllWorkers(const vector<Worker>&);
void removeWorker(vector<Worker>&);
void sortAllWorkers(vector<Worker>&);


//sortowanie Z-A
bool fnSurnameAsc(const Worker& a, const Worker& b);
bool fnNameDsc(const Worker& a, const Worker& b);
//sortowanie A-Z
bool fnSurnameDsc(const Worker& a, const Worker& b);
bool fnNameAsc(const Worker& a, const Worker& b);

//TODO: definicja metod dla kazdego typu
bool fnIntDsc(const Worker& a, const Worker& b);
bool fnIntAsc(const Worker& a, const Worker& b);
bool fnFloDsc(const Worker& a, const Worker& b);
bool fnFloAsc(const Worker& a, const Worker& b);


int main()
{

	ofstream outdata;
	int i;
	int num[5] = { 1,2,3,6,7 };

	outdata.open("plikT.txt"); // opens the file
	if (!outdata) { // file couldn't be opened
		cerr << "Error: file could not be opened" << endl;
		exit(1);
	}

	for (i = 0; i < 5; ++i)
		outdata << num[i] << endl;
	outdata.close();

	return 0;

	vector<Worker> Company;

	addWorker(Company);
	showAllWorkers(Company);
	removeWorker(Company);
	showAllWorkers(Company);
	sortAllWorkers(Company);

	


}

void addWorker(vector<Worker>& tempCompany) {

	string name;
	string surname;
	int amountOfNewWorker;
	cout << "How many new workers you want to add?" << endl;
	cin >> amountOfNewWorker;
	for (int i = 0; i<amountOfNewWorker; i++) {
		cout << "Type in name of worker no. "<< i+1 << ":\n";
		cin >> name;
		cout << endl;
		cout << "Type in surname of worker no. " << i+1 << ":\n";
		cin >> surname;
		cout << endl;
		Worker newWorker(name, surname);
		tempCompany.push_back(newWorker);
	}
	
}

void showAllWorkers(const vector<Worker>& tempCompany) {
	unsigned int size = tempCompany.size();

	for (unsigned int i = 0; i < size; i++) {
		cout << i+1 << ". " << tempCompany[i].getName() << " " << tempCompany[i].getSurname() <<
			", experience: " << tempCompany[i].getExperience() << ", salary: " << tempCompany[i].getSalary()<<endl;
	}
	cout << endl;

}


void removeWorker(vector<Worker>& tempCompany) {
	int workerIdx;
	cout << "Which one worker you want to remove?\n";
	cin >> workerIdx;
	tempCompany.erase(tempCompany.begin() + workerIdx - 1);
}

void sortAllWorkers(vector<Worker>& tempCompany) {
	sort(tempCompany.begin(), tempCompany.end(), fnSurnameAsc);
}

bool fnSurnameAsc(const Worker& a, const Worker& b) {
	if (a.surname != b.surname)
		return a.surname < b.surname;
}

bool fnSurnameDsc(const Worker& a, const Worker& b) {
	if (a.surname != b.surname)
		return a.surname > b.surname;
}

bool fnNameAsc(const Worker& a, const Worker& b) {
	if (a.name != b.name)
		return a.name < b.name;
}

bool fnNameDsc(const Worker& a, const Worker& b) {
	if (a.name != b.name)
		return a.name > b.name;
}



