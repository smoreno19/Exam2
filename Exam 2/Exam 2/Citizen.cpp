#include <iostream>
#include <string>
#include "Citizen.h"
#include <vector>
using namespace std;
//constructor 
Citizen::Citizen(int id, string firstName, string lastName, string color) {
	//private varibles are equal to the parameter
	ID = id;
	Firstname = firstName;
	Lastname = lastName;
	FavoriteColor = color;
}
//adds a new citizen 
Citizen::Citizen(Citizen* citizen) {
	Citizen* newCitizen;
	
}
//return the firstname of the citizen
string Citizen::getFirstName() {
	return Firstname;
}
//returns the lastname of the citizen
string Citizen::getLastName() {
	return Lastname;
}
//returns the id of the citizen
int Citizen::getId() {
	return ID;
}
// returns the favorite color of the citizen
string Citizen::getFavoriteColor() {
	return FavoriteColor;
}
// sets a this pointer to the favorite color to return to color.
void Citizen::setFavoriteColor(string color) {
	this->FavoriteColor = color;
	
}