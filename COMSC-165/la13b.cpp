//Objective:  la13b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class City
{
	private:
	string name;
	float lat, lon;
	
	public:                       // public interface
	City(string, float, float);   // constructor 
	void setName(string);         // mutators
	void setLat(float);
	void setLon(float);
	string getName() const;       // accessors
	float getLat() const;
	float getLon() const;
};

int main()
{
	const int SIZE = 3;
	City cities[SIZE] = { 
		City("San Francisco", 37.774, -122.419),
		City("Pleasant Hill", 37.948, -122.061),
		City("Paradise", 39.759, -121.622)
	};
	
	cout << left 
		<< setw(20) << "City"
		<< right
		<< setw(10) << "Latitude"
		<< setw(10) << "Longitude"
		<< endl;
	
	for(City c : cities)
		cout << left 
			<< setw(20) << c.getName() 
			<< right
			<< setw(10) << c.getLat() 
			<< setw(10) << c.getLon() 
			<< endl;
}

City::City(string _name, float _lat, float _lon)
{
	name = _name;
	lat = _lat;
	lon = _lon;
}

void City::setName(string _name)
{
	name = _name;
}

void City::setLat(float _lat)
{
	lat = _lat;
}

void City::setLon(float _lon)
{
	lon = _lon;
}

string City::getName() const
{
	return name;
}

float City::getLat() const
{
	return lat;
}

float City::getLon() const
{
	return lon;
}
