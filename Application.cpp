#include "Application.h"
using namespace std;

Application::Application() {
	vector<Worker> Company;
		
	cout << "Welcome to employee manager. Choose option to proceed." << endl;

		while (true) {
			cout << "1- show workers, 2- add workers, 3- remove worker, 4- sort workers, 5- filter workers\n";
			int userInput = 0;
			cin >> userInput;
			cout << "\n";
			switch (userInput)
			{
			case 1:
				showAllWorkers(Company);
				break;
			case 2:
				addWorker(Company);
				break;
			case 3:
				removeWorker(Company);
				break;
			case 4:
				int option;
				cout << "1- by name, 2- by surname, 3- by experience, 4- by salary" << endl;
				cin >> option;
				sortAllWorkers(Company, option);
				break;
			case 5:
				//TODO
				cout << "123" << endl;
			default:
				break;
			}
		}
}

void addWorker(vector<Worker>& tempCompany) {
	string name;
	string surname;
	int experience;
	int salary;
	int amountOfNewWorkers;
	cout << "How many new workers you want to add?" << endl;
	cin >> amountOfNewWorkers;
	cout << "\n";
	for (int i = 0; i < amountOfNewWorkers; i++) {
		cout << "Type in name of worker no. " << i + 1 << ":\n";
		cin >> name;
		cout << endl;
		cout << "Type in surname of worker no. " << i + 1 << ":\n";
		cin >> surname;
		cout << endl;
		cout << "Type in experience of worker no. " << i + 1 << ":\n";
		cin >> experience;
		cout << endl;
		cout << "Type in salary of worker no. " << i + 1 << ":\n";
		cin >> salary;
		cout << endl;
		Worker newWorker(name, surname, experience, salary);
		tempCompany.push_back(newWorker);
	}

}

void showAllWorkers(const vector<Worker>& tempCompany) {
	int size = tempCompany.size();

	for (int i = 0; i < size; i++) {
		cout << i + 1 << ". " << tempCompany[i].getName() << " " << tempCompany[i].getSurname() <<
			", experience: " << tempCompany[i].getExperience() << ", salary: " << tempCompany[i].getSalary() << endl;
	}
	cout << endl;
}

void removeWorker(vector<Worker>& tempCompany) {
	int workerIdx;
	cout << "Which one worker you want to remove?\n";
	cin >> workerIdx;
	tempCompany.erase(tempCompany.begin() + workerIdx - 1);
}

void sortAllWorkers(vector<Worker>& tempCompany, int option) {
	switch (option)
	{
	case 1:
		int subOption1;
		cout << "1- ascending, 2- descending" << endl;
		cin >> subOption1;
		if (subOption1 == 1) {
			sort(tempCompany.begin(), tempCompany.end(), fnNameAsc);
		}
		else
			sort(tempCompany.begin(), tempCompany.end(), fnNameDsc);
		break;
	case 2:
		int subOption2;
		cout << "1- ascending, 2- descending" << endl;
		cin >> subOption2;
		if (subOption2 == 1) {
			sort(tempCompany.begin(), tempCompany.end(), fnSurnameAsc);
		}
		else
			sort(tempCompany.begin(), tempCompany.end(), fnSurnameDsc);
		break;
	case 3:
		int subOption3;
		cout << "1- ascending, 2- descending" << endl;
		cin >> subOption3;
		if (subOption3 == 1) {
			sort(tempCompany.begin(), tempCompany.end(), fnIntAsc);
		}
		else
			sort(tempCompany.begin(), tempCompany.end(), fnIntDsc);
		break;
	case 4:
		int subOption4;
		cout << "1- ascending, 2- descending" << endl;
		cin >> subOption4;
		if (subOption4 == 1) {
			sort(tempCompany.begin(), tempCompany.end(), fnIntAsc);
		}
		else
			sort(tempCompany.begin(), tempCompany.end(), fnIntDsc);
		break;
	default:
		break;
	}

}

bool fnSurnameAsc(const Worker& a, const Worker& b) {return a.surname < b.surname;}

bool fnSurnameDsc(const Worker& a, const Worker& b) {return a.surname > b.surname;}

bool fnNameAsc(const Worker& a, const Worker& b) {return a.name < b.name;}

bool fnNameDsc(const Worker& a, const Worker& b) {return a.name > b.name;}

bool fnIntDsc(const Worker& a, const Worker& b) {return a.salary > b.salary;}

bool fnIntAsc(const Worker& a, const Worker& b) {return a.salary < b.salary;}

bool fnFloatAsc(const Worker& a, const Worker& b) {return a.experience < b.experience;}

bool fnFloatDsc(const Worker& a, const Worker& b) {return a.experience > b.experience;}



