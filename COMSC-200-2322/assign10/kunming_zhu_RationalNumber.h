class RationalNumber {
	private:
		int up;
		int down;
	public:
		RationalNumber();
		RationalNumber(int, int);
		int getUp() const;
		int getDown() const;
		void setUp(int);
		void setDown(int);
		void printRational() const;
		RationalNumber operator+ (const RationalNumber &a) const;
		RationalNumber operator- (const RationalNumber &a) const;
		RationalNumber operator* (const RationalNumber &a) const;
		RationalNumber operator/ (const RationalNumber &a) const;
		bool operator> (const RationalNumber &a) const;
		bool operator< (const RationalNumber &a) const;
		bool operator>= (const RationalNumber &a) const;
		bool operator<= (const RationalNumber &a) const;
		bool operator== (const RationalNumber &a) const;
		bool operator!= (const RationalNumber &a) const; 
};