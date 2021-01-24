#pragma once
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
	float experience;
	int salary;
	
	//constructors
	Worker();
	Worker(string name, string surname);
	Worker(string name, string surname, /*occupation,*/ float experience, int salary);
	~Worker();

	//access methods

	//getters
	string getName() const;
	string getSurname() const;
	float getExperience() const;
	int getSalary() const;

	//setters
	void setName(string newName);
	void setSurname(string newSurname);
	void setExperience(float newEperience);
	void setSalary(int newSalary);

	
};

#endif



