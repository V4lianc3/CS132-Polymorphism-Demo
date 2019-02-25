//Header file for Triangle shape
// Area of a Triangle = 1/2 base times height  A= HB/2
// Perimeter of a Triangle = side + side + side    P = a+b+c


#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:

	int posX;
	int posY;
	double height;
	double base;

protected:


public:

	// Constructor
	Triangle(int XPositiion, int YPosition, double newHeight, double newBase);

	// Deconstructor
	~Triangle();

	//Public methods
	virtual double computeArea();
	virtual double computePerimeter();

	//accessors
	int getXPos() const;
	int getYPos() const;
	double getHeight() const;
	double getBase() const;

	//mutators
	void setXPos(int newXPosition);
	void setYPos(int newYPosition);
	void setHeight(double newHeight);
	void setBase(double newBase);

};
