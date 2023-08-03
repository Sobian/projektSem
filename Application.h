#ifndef APPLICATION_H
#define APPLICATION_H
#include "Worker.h"

void addWorker(vector<Worker>&);
void showAllWorkers(const vector<Worker>&);
void removeWorker(vector<Worker>&);
void sortAllWorkers(vector<Worker>&, int option);


//sortowanie Z-A
bool fnSurnameAsc(const Worker& a, const Worker& b);
bool fnNameDsc(const Worker& a, const Worker& b);
//sortowanie A-Z
bool fnSurnameDsc(const Worker& a, const Worker& b);
bool fnNameAsc(const Worker& a, const Worker& b);

//TODO: definicja metod dla kazdego typu
bool fnIntDsc(const Worker& a, const Worker& b);
bool fnIntAsc(const Worker& a, const Worker& b);
bool fnFloatAsc(const Worker& a, const Worker& b);
bool fnFloatDsc(const Worker& a, const Worker& b);

class Application
{
public:
	Application();
};

#endif

