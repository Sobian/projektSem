#include "IO.h"
#include "Worker.h"

void ReadFile() {
	ifstream indata;

}

/*void WriteFile(const vector<Worker>& tempCompany, string FileName) {
	string f = FileName;
	int size = tempCompany.size();
	ofstream outfile(f + ".txt");
	for (int i = 0; i < size; i++) {
		outfile << i + 1 << " " << tempCompany[i].getName() << " " << tempCompany[i].getSurname() <<
			" " << tempCompany[i].getExperience() << " " << tempCompany[i].getSalary() << endl;
	}
	outfile.close();}*/