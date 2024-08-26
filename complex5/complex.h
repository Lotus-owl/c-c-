#ifndef COMPLEX_H
#define COMPLEX_H

class Complex;
std::ostream& operator<<(std::ostream &out, const Complex& rhs);

class Complex {
private:
	double re_;
	double im_;
	
public:
	Complex(double re = 0.0, double im = 0.0);		//default argument
	Complex(const Complex& rhs);						//copy const.
	
	~Complex();
	
	double real() const;
	double imag() const;
	
	void real(double re);
	void imag(double im);
	
	Complex& operator=(const Complex& rhs);
	Complex& operator+=(const Complex& rhs);
	
	const Complex& operator++();			//prefix
	const Complex operator++(int );	//postfix
	
	bool operator==(const Complex& rhs) const;
	bool operator!=(const Complex& rhs) const;
	//bool operator>(const Complex& rhs);
	//bool operator<(const Complex& rhs);
	//bool operator>=(const Complex& rhs);
	//bool operator<=(const Complex& rhs);
	
	const Complex operator+(const Complex& rhs) const;
	//const Complex operator-(const Complex& rhs);
	//const Complex operator*(const Complex& rhs);
	//const Complex operator/(const Complex& rhs);
	
	
	
};

#endif
