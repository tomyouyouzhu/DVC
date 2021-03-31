#ifndef COORD_H
#define COORD_H
#include <iostream>

class Coord
{

	//friend functions

	friend int main();

	//friend Coord& operator+=(Coord &c1, const Coord &c2);
	//friend Coord& operator+=(Coord &c, int value);
/*
	friend bool operator==(const Coord &c1, const Coord &c2);
	friend bool operator!=(const Coord &c1, const Coord &c2);


	friend Coord operator-(const Coord &c);

	friend Coord& operator++(Coord &c);
	friend Coord operator++(Coord &c, int);

	friend Coord& operator--(Coord &c);
	friend Coord operator--(Coord &c, int); */


	friend std::ostream& operator<<(std::ostream &output, const Coord &c);
	friend std::istream& operator>>(std::istream &input, Coord &c);

//	friend Coord operator+(const Coord &c1, const Coord &c2);
	friend Coord operator+(int value, const Coord &c);

	// friend Coord operator-(const Coord &c1, const Coord &c2);
	friend Coord operator-(int value, const Coord &c);

//	friend Coord operator*(const Coord &c1, const Coord &c2);
	friend Coord operator*(int value, const Coord &c);

//	friend Coord operator/(const Coord &c1, const Coord &c2);
	friend Coord operator/(int value, const Coord &c);

//	friend Coord operator^(const Coord &c1, const Coord &c2);
	friend Coord operator^(int value, const Coord &c);

//	friend Coord operator%(const Coord &c1, const Coord &c2);
	friend Coord operator%(int value, const Coord &c);


private:
	int x, y;
	

public:

	//member functions

	
	
	const Coord& operator=(const Coord &c);

	Coord& operator+=(const Coord &c);
	Coord& operator+=(int value);

	bool operator==(const Coord &c);
	bool operator!=(const Coord &c);

	bool operator<(const Coord &c)const
	{
		return x < c.x;

	}

	Coord operator-();

	Coord& operator++();
	Coord operator++(int);

	Coord& operator--();
	Coord operator--(int);



	Coord operator+(const Coord &c);
	Coord operator+(int value);

	Coord operator-(const Coord &c);
	Coord operator-(int value);

	Coord operator*(const Coord &c);
	Coord operator*(int value);

	Coord operator/(const Coord &c);
	Coord operator/(int value);

	Coord operator^(const Coord &c);
	Coord operator^(int value);

	Coord operator%(const Coord &c);
	Coord operator%(int value);

	Coord(const Coord &c);

	~Coord();
	
    Coord(int = 0, int = 0);
/*	void set_coord(int, int);
	void set_x(int);
	void set_y(int);

	int get_x();
	int get_y(); */

};

#endif
