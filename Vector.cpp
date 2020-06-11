#include "Vector.h"

Vector::Vector() : arr_point(nullptr), size(0) {}


Vector::Vector(const Vector& other)
{
	this->size = other.size;
	this->arr_point = new Point[size];
	for (int i = 0; i < size; i++)
	{
		this->arr_point[i] = other.arr_point[i];
	}
}
Vector::Vector(Vector&& other)
{
	this->size = other.size;
	this->arr_point = other.arr_point;
	other.size = 0;
	other.arr_point = nullptr;
}

Vector& Vector:: operator=(const Vector& other)
{
	if (this == &other)
	{
		return *this;
	}
	if (arr_point != nullptr)
	{
		delete[] arr_point;
	}
	this->size = other.size;
	this->arr_point = new Point[size];
	for (int i = 0; i < size; i++)
	{
		this->arr_point[i] = other.arr_point[i];
	}
	return *this;
}

Vector& Vector:: operator=(Vector&& other)
{
	if (this == &other)
	{
		return *this;
	}
	if (arr_point != nullptr)
	{
		delete[] arr_point;
	}

	this->size = other.size;
	this->arr_point = other.arr_point;
	other.size = 0;
	other.arr_point = nullptr;
	return *this;
}

void Vector::Add_point(const Point& other)
{
	Point* new_arr = new Point[size + 1];

	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr_point[i];
	}
	new_arr[size] = other;
	delete[] arr_point;
	arr_point = new_arr;
	size++;
}
void  Vector:: Print()const
{
	for (int i = 0; i < size; i++)
	{
		arr_point[i].Print();
	}
}

Vector::~Vector()
{
	delete[]arr_point;
}