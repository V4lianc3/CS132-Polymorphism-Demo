//Header file for Rectangle shape
// Area of a Rectangle = length x width
// Perimeter of a rectangle = 2(length + width)

#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:

	int posX;
	int posY;
	double length;
	double width;

protected:

public:

	// constructor
	Rectangle(int newXPosition, int newYPosition, double newLength, double newWidth);
	
	// Deconstructor
	~Rectangle();


	// public methods

	// Calculates the area
	virtual double computeArea();

	// Calculates the perimeter
	virtual double computePerimeter();

	// accessors
	int getXPos() const;
	int getYPos() const;
	double getLength() const;
	double getWidth()  const;

	//Mutators
	void setXPos(int newXPosition);
	void setYPos(int newYPosition);
	void setLength(double newLength);
	void setWidth(double newWidth);

};
