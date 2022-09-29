// Your Name: Nicole Holt
// Date: 09/27/2022
// Program Title: Cube calculator
// Program Description: Calculates certain functions based off task chosen and side length of a cube.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	// Variable declaration

	int choice;
	double side, perimeter, side_area, surf_area, volume;

	//Program title and description for the user

	cout << "Program Title: Cube calculator" << endl;
	cout << "Program Description: Calculates certain functions based off task chosen and side length of a cube" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1: Perimeter of one side" << endl;
	cout << "2 - task #2: Surface area of one side" << endl;
	cout << "3 - task #3: Surface area of the entire cube" << endl;
	cout << "4 - task #4: Volume of the cube" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl;

	// Output to the screen

	switch (choice)
	{
	case 1:
		cout << "Perform task #1 : Perimeter of one side" << endl << endl;

		cout << "What is the side length of the cube in inches?" << endl;
		cin >> side;
		cout << endl;

		perimeter = side * 4;

		cout << "Side length of the cube: " << side << " inches" << endl;
		cout << "Perimeter of one side: " << perimeter << " inches" << endl;
		break;

	case 2:
		cout << "Perform task #2 : Surface area of one side" << endl << endl;

		cout << "What is the side length of the cube in inches?" << endl;
		cin >> side;
		cout << endl;

		side_area = side * side;

		cout << "Side length of the cube: " << side << " inches" << endl;
		cout << "Surface area of one side: " << side_area << " inches squared" << endl;
		break;

	case 3:
		cout << "Perform task #3 : Surface area of the entire cube" << endl << endl;

		cout << "What is the side length of the cube in inches?" << endl;
		cin >> side;
		cout << endl;

		surf_area = (side * side) * 6;

		cout << "Side length of the cube: " << side << " inches" << endl;
		cout << "Surface area of the entire cube: " << surf_area << " inches squared" << endl;
		break;

	case 4:
		cout << "Perform task #4 : Volume of the cube" << endl << endl;

		cout << "What is the side length of the cube in inches?" << endl;
		cin >> side;
		cout << endl;

		volume = side * side * side;

		cout << "Side length of the cube: " << side << " inches" << endl;
		cout << "Volume of the cube: " << volume << " inches cubed" << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}
