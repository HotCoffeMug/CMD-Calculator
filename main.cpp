/*
	Name: CMD CALCULATOR
	Copyright: GNU
	Author: Magrid
	Date: 04/09/22 15:40
	Description: a simple calculator in the terminal
*/


#include <iostream> //include the 'iostream' library.


int main() { //define main class.
	std::cout << "CMD Calculator"<<std::endl ; //print exercise name.
	std::cout << "--------------"<<std::endl ;	

	std::cout << "Choose the operation:\n";
	std::cout << "[1] Sum\n";
    std::cout << "[2] Subtract\n";
    std::cout << "[3] Multiplication\n";
	std::cout << "[4] Division\n";

	std::string input;
	std::getline(std::cin, input);

	while(input != "1" && input != "2" && input != "3" && input != "4") {
    	std::cout << "Invalid!\n\n";

    	std::cout << "Choose the operation:\n";
		std::cout << "[1] Sum\n";
		std::cout << "[2] Subtract\n";
        std::cout << "[3] Multiplication\n";
		std::cout << "[4] Division\n";
    	std::getline(std::cin, input);
	}

	if (input == "1") {
    	// do something
    	std::cout << "Sum Selected\n";
    	
    	int a; //define a.
		std::cout << "Insert the first number: "; //print a sentence.
		std::cin >> a; //assign the value of the user input to A.
		int b; //define b.
		std::cout << "Insert the second number: "; //print a sentence.
		std::cin >> b; //assign the value of the user input to B.
		std::cout << a+b; //print the sum of A and B
		std::cout << "\n";
		system("pause");
    	
    	
		} else if (input == "2") {
    	// do something else
    	std::cout << "Subtraction Selected\n";
    	
    	int a; //define a.
		std::cout << "Insert the first number: "; //print a sentence.
		std::cin >> a; //assign the value of the user input to A.
		int b; //define b.
		std::cout << "Insert the second number: "; //print a sentence.
		std::cin >> b; //assign the value of the user input to B.
		std::cout << a-b; //print the subtraction of A and B
		std::cout << "\n";
		system("pause");
    	
    	} else if (input == "3") {
    	// do something else
    	std::cout << "Multiplication Selected\n";
    	
    	int a; //define a.
		std::cout << "Insert the first number: "; //print a sentence.
		std::cin >> a; //assign the value of the user input to A.
		int b; //define b.
		std::cout << "Insert the second number: "; //print a sentence.
		std::cin >> b; //assign the value of the user input to B.
		std::cout << a*b; //print the moltiplication of A and B
		std::cout << "\n";
		system("pause");
    	
    	} else if (input == "4") {
    	// do something else
    	std::cout << "Division Selected\n";
    	
    	int a; //define a.
		std::cout << "Insert the first number: "; //print a sentence.
		std::cin >> a; //assign the value of the user input to A.
		int b; //define b.
		std::cout << "Insert the second number: "; //print a sentence.
		std::cin >> b; //assign the value of the user input to B.
		std::cout << a/b; //print the division of A and B
		std::cout << "\n";
		system("pause");
    }

	return 0;
}
