#include <iostream>
#pragma once
#include "Perfecto_project1Header.h"
#include <string>

using namespace std;

int main{
	while (true) {
		string input;
		cout << "Enter a problem or press q to quit: " << endl;
		cin >> input;
		calculator.operations(input);
		calculator.displayNumbers();
	}
}