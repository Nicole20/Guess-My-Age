// GuessMyAge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	int x, y;

	cout << "I am going to get your age.\nEnter in a four digit number. All four digits must be different."<< endl;
	cin >> x;

	cout << "Rearrange the four digits and enter that number"<< endl;
	cin >> y;

	cout << "Now, I will subtract the two numbers." << endl;

	if (x > y)
	{
		x = x - y;
	}
	else
	{
		x = y - x;
	}

	cout << x << endl;
	Sleep(2000);
	cout<< "Now I will add the digits" << endl;

	y = x / 1000;
	cout << x / 1000 << " + ";
	x = x - (x / 1000) * 1000;
	y += x / 100;
	cout << x / 100 << " + ";
	x = x - (x / 100)*100;
	y += x / 10;
	cout << x / 10 << " + ";
	x = x - (x / 10)*10;
	y += x;
	cout << x<< " = "<< y<< endl;

	Sleep(2000);

	if (y > 9)
	{
		cout << "I will add these digits to get a one digit number"<< endl;
		x = y / 10;
		cout << y / 10 << " + ";
		y = y - (y / 10)*10;
		x += y;
		cout << y << " = " << x<< endl;
		Sleep(2000);
	}

	cout << "Now, add the two last digits of the year you were born in to that number.\nEnter that number" << endl;
	cin >> x;

	cout << "I will subtract this number from this year\n2014 - " << x << " = ";
	y = 2014 - x;
	cout << y << endl;
	Sleep(2000);

	cout << "Now, I will work my magic to guess your age..."<< endl;

	if (y - 1891 > 101)
	{
		y = y - 1991;
	}
	else
	{
		y = y - 1891;
	}
	Sleep(2000);

	cout << "You are " << y << " years old";
	Sleep(5000);

	return 0;
}

