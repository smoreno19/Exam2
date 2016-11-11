#pragma once
// if it is not defined then define it, it will only allow it 
// to be defined by once. 
#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <string>
#include <vector>
#include "Citizen.h"
using namespace std;
class City {
private:
	//private variables and vector of the citizen class 
	vector<Citizen*> citizens;
	string CityName;
	int CitizenAtIndex;
	int ID;
	int FavoriteColor;
	int Size;
public:
	//public functions
	//constructor
	City(string cityName);
	//destructor
	~City();
	string getCityName();
	int populationSize();
	Citizen* getCitizenAtIndex(int index);
	void addCitizen(Citizen* citizen);
	Citizen* getCitizenWithId(int id);
	//vector function
	vector<Citizen*> getCitizensForFavoriteColor(string color);
};
#endif // !CITY_H