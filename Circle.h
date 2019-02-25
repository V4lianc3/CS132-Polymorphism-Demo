// Circle derived class
// area of a circle = Pi x Radius^2
// Perimeter of a circle = 2 x Pi x Radius
#pragma once

#include "Shape.h"

class Circle : public virtual Shape
{
private:
	
	int posX;
	int posY;
	double radius;

protected:


public:
	//constructor
	Circle(int newXPosition, int newYPosition, double newRadius);

	// Deconstructor
	~Circle();

	// Public methods
	 double computeArea();
	 double computePerimeter();


	//Accessors
	int getXPos() const;
	int getYPos() const;
	double getRadius() const;

	//mutators
	void setXPos(int newXPosition);
	void setYPos(int newYPosition);
	void setRadius(double newRadius);
};
