//Fernando ROSA
//Assigment CPP-1
//Calculate data for a clipped cone

#include <iostream>
#include <cmath>	//For sqrt
using namespace std;

int main()
{
	//Variable declaretion
	const double PI = 3.14159;
	double height = 3.91;
	double radius1 = 4;
	double radius2 = 5.75;
	double rTotal = radius2 - radius1;
	double slantHeight;
	double surfaceArea;
	double volume;
	double pRadius1 = pow(radius1, 2);
	double pRadius2 = pow(radius2, 2);

	//Calculates the slant height.
	slantHeight = sqrt((height * height) + rTotal * rTotal);
	
	//Calculates the surface area.
	surfaceArea = PI *(pRadius1 + pRadius1 + (radius1 + radius2) * slantHeight);

	//Calculates the volume.
	volume = PI * height / 3 * (pRadius1 + radius1 * radius2 + pRadius1);

	//Displlays the values 
	cout << "Fernando Rosa\n" << endl;
	cout << "Radius 1:\t" << radius1 << endl;
	cout << "Radius 2:\t" << radius2 << endl;
	cout << "Height:\t\t" << height << endl;
	cout << "Slant Height:\t" << slantHeight << endl;
	cout << "Surface Area:\t" << surfaceArea << endl;
	cout << "Volume:\t\t" << volume << endl;

	system("pause");
	return 0;
}

/******************************************************
 Fernando Rosa

Radius 1:       4
Radius 2:       5.75
Height:         3.91
Slant Height:   4.28376
Surface Area:   231.745
Volume:         225.2
Press any key to continue . . .
 
 *******************************************************/