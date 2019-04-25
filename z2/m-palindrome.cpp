#include "stack.h"
#include <iostream>
#include <fstream>
const MAX_LENGTH = 21;
using namespace std;
using CharStack::CharStack;

void printStack(CharStack zasobnik) {
	while (!zasobnik.empty()) {
		cout << zasobnik.Top();
		zasobnik.pop();
	}
}

int maint()
{
	int koniec = 0;
	char volba;
	char retazec[MAX_LENGTH];
	while (koniec = 0) {
		cout << "a....Vytvor dva (+1) nove a prazdne zasobniky" << endl;
		// toto sa vol� iba raz na za�iatku programu
		cout << "b... Vyprazdni obsah v oboch zasobnikoch" << endl;
		cout << "c... Nacitaj novy retazec z klavesnice do prveho zasobn�ka a vytvor aj druhy zasobnik" << endl;
		cout << "d... Vypis obsah prveho zasobnika" << endl;
		cout << "e... Vypis obsah druheho zasobnika" << endl;
		// druh� z�sobn�k obsahuje vstupn� re�azec v obr�tenom porad� p�smen
		cout << "f... Urci, ci dany retazec je palindrom" << endl;
		cout << "x... Ukonci program." << endl;

		cin >> volba;
		switch (volba) :
		case a:
			stack1 = CharStack();
			stack2 = CharStack();
			break;
		case b:
			while (stack1.isEmpty() != 1)
			{
				stack1.pop();
			}
			while (stack2.isEmpty() != 1)
			{
				stack2.pop();
			}
			break;
		case c:
			cin >> retazec;
			stack1.push(retazec);
			helpstack = CharStack();
			helpstack.push(retazec);
			while (!helpstack.isEmpty())
			{
				stack2.push(helpstack.Top());
				helpstack.pop();
			}
			break;
		case d:
			printStack(stack1);
			break;
		case e:
			printStack(stack2);
			break;
		case f:
			if (stack1 == stack2)
			{
				cout << "je to palindrom"
			}
			else
			{
				cout << "nie je to palindrom"
			}
			break;
		case x:
			koniec = 1;
			getchar();
			break;

			return 0;
	}
}
