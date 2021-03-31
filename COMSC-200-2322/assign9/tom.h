#include <vector>

struct Term {
	int coe;
	int exp;
};

class Polynomial {
	public:
		Polynomial operator+ (const Polynomial &a);
		Polynomial operator- (const Polynomial &a);
		Polynomial & operator+= (const Polynomial &a);
		Polynomial & operator-= (const Polynomial &a);
		Polynomial & operator= (const Polynomial &a);
		Polynomial();
		void enterTerms();
		void printPolynomial() const;
		void sort();
		Term getTerm(int i) const;
		void addTerm(int a, int b);
		void setTerm(int i, int a, int b);
		void del(int a);
		void cl();
		int size;
	private:
		std::vector<Term> arr;
};


Polynomial::Polynomial() {}
void Polynomial::cl() {
	arr.clear();
}
void Polynomial::setTerm(int i, int a, int b) {
	arr[i].coe = a;
	arr[i].exp = b;
}
void Polynomial::del(int a) {
	arr.erase (arr.begin() + a);
}

void Polynomial::addTerm(int a, int b) {
	Term n; 
	n.coe = a;
	n.exp = b;
	arr.push_back(n);
}
void Polynomial::enterTerms() {
	std::cout<<"Enter number of polynomial Terms: ";
	std::cin>>size;
	for (int i = 0; i < size; i++) {
		int a, b;
		std::cout << "Enter coefficient: ";
		std::cin >> a;
		std::cout << "Enter exponent: ";
		std::cin >> b;
		addTerm(a,b);
	}
	sort();
}

Term Polynomial::getTerm(int i) const {
	return arr[i];
}

void Polynomial::printPolynomial() const {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].coe == 0) {
			i++;
		}
		else {
			if (arr[i].coe < 0)
				std::cout<<"";
			if (arr[i].coe > 0 && arr[i - 1].coe != 0)
				std::cout<<"+";
			if (arr[i].coe > 0 && arr[i - 1].coe == 0)
				std::cout<<"";
			if (arr[i].exp == 0)
				std::cout<<getTerm(i).coe;
			if (arr[i].exp != 0) 
				std::cout<<getTerm(i).coe<<"X^"<<arr[i].exp;
		}
	}
	std::cout<<"\n";
}

void Polynomial::sort() {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (arr[j].exp < arr[i].exp) {
				Term temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

Polynomial Polynomial::operator+ (const Polynomial &a) {
	Polynomial c;
	for (int i = 0; i < this->size; i++) {
		c.addTerm(this->getTerm(i).coe, this->getTerm(i).exp);
	}
	for (int i = 0; i < a.size; i++) {
		c.addTerm(a.getTerm(i).coe, a.getTerm(i).exp);
	}
	c.size = this->size + a.size;
	for (int i = 0; i < c.size; i++) {
		for (int j = i + 1; j < c.size; j ++) {
			if (c.getTerm(i).exp == c.getTerm(j).exp) {
				c.setTerm(i, c.getTerm(i).coe + c.getTerm(j).coe, c.getTerm(i).exp);
				c.setTerm(j, 0, 0);
			}
		}
	}
	c.sort();
	return c;
}

Polynomial Polynomial::operator- (const Polynomial &a) {
	Polynomial c;
	for (int i = 0; i < this->size; i++) {
		c.addTerm(this->getTerm(i).coe, this->getTerm(i).exp);
	}
	for (int i = 0; i < a.size; i++) {
		c.addTerm(0-a.getTerm(i).coe, a.getTerm(i).exp);
	}
	c.size = this->size + a.size;
	for (int i = 0; i < c.size; i++) {
		for (int j = i + 1; j < c.size; j ++) {
			if (c.getTerm(i).exp == c.getTerm(j).exp) {
				c.setTerm(i, c.getTerm(i).coe + c.getTerm(j).coe, c.getTerm(i).exp);
				c.setTerm(j, 0, 0);
			}
		}
	}
	c.sort();
	return c;
 }

Polynomial & Polynomial::operator+= (const Polynomial &a) {
	*this = *this + a;
	this->sort();
	return *this;
}

Polynomial & Polynomial::operator-= (const Polynomial &a) {
	*this = *this - a;
	this->sort();
	return *this;
}
Polynomial & Polynomial::operator= (const Polynomial &a) {
	if (this != &a) {
		if (this->size != a.size) {
			this->cl();
			this->size = a.size;
			for (int i = 0; i < this->size; i++) {
				this->addTerm(a.getTerm(i).coe, a.getTerm(i).exp);
			}
		}
	}
	return *this;
}

