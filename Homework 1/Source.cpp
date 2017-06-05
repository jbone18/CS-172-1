#include<iostream>
#include<string>
#include<ctime>

using namespace std;

/* Question 1: EX01_01

And this is cool

a) CPU
b) RAM (Memory)
c) i, On a Disk
d) v, A binary digit, like 0 or 1
e) Address
f) Eight bits
g) iv, allocates resources like memory to programs that are running
h) ii, is any software that is runs with the support of the operating system

*/
void a();
void b();
void c();

int main()
{
	srand(time(NULL));
// Question 2: EX01_02
// A)
	a();

// B)
	b();
	
// C)
	c();

// D)
	int bookw = 0;
	int boxw = 0;

	//User inputs the value for the box width
	cout << "What do you want the box width to be? " << endl;
	cin >> boxw;

	//User inputs the value for the book width
	cout << "What do you want the book width to be? " << endl;
	cin >> bookw;

	//If the box is evenly divisible by the book width this will be the output
	if (boxw % bookw == 0)
	{
		cout << "The box width is evenly divisible by the book width. " << endl;
	}
	
	//If the box is not evenly divisible by the book this will be the output
	else
	{
		cout << "The box width is not evenly divisible by the book width. " << endl;
	}

// E)
	int chocolate = 0;
	int temp = 0;
	int shelfLife = 0;

	//User inputs the self life of a box of chocolate.
	cout << "What is the shelf life of a box of chocolate? " << endl;
	cin >> chocolate;

	//User inputs the temperature outside.
	cout << "What is the temperature outside? " << endl;
	cin >> temp;

	//If the temperature is greater than 90, decrease the shelf life of chocolate by 4.
	if (temp > 90)
	{
		//decrease the shelf life of chocolate by 4
		shelfLife = chocolate - 4;
		cout << "The shelf life of the chocolate is " << shelfLife << endl;
	}

	//If the temperature is not greater than 90, keep the shelf life of chocolate the same
	else
	{
		cout << "The shelf life of the chocolate is " << chocolate << endl;
	}

//Question 3: EX01_03

// A)

}


void a()
{
	int hasPassedTest = 0;
}

void b()
{
	//Randomized number for x and y from 1 - 99.
	int x = rand() % 100;
	int y = rand() % 100;

	//Run this if statement if x is greater than y
	if (x > y)
	{
		cout << "x: " << x << " is great than y: " << y << endl;
	}

	//Run this if statement if y is greater than x
	else
	{
		cout << "y: " << y << " is great than x: " << x << endl;
	}
}

void c()
{
	int numberOfShares = 0;

	//User inputs a value for number of shares
	cout << "What do you want the number of shares to be? " << endl;
	cin >> numberOfShares;

	//Runs this if statement if the numberOfShares is less than 100
	if (numberOfShares < 100)
	{
		cout << "The number of shares is less than 100. " << endl;
	}

	//Runs this if statement if the numberOfShares is greater than 100
	if (numberOfShares > 100)
	{
		cout << "The number of shares is greater than 100. " << endl;
	}
}

void d()
{

}