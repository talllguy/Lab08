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

float largest(float numbers[10]);
float average(float numbers[10]);
float smallest(float numbers[10]);


int main()
{
	float largestNum(0), averageNum(0), smallestNum(0); // variables that returns will be stored in
	float numbers[10]; // declare numbers array with 'elements' (10) positions
	cout << "This program determines the largest, smallest, and average numbers\n"
		 << "in an array. Enter 10 numbers to store in the array, below.\n";
	
	for (int i = 0; i < 10; i++) // loop to fill array
	{
		cout << "Position " << (i + 1) << ": "; // display the iterator + 1 since it begins as 0
		while ((!(cin >> numbers[i]))) //detects errors in input
		{
			cin.clear();     // Clear the error flags
			cin.ignore(100, '\n');    // Remove unwanted characters from buffer
			cout << "\aInput Error. Please enter a number only.\n" // if error, sound the alarm
				 << "Position " << (i + 1) << ": ";
		}
	}

	cout << "\nExcellent. Your inputs are:\n";
	cout << "| "; // first separator for clarity
	for (int i = 0; i < 10; i++) // test loop to output variables in positions
	{
		cout << numbers[i] << " | "; // put formatted separator in
	}
	
	cout << endl; // break in output
	
	largestNum = largest(numbers);
	averageNum = average(numbers);
	smallestNum = smallest(numbers);

	cout << "The largest number in your array is ........... " << largestNum << endl;
	cout << "The average of each number in your array is ... " << averageNum << endl;
	cout << "The smallest number in your array is .......... " << smallestNum << endl;

	
	return 0;
}

float largest(float numbers[10])
{
	int d(0);
	for (int j=1; j < 10; j++)
	{
		if (numbers[j] > numbers[d])
			d = j;
	}
	return numbers[d];
}

float average(float numbers[10])
{
	float sum(0), average(0); // define variables
	for (int i = 0; i < 10; i++)
	{
		sum += numbers[i];
	}
	average = (sum / 10);
	return average;
}

float smallest(float numbers[10])
{
	int d(0);
	for (int j=1; j < 10; j++)
	{
		if (numbers[j] <= numbers[d])
			d = j;
	}
	return numbers[d];
}