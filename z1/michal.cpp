
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#pragma warning(disable : 4996)

using namespace std;

void nacitajSubor(list<string> &_zoznam, string file) {
	ifstream finput(file);
	string input;	

	_zoznam.pop_back();

	while (getline(finput, input)) {
		_zoznam.push_back(input);
	}

	_zoznam.push_back("<<END>>");

}

void vypisZoznam(list<string> _zoznam, int counter, ofstream &log){
	int k;
	list<string>::iterator iterator = _zoznam.begin();

	for (k = 0; k < counter; k++) {
		iterator++;
	}
	for(iterator; iterator != _zoznam.end(); iterator++)
	{
		cout << *iterator << '\n';
		log << *iterator << '\n';
	}

}

void ulozZoznam(list<string> &_zoznam, string file, ofstream &log) {
	ofstream foutput(file);

	for (string &i : _zoznam) {
		foutput << i << endl;
	}
}

int main()
{
	int mainLoop = 0;
	list<string> text;
	string prikaz;
	string attribute;	
	list<string>::iterator riadok = text.begin();
	int it=0;
	int i;
	string input;
	ofstream log("out.txt",fstream::app);

	text.push_back("<<END>>");
	riadok--;

	do {
		cout << ">";
		log << ">";
		prikaz = {};
		getline(cin, prikaz);
		log << prikaz << '\n';
		if (prikaz.substr(0, 3).append("\0") == "MV "){
			attribute = prikaz.substr(3);
			riadok = text.begin();
			if (it + stoi(attribute) < 0){
				it = 0;
			}
			else if (it + stoi(attribute) > text.size()){
				it = text.size();
				it--;
			}
			else{
				it = it + stoi(attribute);
			}
			for (i = 0; i < it; i++) {
				riadok++;
			}			
		}
		else if (prikaz == "IN")
		{
			do {
				getline(cin, input);
				log << input << endl;
				if (input == "//") {
					break;
				}
				text.insert(riadok, input);
			} while (1);
		}
		else if (prikaz == "DE")
		{
			if (it < text.size() - 1) { 
				text.erase(riadok);
				riadok = text.begin();
				for (i = 0; i < it; i++) {
					riadok++;
				}
			}
		}
		else if (prikaz.substr(0, 3).append("\0") == "RE ")
		{
			attribute = prikaz.substr(3);
			nacitajSubor(text, attribute);
			riadok = text.begin();
		}
		else if (prikaz.substr(0, 3).append("\0") == "SA ")
		{
			attribute = prikaz.substr(3);
			ulozZoznam(text, attribute, log);
			begin(text);
		}
		else if (prikaz == "LA")
		{
			vypisZoznam(text, it, log);
		}
		else if (prikaz == "XT")
		{
			mainLoop = 1;
		}

	} while (mainLoop != 1);

}
