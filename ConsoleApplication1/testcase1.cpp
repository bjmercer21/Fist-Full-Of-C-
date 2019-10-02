#include <iostream>
#include <string>

class randomQuote {

	//Use a void statement to just print out to the screen
public: void showQuote() {
		std::cout << "This is a random Quote" << std::endl;
	}

		//Using a return statement and a string in C++
public: std::string someMethod(std::string firstName, std::string lastName) {

	std::string s1;
	
	s1 = "Hello " + firstName + " " + lastName;

	return s1;
}

};