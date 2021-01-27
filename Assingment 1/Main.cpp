/*Assignment - 0
*Date - 1/16/21
*Name:  Erin Cleaver, Christian McQeen, Sandra Khoury
*Purpose - Calculate the hypotenuse of a triangle, area of a trapezoid, and or the volume of a triangle
*
*/

//includes section
#include <iostream>		
#include <math.h>       // access hypot
#include "CalculateShape.h"



//namespace declartions
using namespace std;

//Global scope variables and constants section

//Input 

//Output

//Function declaration section


//function definition section

void DisplayMenu();
double ValidateDouble();

int main() {

	CalculateShapes caculateShapes;
	
	double triangleLegX, triangleLegY, hypotenuse, trapBase1, trapBase2, trapHeight, trapArea, rectWidth, rectHeight, rectLength, rectVolume;
	char stopApp, ans;
	

	//Allow the user to acquire multiple outputs 
	do {
		DisplayMenu();
		cin >> ans;

		switch (ans) // Execute the correct shape the user is calculating
		{
		case '0':
			
				cout << "Enter X" << endl;		//Prompt user for leg X
				triangleLegY = ValidateDouble();

				cout << "Enter Y" << endl;		//Prompt user for leg Y
				triangleLegX = ValidateDouble();
				
				hypotenuse = caculateShapes.triCal(triangleLegX, triangleLegY); //Call the function to calculate triangle
				cout << "Hypotenuse is: " << hypotenuse << endl;
			
			break;

		case '1':
			cout << "Enter the base of Trapezoid" << endl;		//Prompt user for b1
			trapBase1 = ValidateDouble();

			cout << "Enter the second base" << endl;			//Prompt user for b2
			trapBase2 = ValidateDouble();								//Get b2

			cout << "Enter the height" << endl;					//Prompt user for height
			trapHeight = ValidateDouble();

			trapArea = caculateShapes.trapCal(trapBase1, trapBase2, trapHeight); //Call the function to calculate trapezoid
			cout << "The area is: " << trapArea << endl;		
			break;
			
		case '2':	
			cout << "Enter the width" << endl;		//Prompt user for width and 
			rectWidth = ValidateDouble();

			cout << "Enter the height" << endl;		//Prompt user for height
			rectHeight = ValidateDouble();

			cout << "Enter the length" << endl;		//Prompt user for length
			rectLength = ValidateDouble();

			rectVolume = caculateShapes.rectCal(rectWidth, rectHeight, rectLength); //Call the function to calculate rectangle

			cout << "The volume is: " << rectVolume << endl;
			break;

		default:
			cout << "Oops! Something went wrong" << endl;	//Used in case of undesired input
			break;
		}
		cout << "Do you wish to continue (Y/N)?" << endl;
		cin >> stopApp;
		
	} while (toupper(stopApp) == 'Y');		//Execute loop until user is finished

	cout << "Please come again!" << endl;

	return 0;
}


// Function to display the menu
void DisplayMenu(){
	cout << "Requesting figure being calculated" << endl;
	cout << "Triangle - 0" << endl;
	cout << "Trapezoid - 1" << endl;
	cout << "Rectangle - 2" << endl;
}


// Function to validate doubles as numbers 
double ValidateDouble() {
	double value = 0;
	cin >> value;


	while (cin.fail()) {			//If input fails
		cin.clear();				//Clear error flags
		cin.ignore(100, '\n');		//Skip to newline
		cout << "Please enter a number!\n";
		cin >> value;
		if (value == 0) {
			cin >> value;
		}
	}

	return value;
}