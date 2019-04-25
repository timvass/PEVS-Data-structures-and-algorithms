#include <iostream>
#include <stdlib.h> // for sleep() in miliseconds
#include "simulacia.h"
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int max = 5;
	int i = 1;
	int help;
	int endPoint = 0
	string input;
	string inputLine;
	fstream ioFile("pokladne.txt");
	vector<Queue> queues;
	queues.reserve(max);
	for (int j = 1; j <= max; j++)
	{
		queues.push_back(Queue::Queue());
	}
	if (ioFile)
	{
		while (getline(ioFile, inputLine))
		{
			if (i < max)
			{
				
				stringstream strs(inputLine);


				getline(strs, input, ' ');				//parsing-start
				help = stoi(input);

				getline(strs, input, ' ');

				while (getline(strs, input, ' '))
				{
					queues[help].EnQueue(input);
				}
				i++;
			}
			else
			{
				cout << "Too much lines in pokladne.txt file";
			}
		}
	}
	else
	{
		cout << "ERROR: File not found";
	}
	while (endpoint = 0)
	{
		cout << "<open>		.....otvor pokladnu cislo k";
	}



	return 0;
}
