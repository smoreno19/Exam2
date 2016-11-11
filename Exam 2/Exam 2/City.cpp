#include <iostream>
#include <string>
#include <vector> //allows the vector to work
#include <fstream>//allows the file to work
#include "City.h" //calls both the city and citizen header 
#include "Citizen.h"
using namespace std;

City::City(string cityName) {
	//shows the filename as what the cityname will be inputed
	// like "Spokane.txt"
	string Filename = cityName + ".txt";
	//call filename in the ifstream to open it and work with it 
	ifstream fin(Filename);
	//if the file does not open, then it outputs this
	if (fin.fail() ) {
		cout << "The file does not exist. " << endl;
		cout << "Exit Program." << endl;
	}
	else {
		//this will be done while the file does not reach to the end
		while (!fin.eof()) {	
		string Firstname;
		string Lastname;
		string color;
		int ID;
		//sets the order of the filename with id first, then name, lastname and favorite color
			fin >> ID >> Firstname >> Lastname >> color;

			if (Firstname.length()>0) {
				Citizen c(ID, Firstname, Lastname, color);
				//adds a new element
				this->citizens.push_back(c);
			}
		}
	}
}
//destructor function
City::~City() {
	string cityName;
	//function so the file can be ouptued correctly
	string Filename = cityName + ".txt";
	// gets the file named filename 
	ofstream Fout(Filename);
	//if it failes to open then this will be outputed
	if (Fout.fail()) {
		cout << "The file does not exist. " << endl;
		cout << "Exit Program." << endl;
	}
	else {
		//this gives the order of the names in the file
		string Firstname;
		string Lastname;
		//i is less than the size of the citizens
		for (int i = 0; i < citizens.size(); i++) {
			//gets citizens at the index
			Citizen* c = citizens.at(i);
			//order it goes in on the file 
			Fout << ID << " " << Firstname << " " << Lastname << " " << FavoriteColor << endl;

		}
	}
	//closes the file
	Fout.close();

}
string City::getCityName() {
	//returns the cityname 
	return CityName;
}
int City::populationSize() {
	//returns the population size
	return Size;
}
Citizen* City::getCitizenAtIndex(int index) {
	//returns the citizen at an index
	return citizens[index];
	
}
void City::addCitizen(Citizen* citizen) {
	//initial point, it is set to false. 
	bool alreadyACitizen = false;

	for (int i = 0; i < citizens.size(); i++) {
		//gets the citizen at an index
		Citizen c = citizens.at(i);
		//making the pointer into a member variable
		if (c.getFirstName = &citizen) {
			//if they are a citize already, it becomes true
			alreadyACitizen = true;
		}

	}
}
Citizen* City::getCitizenWithId(int id) {
	Citizen* newID;
	//allocates the pointer to a new id 
	int*newID = new int[id];
	////returns that newid
	return newID;
	//deletes the new
	delete newID;
	
}
//vector of the pointer class Citizen
vector<Citizen*> City::getCitizensForFavoriteColor(string color) {
	Citizen* newColor ;
	//the new color is set to the function to get the color, equaled to color
	newColor->getFavoriteColor = color;	
	// adds a new element with the new colorete
	this->citizens.push_back(newColor);

	
}