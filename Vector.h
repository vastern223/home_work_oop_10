#pragma once
#include "Point.h"
class Vector
{
private:
	Point* arr_point;
	int size;
public:
	Vector();
	Vector(const Vector& other);
    Vector(Vector&& other);
	Vector& operator=(const Vector& other);
	Vector& operator=(Vector&& other);
	void Add_point(const Point& other);
	void Print()const;
	~Vector();
	
};

