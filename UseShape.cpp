// main file for polymorphism

// includes
#include "Node.h"
#include "Stack.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;




int main()
{

	// Code provided by Cliff Snyder

	//Declare a stack of Shapes using a pointer
	Stack<Shape*> shapeStack;

	shapeStack.push(new Circle(0, 0, 3));
	shapeStack.push(new Rectangle(0, 0, 4, 6));
	shapeStack.push(new Triangle(0, 0, 5, 17));

	while (shapeStack.getNumNodes() > 0)
	{
		Shape* shapePtr = shapeStack.pop();
		cout << shapePtr->computeArea() << endl;
		cout << shapePtr->computePerimeter() << endl;
		delete shapePtr;
	}

	system("PAUSE");
	return 0;


}
