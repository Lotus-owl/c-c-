#ifndef SHAPE_H
#define SHAPE_H

class Shape {		//ABC: Abtract Bace Class
private:
//protected:
	int x_;
	int y_;

public:
	explicit Shape(int x = 0, int y = 0);
	//Shape(const Shape& rhs);
	virtual ~Shape() { }
	
	//Shape& operator=(const Shape&rhs);
	void move(int x, int y);
	
	virtual double area() const = 0;			//pure virtual func. (can't implement!)
};

#endif
