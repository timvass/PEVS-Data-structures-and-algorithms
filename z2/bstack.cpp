#include "bstack.h"
#include <iostream>
using namespace std;
int top;

CharStack::CharStack() {
    top = -1;
}
bool CharStack::IsEmpty() const {
    return (top == -1);
}
bool CharStack::IsFull() const {
    return (top == MAX_LENGTH - 1);
}
void CharStack::Push(char ch) {
    if (top < MAX_LENGTH - 1) {
        data[++top] = ch;
    }
    else {
        std::cout << "Full stack";
    }
}
void CharStack::Pop() {
    if (top >= 0) {
        //top--;
        data[--top];
    }
}
char CharStack::Top() const {
    if (top >= 0) {
        return data[top];
    }
    return 0;
}
bool CharStack::operator==(CharStack inStack)
{
    int i = 0;
    int k = 0;
    int m;

    while (inStack.data[k] == '\0')
    {
        k++;
    }

    for (m = 0; m < MAX_LENGTH; m++)
    {
        inStack.data[m] = inStack.data[k];
        k++;
    }
    for (m = MAX_LENGTH; m > 0; m--)
    {
        if (data[m] == '\0')
        {
            Pop();
            inStack.Pop();
        }
    }

    if (top == inStack.top)
    {
        while (!inStack.IsEmpty())
        {
            if (Top() == inStack.Top())
            {
                inStack.Pop();
                Pop();
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
