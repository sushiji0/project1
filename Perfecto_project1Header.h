#pragma once
#include "Project_project1Class.cpp"
#include <iostream>
#include <algorithms>
#include <cctype>
#include <string>

calculator::operations(input) {
	if (input == 'q') {
		break;
	}
	getline(cin, input); // gets the input

	input.erase(remove_if(input.begin(), input.end(), isspace), input.end()); // removes the whitespace.
	//DEBUG
	cout << "String without whitespace: " << input << endl;
	//DEBUG END
	size_t operationPosition = input.find_first_of("+-*/"); //finds the position of when the first operation occurs.

	num1 = input.substr(0, operationPosition); //gets the numbers from size 0 until the operation position and sets it to the variable num1
	operation = input[operationPosition];// gets the character and sets it to operation character variable
	num2 = input.substr(operationPosition + 1); //same thing for num2

	//DEBUG
	cout << num1 << endl;
	cout << operation << endl;
	cout << num2 << endl;
	//DEBUG END
	if (num2 == 0 && operation == '/') { // checks for if the user is trying to divide by 0
		cout << "Undefined operation. Try again. " << endl;
		continue;
	}

	switch (operation) { //switch statement to do operations based on the operation input
	case +:
		answer = num1 + num2;
		break;
	case -:
		answer = num1 - num2;
		break;
	case *:
		answer = num1 * num2;
		break;
	case /:
		answer = num1 / num2;
		break;
	default:
		break;
	}
}

calculator::displayNumbers() {
	cout << num1 << " " << operation << " " << num2 << '=' << endl;
	cout << answer << endl;
}

