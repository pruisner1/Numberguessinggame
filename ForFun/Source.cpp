/*
Lane Pruisner
C++ Fall 2019
Due: Dec.18, 2019
Lab 42: Number Guessing Game
Game that allows users to guess random numbers
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
	//seed random number generator
	srand(unsigned int(time(NULL)));

	// output to screen random number between 1 and 10
	cout << rand() % 10 + 1 << endl;

	int userinput;
	cin >> userinput;

	cout << userinput << endl;

	return 0;
}
