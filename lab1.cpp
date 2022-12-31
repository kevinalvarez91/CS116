#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	char run;
	while(run != 'N')
	{
		int side1, side2, side3;
		float sum, area; 

		cout << "Enter a side1 of a tringle: ";
		cin >> side1;

		cout << endl << "Enter side2 of a triangle: ";
		cin >> side2;

		cout << endl << "Enter side3 of a triangle: ";
		cin >> side3;

		sum = side1 + side2 + side3;
		area = sqrt(sum * (sum - side1) * (sum - side2) * ( sum - side3));

		if (side1 == side2 && side2 == side3)
		{
			cout << "The triangle is a equalatoral";
			cout << endl << "The area is " << area; 
		}
		else if ( side1 == side2 || side2 == side3 || side1 == side3)
		{
			cout << "The triangle is a Isocoloise";
			cout << endl << "The area is " << area; 
		}
		else if ( side1 < 0 || side2 < 0 || side3 <0)
		{
			cout << "There is a invalid integer";
		}
		else if ( side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2)
		{
			cout << "Sorry that is not a triangle";

		}
		else
		{
			cout << "The triangle is a Scalene";
			cout << endl << "The area is " << area; 
		}
		cout << endl << "Do you wish to run again? (Y/N)";
		cin >> run;
	}






	return (0);
}
