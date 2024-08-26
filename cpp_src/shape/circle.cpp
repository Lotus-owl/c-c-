#include "circle.h"

Circle::Circle(int x, int y, int r)
: Shape(x, y), radius(r)
{

}

double Circle::area() const
{
	return (3.141592 * radius * radius);
}

double Circle::getCircumference() const
{
	return (3.141592 * (radius + radius));
}
