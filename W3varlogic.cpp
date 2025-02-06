#include <iostream>		// this sends and recieves text from the console.
#include <string>		// allows us to use the string variable type.
#include <cstdlib>		//
#include <ctime>		//
using namespace std;	// adds a lot of bloat, but keeps us from typing "std:' all the time.

// this is where the program starts running
int main() {
	//always seed your random number generator ONCE, at the beginning of your program.
	srand(0))

	bool debug = true;				//turn this to false before shipping.

	// an if statement is a test.
	// if the test is true, the code block runs.
	// if the test is false, or NOT true, the code block does NOT run.
	// if(test) { codeblock }

	if (debug) cout << "DEBUG MODE IS ON\n";

	cout << "This is the start of Week 3's lecture on \n";
	cout << "\tVariables and Logic!\n";

	if (true) {
		cout << "this line of code will always run\n";
	} // end of if(true)

	if (false) {
		cout << "this line of code will never run\n";
	} // end of if(false)

	if (1 + 1 == 2) {
		cout << "Thank goodness! Math still makes sense.\n";
	} // end of if(1+1)

	if (2 + 2 == 6) {
		cout << "This is bad science.\n";
	} // end of if(2+2)

	if (3 + 6 == 9) {
		cout << "Computers understand exponents!\n";
	} // end of if(3!)

	// Let's talk about variables
	// integers, floats, doubles, characters, strings, and booleans

	// an integer is a whole number, positive or negative, between -2bil and 2bil

	// when creating a variable, specify type, name, and optionally, value. (always assign a value)
	// we are creating a new variable of the type "int", with name "playerScore", with a value of 4550

	int playerScore = 4550;

	// declaring (and defining) the variable, type int, name = playerTwoScore;
	int playerTwoScore = 0;
	// constant variables cannot change their value and must be defined at creation
	const float EARTH_GRAVITY = -9.81f; //acceleration in meters/second"

	cout << "Player 1 score = " << playerScore << ".\n";
	cout << "Player 2 score = " << playerTwoScore << ".\n";
	cout << "Earth's gravity is " << EARTH_GRAVITY << "meters/second.\n";

	// a float is a floating point number accurate to 7 digits.
	// that means 9,999,999 or 0.000001

	// a double is a double-precision floating point number.
	// it's accurate to 22 digits.
	// 9,999,999,999,999,999,999,999
	// we are creating a constant variable of the type double, named PI, with the value of 3.14159265
	const double PI = 3.14159265;

	// a character is a single unicode blah blah blah. one key on your keyboard.
	char answer = 'n';			// this stores the user's input.

	cout << "Would you like to keep playing?\n";	// ask the user a question
	cin >> answer;									//get input from the player

	if (answer == 'y') {							//test the input
		cout << "Hurray! Let's go again.\n";		// print text
	}
	else {
		cout << "Thanks for playing!\n";
		return 0;
	}

	// strings are an array of characters, in an ordered list, one after the other.
	string profName = "Dumbledore";
	string user = "BMO";
	string pass = "videogames";
	string input = "";						//this will store the user's text input

	cout << "What is your username?\n";
	cin >> input;							// for example: input = "BMO"

	if (input == user) {
		cout << "What is your password?\n";
		cin >> input;

		if (input == pass) {
			cout << "Hello BMO! Professor " << profName << " has a question for you.\n";
		}
		else {
			cout << "Wrong password. Nice try, Jake!\n";
		}
	}
	else {
		cout << "Username not recognized.\n";
	}

	//booleans are a variable type that can only be true or false: y/n, on/off, etc.
	bool playerIsAlive = true;
	int score = 0;				//this will keep track of the player's score.

	

	//this is the simplest of loops.
	//it runs as long as the test is true.
	//while(test) { code block }
	while (playerIsAlive) {
		string input;

		//score = score + 5;
		score += 5;			//combined assignment operator.
		//this adds 5 to the value of score.

		if (debug) cout << "score after loop = " << score << ".\n";

		cout << "Are you dead yet?\n";
		cin >> input;

		// build an if statement
		// if player says "yes"
		// make playerIsAlive = false;
		if (input == "yes") {
			playerIsAlive = false;			//this will make the loop stop
			cout << "Welcome to Valhalla!\n";
			cout << "Your score is " << score << ".\n";


		}

		// let's talk about random. 10 minutes is enough time.

		// at the top of your source file.
		// #include <cstdlib>				// for rand and srand()
		// #include <ctime>					// for time(0)


	}
} // this is the end of main()