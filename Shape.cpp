#include "Shape.h"
#include <iostream>
using namespace std;




//Default constructor
Shape::Shape()
{
	posX = 0;
	posY = 0;
}

//constructor
	Shape::Shape(int newXPos, int newYPos)
	{
		
		posX = newXPos;
		posY = newYPos;
		cout << "Shape constructed." << endl;
	}

	//accessors
	int Shape::getXPos() const
	{
		return posX;
	}
	int Shape::getYPos() const
	{
		return posY;
	}

	//mutators

	// Set new X position
	void Shape::setXPos(int newXPos)
	{
		posX = newXPos;
	}

	// Set new Y position
	void Shape::setYPos(int newYPos)
	{
		posY = newYPos;
	}


	//public methods
	 double Shape::computeArea()
	{
		 double area = 0;

		 return area;
	}

	 double Shape::computePerimeter()
	{
		 double perimeter = 0;

		 return perimeter;
	}

	//Deconstructor
	Shape::~Shape()
	{
		cout << "Shape deconstructed." << endl;
	}

