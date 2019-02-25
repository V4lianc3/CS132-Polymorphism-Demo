#pragma once

// includes
#include<iostream>
#include "Node.h"
#define NDEBUG
#include<assert.h>
#include <exception>
using namespace std;

// Code provided by Cliff Snyder
template <class P>
class Stack
{
private:
	Node<P> * top;	// pointer to the top element
	int numNodes;	// number of elements in the stack

	void reversePrintHelper(ostream& outStream, Node<P> *current) const
	{
		if (current != nullptr)
		{
			// Recursive operation
			reversePrintHelper(outStream, current->getNext());
			outStream << *current;
			outStream << " ";
		}
	}

	// push helper Method
	void reversePushHelper(Node<P> *current)
	{

		if (current != nullptr)
		{
			// Recursive operation
			reversePushHelper(current->getNext());
			push(current->getPayload());
		}

	}

public:


	// Constructor
	Stack()
	{
		// the constructor
		Node<P> *top = nullptr;
		int numNodes = 0;

	}

	// Copy Constructor
	Stack(const Stack& fromStack)
	{
		// initialize stack attributes
		Node<P> *top = nullptr;
		int numNodes = 0;

		reversePushHelper(fromStack.top);
	}


	// Push Methods
	bool push(P newPayload) // New boolean expression made by Cliff Snyder
	{
		bool retVal = true; // Allocation was successful

		try
		{
			top = new Node<P>(newPayload, top);
			numNodes++;
		}
		catch (exception)
		{
			retVal = false; // allocation was not successful
		}

		return retVal;
	}
	// Pop Method
	P pop()
	{
		// pop method
		assert(numNodes > 0);
		if (numNodes <= 0)
		{
			throw runtime_error("Illegal pop.");
			cout << endl;
		}
		Node<P> *tempPtr = top; // assigns the top memory address to a new temp pointer
		P tempPayload = top->getPayload(); // assigns a tempPayload Variable to the top's payload
		top = top->getNext(); // sets top to the new pointer
		delete tempPtr; // deletes the temp pointer after reassigning
		numNodes--; // decrement the number of nodes after deletion
		return tempPayload; // returns the payload stored in temp

	}



	// getTop Method accessor
	P getTop() const
	{
		assert(top != nullptr);
		if (top == nullptr)
		{
			throw runtime_error("illegal getTop");
			cout << endl;
		}
		return top->getPayload();
	}

	// NumNodes accessor
	int getNumNodes() const
	{
		// get the number of nodes
		return numNodes;
	}



	// Operator overload
	friend ostream& operator <<(ostream& outStream, const Stack& stack)
	{

		stack.reversePrintHelper(outStream, stack.top);
		return outStream;

	}

	// operator overload =
	Stack& operator =(const Stack& fromStack)
	{
		if (this != &fromStack)
		{
			clearStack();
			reversePushHelper(fromStack.top);
		}

		return *this;
	}




	// operator overload for equality
	// Code from our group meet in class sent by Steven Fordham heavily modified by me
	bool operator== (const Stack& rhs) const
	{
		// Default to true
		bool answer = true;
		const Stack *lhs = this; // assign our this pointer to a new stack 
		if (lhs != &rhs)  // compare the addresses
		{
			answer = false; // change base state to false if addresses don't match

			if (lhs->numNodes == 0 && rhs.numNodes == 0) // if stacks have no nodes they are equal
			{
				answer = true;
			}

			if (lhs->numNodes == rhs.numNodes && lhs->numNodes > 0 && rhs.numNodes > 0) // if the numnodes is equal enter 
			{

				Node<P> *left = lhs->top; // create new pointers to navigate through the stacks
				Node<P> *right = rhs.top;

				do
				{
					//left = left->getNext();  // navigate the left stack by nodes
					//right = right->getNext(); // navigate the right stack by nodes
					if (left->getPayload() == right->getPayload())  // compare the two payloads of the nodes
					{
						answer = true; // if the payloads are the same answer true.

						if (left->getNext() != nullptr && right->getNext() != nullptr)
						{
							left = left->getNext();  // navigate the left stack by nodes
							right = right->getNext(); // navigate the right stack by nodes
						}
					}
					else
					{
						answer = false; // if the payloads are not the same answer false
					}



				} while (left->getPayload() == right->getPayload() && right->getNext() != nullptr && left->getNext() != nullptr); // compare the elements until nullptr


			}

		}
		return answer;
	}


	// Clearstack method
	void clearStack()
	{
		while (top != nullptr)
		{
			pop(); // calls pop until stack is cleared
		}
	}


	// Deconstructor

	~Stack()
	{

		clearStack();
		cout << "Stack destructed." << endl;

	}
};
