#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape {
private:
	int radius;
	
public:
	//Circle() X
	Circle(int x, int y, int r);
	//Circle(const Circle& rhs);
	virtual ~Circle() { }
	
	//Circle& operator=(const Circle& rhs);
	
	virtual double area() const;
	double getCircumference() const;
};

#endif
