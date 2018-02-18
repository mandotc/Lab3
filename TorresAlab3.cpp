// Armando Torres-Cornejo
//CPSC 121 
//<02/12/18>
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//function prototypes  
void drawrec(int, string);
void drawrecf(int, string);
void drawrecword(int, string);
void drawrecwordf(int, string);
void drawtri(string);
void drawtrif(string);
void drawtriword(string);
void drawtriwordf(string);
void drawtridown(string);
void drawtridownf(string);
void drawtriworddown(string);
void drawtriworddownf(string);

void main()
{//creating variables
	int H, W, num;
	string width;
	char rerun, ans;
	//creating program loop
	do {
		//getting info from user 
		cout << "This program prints out shapes" << endl;
		cout << "Which shape would you like to print? ( 1 or 2 )" << endl;
		cout << "1. Rectangle " << endl;
		cout << "2. Triangle " << endl;
		cin >> num;
		//questions for rectangle
		if (num == 1)
		{
			cout << "Would you like to print a word or width?('w' or 'n') " << endl;
			cin >> ans;
			// if rectangle is a number 
			if (ans == 'n')
			{
				cout << "Enter a width" << endl;
				cin >> width;
				cout << "Enter a height" << endl;
				cin >> H;
				cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
				cin >> ans;
				switch (ans)
				{
				case 'f': drawrecf(H, width);
					break;
				case 'c': drawrec(H, width);
					break;
				}
			}
			// if rectangle is a string 
			else if (ans == 'w')
			{
				cout << "Enter a string" << endl;
				cin >> width;
				cout << "Enter a height" << endl;
				cin >> H;
				cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
				cin >> ans;
				switch (ans)
				{
				case 'f': drawrecwordf(H, width);
					break;
				case 'c': drawrecword(H, width);
					break;
				}
			}

		}
		// questions for triangle 
		else if (num == 2)
		{
			cout << "Would you like to print a word or width?('w' or 'n') " << endl;
			cin >> ans;
			// if triangle is a number
			if (ans == 'n')
			{
				cout << "Enter a width" << endl;
				cin >> width;
				cout << "Would you like the triangle to point up or down?('u' or 'd')" << endl;
				cin >> ans;
				//if triangle is pointing up
				if (ans == 'u')
				{
					cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
					cin >> ans;
					switch (ans)
					{
					case 'f': drawtrif(width);
						break;
					case 'c': drawtri(width);
						break;
					}

				}
				//if triangle is pointing down 
				if (ans == 'd')
				{
					cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
					cin >> ans;
					switch (ans)
					{
					case 'f': drawtridownf(width);
						break;
					case 'c': drawtridown(width);
						break;
					}
				}
			}
			//if triangle is a string
			else if (ans == 'w')
			{
				cout << "Enter a string" << endl;
				cin >> width;
				cout << "Would you like the triangle to point up or down?('u' or 'd')" << endl;
				cin >> ans;
				//if triangle is pointing up
				if (ans == 'u')
				{
					cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
					cin >> ans;
					switch (ans)
					{
					case 'f': drawtriwordf(width);
						break;
					case 'c': drawtriword(width);
						break;
					}

				}
				//if triangle is pointing down
				if (ans == 'd')
				{
					cout << "Would you like to print shape to file or cout?('f' or 'c')" << endl;
					cin >> ans;
					switch (ans)
					{
					case 'f': drawtriworddownf(width);
						break;
					case 'c': drawtriworddown(width);
						break;
					}
				}
			}

		}
		//there is an invalid entry 
		else cout << "Invalid Entry-The program will now close" << endl;

		cout << "Would you like to rerun the program? ('y' or 'n')" << endl;
		cin >> rerun;
	} while (rerun == 'y');
}
//end main program

//functions to print shapes
void drawrec(int H, string width)
{
	int W;
	W = stoi(width);
	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void drawrecf(int H, string width)
{
	int W;
	W = stoi(width);
	ofstream file;
	file.open("myshape.txt");
	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			file << "*";
		}
		file << endl;
	}
	file.close();
}

void drawrecword(int H, string width)
{
	int W;
	W = width.length();
	for (int i = 1; i <= H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << width[j];
		}
		cout << endl;
	}
}

void drawrecwordf(int H, string width)
{
	int W;
	W = width.length();
	ofstream file;
	file.open("myshape.txt");
	for (int i = 1; i <= H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			file << width[j];
		}
		file << endl;
	}
	file.close();
}

void drawtri(string width)
{
	int W;
	W = stoi(width);
	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void drawtrif(string width)
{
	int W;
	W = stoi(width);
	ofstream file;
	file.open("myshape.txt");
	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			file << "*";
		}
		file << endl;
	}
	file.close();
}

void drawtriword(string width)
{
	int W;
	W = width.length();
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << width[j];
		}
		cout << endl;
	}
}
void drawtriwordf(string width)
{
	int W;
	W = width.length();
	ofstream file;
	file.open("myshape.txt");
	for (int i = 0; i <= W; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			file << width[j];
		}
		file << endl;
	}
	file.close();
}
void drawtridown(string width)
{
	int W;
	W = stoi(width);
	for (int i = W; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void drawtridownf(string width)
{
	int W;
	W = stoi(width);
	ofstream file;
	file.open("myshape.txt");
	for (int i = W; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			file << "*";
		}
		file << endl;
	}
	file.close();
}

void drawtriworddown(string width)
{
	int W;
	W = width.length();
	for (int i = W; i >= 1; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << width[j];
		}
		cout << endl;
	}
}

void drawtriworddownf(string width)
{
	int W;
	W = width.length();
	ofstream file;
	file.open("myshape.txt");
	for (int i = W; i >= 1; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << width[j];
		}
		cout << endl;
	}
	file.close();
}
