#include "Point.h"

Point::Point() : x(0), y(0) {}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Point::Print()const
{
	cout << " Point x:" << x << endl;
	cout << " Point y:" << y << endl;
}
Point Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}
Point Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}
Point Point::operator++(int)
{
	Point other = *this;
	this->x++;
	this->y++;
	return other;
}
Point Point::operator--(int)
{
	Point other = *this;
	this->x--;
	this->y--;
	return other;
}
bool Point:: operator>(const Point& other)
{
	double result1 = sqrt(pow(this->x, 2) + pow(this->y, 2));
	double result2 = sqrt(pow(other.x, 2) + pow(other.y, 2));
	return (result1 > result2);
}
bool Point:: operator<(const Point& other)
{
	double result1 = sqrt(pow(this->x, 2) + pow(this->y, 2));
	double result2 = sqrt(pow(other.x, 2) + pow(other.y, 2));
	return (result1 < result2);
}
void Point::operator!()
{
	this->x *= -1;
	this->y *= -1;
}