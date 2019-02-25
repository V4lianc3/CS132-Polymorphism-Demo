// Circle cpp

#include "Circle.h"
#include <iostream>
using namespace std;

//global constant
constexpr double PI = 3.1415927;

//constructor
Circle::Circle(int newXPosition, int newYPositon, double newRadius)
{
	posX = newXPosition;
	posY = newYPositon;
	radius = newRadius;

	cout << "Circle constructed." << endl;
}

//Deconstructor
Circle::~Circle()
{
	cout << "Circle deconstructed." << endl;
}

// public methods

double Circle::computeArea()
{
	double area = 0;
	area = PI * (radius * radius);

	cout << "Computing the area of a circle with a radius of " << radius << ": ";
	

	return area;
}

double Circle::computePerimeter()
{
	double perimeter = 0;
	perimeter = 2 * PI * radius;

	cout << "Computing the perimeter of a circle with a radius of " << radius << ": ";
	
	
	return perimeter;
}

//accessors

int Circle::getXPos() const
{
	return posX;
}

int Circle::getYPos() const
{
	return posY;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setXPos(int newXPosition)
{
	posX = newXPosition;
}

void Circle::setYPos(int newYPosition)
{
	posY = newYPosition;
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}
