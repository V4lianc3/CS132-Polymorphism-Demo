// Triangle cpp


#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor

Triangle::Triangle(int XPosition, int YPosition, double newHeight, double newBase)
{
	posX = XPosition;
	posY = YPosition;
	height = newHeight;
	base = newBase;

	cout << "Triangle constructed." << endl;
}

// deconstructor

Triangle::~Triangle()
{
	cout << "Triangle deconstructed." << endl;
}

// Public methods

double Triangle::computeArea()
{
	double area = 0;

	area = (height * base) / 2;
	
	cout << "Computing the area of a triangle  with a height of " << height << " and a base of " << base << ": ";
	

	return area;
}

double Triangle::computePerimeter()
{
	double perimeter = 0;
	double hypotnuse = 0;

	hypotnuse = hypot(height, base);
	perimeter = base + height + hypotnuse;

	cout << "Computing the perimeter of a right triangle with a height of " << height << " and a base of " << base << ": ";
	

	return perimeter;
	
}


// accessors
int Triangle::getXPos() const
{
	return posX;
}

int Triangle::getYPos() const
{
	return posY;
}

double Triangle::getHeight() const
{
	return height;
}

double Triangle::getBase() const
{
	return base;
}

//mutators

void Triangle::setXPos(int newXPosition)
{
	posX = newXPosition;
}

void Triangle::setYPos(int newYPosition)
{
	posY = newYPosition;
}

void Triangle::setBase(double newBase)
{
	base = newBase;
}

void Triangle::setHeight(double newHeight)
{
	height = newHeight;
}
