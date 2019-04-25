#include "stack.h"
#inlcude <iostream>
//using namespace CharStack::;

const int MAX_LENGTH = 21;
int top;

CharStack::CharStack()
{
	top = -1;
}
bool CharStack::IsEmpty() const
{
	return (top == -1);
}
bool CharStack::IsFull() const
{
	return (top == MAX_LENGTH - 1);
}
void CharStack::Push( /* in */ char ch)
{
	if (top < MAX_LENGTH - 1)
	{
		data[++top] = newItem;
	}
	else
	{
		std::cout << "Error: Full stack";
	}
}
void CharStack::Pop()
{
	if (top >= 0)
	{
		top--;
	}
	else
	{
		std::cout << "ERROR: Empty stack";
	}
}
char CharStack::Top() const
{
	if (top >= 0)
	{
		return data[top];
	}
	else
	{
		std::cout << "ERROR: Empty stack";
	}
}

bool CharStack::operator==(inStack)
{
	if (top == inStack.top)
	{
		while (!inStack.isEmpty())
		{
			if (Top() == inStack.Top())
			{
				inStack.Pop();
				Pop;
			}
			else
			{
				return 0;
				break;
			}

		}
		return(1);
	}
	else
	{
		return 0;
	}
}
