#include "Coord.h"
#include <stdexcept>
#include <cmath>
using namespace std;


Coord::~Coord()
{

	cout << "Inside of destructor...\n\n";

}

Coord::Coord(const Coord &c)
{
	x = c.x;
	y = c.y;

	cout << "inside of copy constructor...\n\n";

}


Coord::Coord(int x1, int y1)
	:x(x1), y(y1)
{
	cout << "Inside of (int, int) constructor...\n\n";
}

//operator= (must be a member function)
const Coord& Coord::operator=(const Coord &c)
{
	x = c.x;
	y = c.y;

	cout << "inside of overloaded assignment operator...\n\n";

	return *this;

}

//operator--

Coord& Coord::operator--()  //prefix member function
{
	--x;
	--y;

	return *this;

}

/* Coord& operator--(Coord &c) //prefix friend function
{
	--c.x;
	--c.y;

	return c;

} */


Coord Coord::operator--(int) //postfix member function
{
	Coord temp = *this;

	x--;
	y--;

	return temp; //return temp (local copy object)


}

/* Coord operator--(Coord &c, int) //postfix friend function
{
	Coord temp = c;

	c.x--;
	c.y--;

	return temp; //return temp (local copy object)

} */



//operator++

Coord& Coord::operator++()  //prefix member function
{
	++x;
	++y;

	return *this;

}

/* Coord& operator++(Coord &c) //prefix friend function
{
	++c.x;
	++c.y;

	return c;

} */


Coord Coord::operator++(int) //postfix member function
{
	Coord temp = *this;

	x++;
	y++;

	return temp; //return temp (local copy object)


}

/* Coord operator++(Coord &c, int) //postfix friend function
{
	Coord temp = c;

	c.x++;
	c.y++;

	return temp; //return temp (local copy object)

} */

//operator- (unary minus)

Coord Coord::operator-() //unary minus member function
{
	return Coord(-x, -y);

}

/* Coord operator-(const Coord &c) //unary minus friend function
{
	return Coord(-c.x, -c.y);

} */


//operator==

bool Coord::operator==(const Coord &c) //member function
{
	return x == c.x && y == c.y;

}

/* bool operator==(const Coord &c1, const Coord &c2) //friend function
{

	return c1.x == c2.x && c1.y == c2.y;

} */


//operator!=

bool Coord::operator!=(const Coord &c) //member function
{
	// return x != c.x || y != c.y;

	return !(*this == c);

}

/* bool operator!=(const Coord &c1, const Coord &c2) //friend function
{

	// return c1.x != c2.x || c1.y != c2.y;

	return !(c1 == c2);

} */



//operator+

/* Coord operator+(const Coord &c1, const Coord &c2) //friend function
{

	return Coord(c1.x + c2.x, c1.y + c2.y);

}  */

Coord operator+(int value, const Coord &c)   //friend function
{
	return Coord(value + c.x, value + c.y);

}

Coord Coord::operator+(const Coord &c) //member function
{

	return Coord(x + c.x, y + c.y);
}



Coord Coord::operator+(int value)   //member function
{

	return Coord(x + value, y + value);

}

//operator-


/* Coord operator-(const Coord &c1, const Coord &c2)
{

	return Coord(c1.x - c2.x, c1.y - c2.y);

} */

Coord operator-(int value, const Coord &c)
{
	return Coord(value - c.x, value - c.y);

}

Coord Coord::operator-(const Coord &c)
{

	return Coord(x - c.x, y - c.y);
}

Coord Coord::operator-(int value)
{

	return Coord(x - value, y - value);

}


//operator/ (division) ----------

/* Coord operator/(const Coord &c1, const Coord &c2)
{

	
	if (c2.x == 0 || c2.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(c1.x / c2.x, c1.y / c2.y);

} */

Coord operator/(int value, const Coord &c)
{
	if (c.x == 0 || c.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");
	
	return Coord(value / c.x, value / c.y);

}

Coord Coord::operator/(const Coord &c)
{

	if (c.x == 0 || c.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(x / c.x, y / c.y);
}



Coord Coord::operator/(int value)
{

	if (value == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(x / value, y / value);

}



//operator ^ (overloaded to do exponentiation


/*Coord operator^(const Coord &c1, const Coord &c2)
{

	return Coord(pow(c1.x, c2.x), pow(c1.y, c2.y));

} */

Coord operator^(int value, const Coord &c)
{
	
	return Coord(pow(value, c.x), pow(value, c.y));

}

Coord Coord::operator^(const Coord &c)
{

	return Coord(pow(x, c.x),  pow(y, c.y));
}



Coord Coord::operator^(int value)
{

	return Coord(pow(x, value), pow(y, value));

}



// operator%


/* Coord operator%(const Coord &c1, const Coord &c2)
{
	if (c2.x == 0 || c2.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");


	return Coord(c1.x % c2.x, c1.y % c2.y);

} */

Coord operator%(int value, const Coord &c)
{
	if (c.x == 0 || c.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(value % c.x, value % c.y);

}

Coord Coord::operator%(const Coord &c)
{

	if (c.x == 0 || c.y == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(x % c.x, y % c.y);
}



Coord Coord::operator%(int value)
{

	if (value == 0)
		throw invalid_argument("ERROR: cannot divide by zero");

	return Coord(x % value, y % value);

}


//operator*

/* Coord operator*(const Coord &c1, const Coord &c2)
{

	return Coord(c1.x * c2.x, c1.y * c2.y);

} */

Coord operator*(int value, const Coord &c)
{
	return Coord(value * c.x, value * c.y);

}

Coord Coord::operator*(const Coord &c)
{

	return Coord(x * c.x, y * c.y);
}



Coord Coord::operator*(int value)
{

	return Coord(x * value, y * value);

}



// --------------

Coord& Coord::operator+=(const Coord &c)
{
	x += c.x;
	y += c.y;

	return *this;

}

Coord& Coord::operator+=(int value)
{

	x += value;
	y += value;

	return *this;

}


ostream& operator<<(std::ostream &output, const Coord &c)
{
	output << "(" << c.x << ", " << c.y << ")\n";
	return output;
}

istream& operator >> (std::istream &input, Coord &c)
{
	
  input >> c.x >> c.y;
	return input;
}











