// Rectangle cpp


#include "Rectangle.h"
#include <iostream>
using namespace std;

// constructor

Rectangle::Rectangle(int newXPosition, int newYPosition, double newLength, double newWidth)
{
	posX = newXPosition;
	posY = newYPosition;
	length = newLength;
	width = newWidth;

	cout << "Rectangle constructed." << endl;
}

// Deconstructor
Rectangle::~Rectangle()
{

	cout << "Rectangle deconstructed." << endl;
}

double Rectangle::computeArea()
{
	double area = 0;

	area = (length * width);

	cout << "Computing the area of a rectangle with a length of " << length << " and width of " << width <<  ": ";
	

	return area;
}

 double Rectangle::computePerimeter()
{
	double perimeter = 0;

	perimeter = 2 * (length + width);

	cout << "Computing the perimeter of a Rectangle with a length of " << length << " and width of " << width << ": ";
	

	return perimeter;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

int Rectangle::getXPos() const
{
	return posX;
}

int Rectangle::getYPos() const
{
	return posY;
}

void Rectangle::setLength(double newLength)
{
	length = newLength;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setXPos(int newXPosition)
{
	posX = newXPosition;
}

void Rectangle::setYPos(int newYPosition)
{
	posY = newYPosition;
}
