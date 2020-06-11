#pragma once
#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	void Print()const;
	Point operator++();
	Point operator--();
	Point operator++(int);
	Point operator--(int);
	bool operator>(const Point& other);
	bool operator<(const Point& other);
	void operator!();
	

};

