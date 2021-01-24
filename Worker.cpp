#include "Worker.h"

Worker::Worker() {
	//occupation o = uncategorized;
	experience = 0.0f;
	salary = 0;
}

Worker::Worker(string newname, string newsurname) {
	name = newname;
	surname = newsurname;
	//occupation o1 = technician;
	experience = 0.0f;
	salary = 1000;
}

Worker::Worker(string newName, string newSurname, /*occupation,*/ float newExperience, int newSalary) {
	name = newName;
	surname = newSurname;
	//occupation o2;
	experience = newExperience;
	salary = newSalary;
}

Worker::~Worker() {

}

//getters
string Worker::getName() const{
	return name;
}

string Worker::getSurname() const {
	return surname;
}

float Worker::getExperience() const {
	return experience;
}

int Worker::getSalary() const {
	return salary;
}

//setters
void Worker::setName(string newName) {
	name = newName;
}

void Worker::setSurname(string newSurname) {
	surname = newSurname;
}

void Worker::setExperience(float newExperience) {
	experience = newExperience;
}

void Worker::setSalary(int newSalary) {
	salary = newSalary;
}



