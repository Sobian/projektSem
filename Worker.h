#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Worker
{
public:
	string name;
	string surname;
	/*enum occupation
	{
		uncategorized,
		technician,
		engineer,
		architect,
		designer,
		manager,
		president
	};*/
	int experience;
	int salary;
	
	//constructors
	Worker(string name, string surname, /*occupation,*/ int experience, int salary);
	~Worker();

	//access methods

	//getters
	string getName() const;
	string getSurname() const;
	int getExperience() const;
	int getSalary() const;

	//setters
	void setName(string newName);
	void setSurname(string newSurname);
	void setExperience(int newEperience);
	void setSalary(int newSalary);

	
};

#endif



