#include "Worker.h"

Worker::Worker(string newName, string newSurname, /*occupation,*/ int newExperience, int newSalary) {
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

int Worker::getExperience() const {
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

void Worker::setExperience(int newExperience) {
	experience = newExperience;
}

void Worker::setSalary(int newSalary) {
	salary = newSalary;
}



