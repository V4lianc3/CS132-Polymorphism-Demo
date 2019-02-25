// Shape base class
#pragma once


class Shape
{
private:

	int posX; // X and Y graph positions
	int posY;

protected:
	
	// protected class constructor prevents the Shape class from being called
	 Shape(int newXPos, int newYPos);

	 //default constructor
	 Shape();
	

public:

	//accessors
	int getXPos() const;
	int getYPos() const;

	//mutators
	void setXPos(int newXPos);
	void setYPos(int newYPos);


	//public methods
	virtual double computeArea();
	virtual double computePerimeter();

	//Deconstructor
	virtual ~Shape();

};
