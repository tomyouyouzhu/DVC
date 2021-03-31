#ifndef SHIP_H
#define SHIP_H
#include <string>

class Ship {
	private:
		std::string name;
		std::string year;
	public:
		Ship();
		Ship(std::string a, std::string b);
		std::string getName() const;
		std::string getYear() const;
		void setName(std::string a);
		void setYear(std::string a);
		virtual void print() const; 
};

#endif