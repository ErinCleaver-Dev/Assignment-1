#include "CalculateShapes.h"
#include <math.h>       // access hypot


double CalculateShapes::triCal(double x, double y) {			//Function to Calculate Hypotenuse of the Triangle and return the hypotenuse
	double triHypo;
	triHypo = hypot(x, y);
	return triHypo;
}
double CalculateShapes::trapCal(double b1, double b2, double h) {	//Function to Calculate area of a Trapezoid and return the area
	double area;
	area = (b1 + b2) * h / 2;
	return area;
}
double CalculateShapes::rectCal(double w, double h, double l) {		//Function to Calculate volume of a Rectangle and return the volume
	double v;
	v = l * h * w;
	return v;
}
