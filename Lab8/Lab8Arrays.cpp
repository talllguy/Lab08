/***************************************************************************
COSC 501
Lab 8
Elliott Plack
24 OCT 2013												Due: 29 OCT 2013

Problem: write a C++ program that will perform three functions based off of
	an input of 10 integers into an array.

Algorithm:
	- Declare three function prototypes(float)
	- Main function
		- Declare array numbers[10]
		- Do input checks on the input
		- Set variables equal to called functions
		- Output variables
	- Largest number in array
		- d = 0
		- for (j=1; j < 10; j++)
			- If data[j] > data[d]
			- D = j
		- Return d
	- Average
		- For loop
		- Sum of all elements
		- Divide by number
		- Return result
	- Smallest
		- Opposite of largest
***************************************************************************/

#include <iostream>
using namespace std;

//float largest(float, int);
//float average(float, int);
//float smallest(float, int);
int largest (int, int);

int main()
{
	const int elements(10); // define the number of elements allowed to 10
	float largestNum(0), averageNum(0), smallestNum(0); // variables that returns will be stored in
	float numbers[elements]; // declare numbers array with 'elements' (10) positions
	cout << "This program determines the largest, smallest, and average numbers\n"
		 << "in an array. Enter 10 numbers to store in the array, below.\n";
	for (int i = 0; i < elements; i++) // loop to fill array
	{
		cout << "Position " << (i + 1) << ": "; // display the iterator + 1 since it begins as 0
		cin >> numbers[i];
	}

	cout << "\nExcellent. Your inputs are:\n";

	for (int i = 0; i < elements; i++) // test loop to output variables in positions
	{
		cout << numbers[i];
		if (i < (elements-1)) cout << " | "; // checks whether to put formatted separator in
	}

	largestNum = largest(2, 3);
	//averageNum = average(numbers[elements], elements);
	//smallestNum = smallest(numbers[elements], elements);

	cout << "The largest number in your array is " << largestNum << endl;
	//cout << "The average number in your array is " << averageNum << endl;
	//cout << "The smallest number in your array is " << smallestNum << endl;

	cout << endl;
	return 0;
}

int largest(int numbers[10], int elements)
{
	int d(0);
	for (int j=1; j < elements; j++)
	{
		if (numbers[j] > numbers[d])
			d = j;
	}
	cout << numbers[d];
	return 0;
}