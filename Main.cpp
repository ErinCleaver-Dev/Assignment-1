*Assignment - 0
*Date - 1/16/21
*
*Purpose - Calculate the hypotenuse of a triangle, area of a trapezoid, and or the volume of a triangle
*
*/

//includes section
#include <iostream>		
#include <math.h>       // access hypot
#include "CalculateShapes.h"



//namespace declartions
using namespace std;

//Global scope variables and constants section

//Input 

//Output

//Function declaration section


//function definition section

int main() {

	CalculateShapes caculateShapes;
	
	double triangleLegX, triangleLegY, hypotenuse, trapBase1, trapBase2, trapHeight, trapArea, rectWidth, rectHeight, rectLength, rectVolume;
	char stopApp, ans;
	
	//Allow the user to acquire multiple outputs 
	do {
		cout << "Requesting figure being calculated" << endl;
		cout << "Triangle - 0" << endl;
		cout << "Trapezoid - 1" << endl;
		cout << "Rectangle - 2" << endl;
		cin >> ans;

		switch (ans) // Execute the correct shape the user is calculating
		{
		case '0':
			
				cout << "Enter X" << endl;		//Prompt user for leg X
				cin >> triangleLegX;			//Get leg X
				while (cin.fail()) {			//If input fails
					cin.clear();				//Clear error flags
					cin.ignore(100, '\n');		//Skip to newline
					cout << "Please enter a number!\n";
					cin >> triangleLegX;
				}
				cout << "Enter Y" << endl;		//Prompt user for leg Y
				cin >> triangleLegY;			//Get leg Y
				while (cin.fail()) {
					cin.clear();
					cin.ignore(100, '\n');
					cout << "Please enter a number!\n";
					cin >> triangleLegY;
				}
				
				hypotenuse = caculateShapes.triCal(triangleLegX, triangleLegY); //Call the function to calculate triangle
				cout << "Hypotenuse is: " << hypotenuse << endl;
			
			break;

		case '1':
			cout << "Enter the base of Trapezoid" << endl;		//Prompt user for b1
			cin >> trapBase1;									//Get b1
			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> trapBase1;
			}

			cout << "Enter the second base" << endl;			//Prompt user for b2
			cin >> trapBase2;									//Get b2

			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> trapBase2;
			}

			cout << "Enter the height" << endl;					//Prompt user for height
			cin >> trapHeight;									//Get height

			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> trapHeight;
			}

			trapArea = caculateShapes.trapCal(trapBase1, trapBase2, trapHeight); //Call the function to calculate trapezoid
			cout << "The area is: " << trapArea << endl;		
			break;
			
		case '2':	
			cout << "Enter the width" << endl;		//Prompt user for width
			cin >> rectWidth;						//Get width

			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> rectWidth;
			}

			cout << "Enter the height" << endl;		//Prompt user for height
			cin >> rectHeight;						//Get height

			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> rectHeight;
			}

			cout << "Enter the length" << endl;		//Prompt user for length
			cin >> rectLength;						//Get length

			while (cin.fail()) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a number!\n";
				cin >> rectLength;
			}

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


