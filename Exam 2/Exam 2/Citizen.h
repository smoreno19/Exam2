#pragma once
////if this is not defined then it will be defined, so it
// only happens once and not more than once
#ifndef CITIZEN_H
#define CITIZEN_H
#include <string>
#include <iostream>
#include <vector>//allows the vector to work
using namespace std;
class Citizen {
private:
	//private variables
	string Firstname;
	string Lastname;
	string FavoriteColor;
	int ID;
public:
	//public functions
	//constructor
	Citizen (int id, string firstName, string lastName, string color);
	Citizen(Citizen* citizen);
	string getFirstName();
	string getLastName();
	int getId();
	string getFavoriteColor();
	void setFavoriteColor(string color);
};

#endif // !CITIZEN_H