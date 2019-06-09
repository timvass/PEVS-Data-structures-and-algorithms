//palindrome.cpp
#include "bstack.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printStackContent(CharStack stack);
void printMenu();
void saveStringToStacks(CharStack stack1, CharStack stack2, string userInput);

int main() {
    int i;
    bool readyForInput = true;
    char command;
    string string1;
    CharStack stack1;
    CharStack stack2;
    while (readyForInput) {
        printMenu();
        cin >> command;
        switch (command) {
            case 'a':
                stack1 = CharStack();
                stack2 = CharStack();
                break;
            case 'b':
                while (!stack1.IsEmpty())
                {
                    stack1.Pop();
                }
                while (!stack2.IsEmpty())
                {
                    stack2.Pop();
                }
                break;
            case 'c':
                cin.ignore();//?
                cout << "Zadaj retazec:\n";
                getline(cin,string1);
                saveStringToStacks(stack1, stack2, string1);
                break;

            case 'd':
                printStackContent(stack1);
                break;

            case 'e':
                printStackContent(stack2);
                break;

            case 'f':
                if (stack1 == stack2)
                {
                    cout << "Je palindrom.";
                }
                else
                {
                    cout << "Nie je palindrom";
                }
                break;

            case 'x':
                readyForInput = false;
                getchar();
                break;
            default:
                break;
        }
    }
}

void printMenu() {
    cout << "\n";
    cout << "Menu" << endl;
    cout << "----------------------" << endl;
    cout << "\n";
    cout << "a... Vytvor dva nove a prazdne zasobniky" << endl;
    cout << "b... Vyprazdni obsah v oboch zasobnikoch" << endl;
    cout << "c... Nacitaj novy retazec z klavesnice do prveho zasobnika a vytvor aj druhy zasobnik" << endl;
    cout << "d... Vypis obsah prveho zasobnika" << endl;
    cout << "e... Vypis obsah druheho zasobnika" << endl;
    cout << "f... Urci, ci dany retazec je palindrom" << endl;
    cout << "x... Ukonci program." << "\n"<<endl;
    cout << "\n";
    cout << "Zadaj volbu, prosim:"<<endl;
}

void printStackContent(CharStack stack) {
    while (!stack.IsEmpty()) {
        cout << stack.Top()<<endl;
        stack.Pop();
    }
}

void saveStringToStacks(CharStack stack1,CharStack stack2, string userInput){
    CharStack helper;
    int i;
    int max = userInput.length();

    for (i = 0; i < max; i++)
    {
        stack1.Push(tolower(userInput[i]));
    }

    for (i = 0; i < max; i++)
    {
        helper.Push(userInput[i]);
    }
    while (!helper.IsEmpty())
    {
        stack2.Push(helper.Top());
        helper.Pop();
    }

}
