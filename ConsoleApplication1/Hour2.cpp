#include <iostream>
#include "testcase1.cpp"
#include "testingMultiplePackages.cpp"
#include "gettersAndSetters.cpp"



using namespace std;

//createing a basic function in C++
int add(int x, int y) {

	return x + y;
}


int main() {
	
	//set a few variables to the different classes created in the project
	randomQuote quote;
	thisIsMultiplication testCase;
	Player player;

	//Basic print statement
	cout << "Getting to know C++" << endl;

	//testing the function created at the top of this file
	cout << add(5, 18) <<endl; //Will return 23

	//testing the functions created throughout the project
	quote.showQuote();
	cout << "testing across multiple packages: " << testCase.muliplying(5, 8) << endl;
	std::cout<<quote.someMethod("First Name", "Last Name")<<endl;

	//test using setters
	player.setName("Goku");
	player.setHealth(100);
	player.setMana(100);

	//test showing the getters
	std::cout << "Welcome "<< player.getName() << endl;
	std::cout << "Health is " << player.getHealth() << endl;
	std::cout << "Mana is " << player.getMana() << endl;


	return 0;
}

