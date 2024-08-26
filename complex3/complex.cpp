#include"complex.h"

Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0.0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::~Complex()
{
	
}

Complex& Complex::operator=(const Complex& rc)
{
	this->re = rc.re;
	this->im = rc.im;
	
	return *this;
}

bool Complex::operator==(const Complex& rc)
{
/*	if(this->re == rc.re && this->im == rc.im){
		return true;
	}else{
		return false;
	}
*/
	return (this->re == rc.re && this->im == rc.im);
}

const Complex Complex::operator+(const Complex& rc)
{
	Complex result(this->re + rc.re, this->im + rc.im);
	
	return result;
}

const Complex Complex::operator-(const Complex& rc)
{
	Complex result(this->re - rc.re, this->im - rc.im);
	
	return result;
}

const Complex Complex::operator*(const Complex& rc)
{
	Complex result(this->re * rc.re - this->im * rc.im, this->re * rc.im + this->im * rc.re);
	
	return result;
}

const Complex Complex::operator/(const Complex& rc)
{
	Complex result((this->re * rc.re + this->im * rc.im)/(rc.re * rc.re + rc.im * rc.im),
		(this->im * rc.re - this->re * rc.im)/(rc.re * rc.re + rc.im * rc.im));
	
	return result;
}

double Complex::real()
{
	return this->re;
}

double Complex::imag()
{
	return this->im;
}

void Complex::real (double re)
{
	this->re = re;
}

void Complex::imag (double im)
{
	this->im = im;
}

