#include<iostream>
#include<string>
#include<ctime>
#include<cmath>

using namespace std;

/* 
Question 1: EX01_01

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
void d();
void e();

void a3();
void b3();
void c3();
void d3();
void e3();

void a4();
void b4(int n);
void c4(int n);
void d4();
void e4(int n);
void f4(); // function called "add"
void g4(int sum);
void PassByReference(int x);

void a5();
void b5(int number[], int size);
void c5(int number[], int size);
void d5(int number[], int size);

//Question 2
int main()
{
	srand(time(NULL));
	
	int ans = 0; //To prevent the program from auto-closing
	a();
	b();
	c();
	d();
	e();
	cin >> ans;
	return 0;
}

void a()
{
	bool hasPassedTest = true;
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
}

void e()
{
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
}

//Question 3
int main2()

{
	int ans = 0;
	a3();
	b3();
	c3();
	d3();
	cin >> ans; //Prevents program from auto-ending
	return 0;
}

void a3()
{
	double a = 0; //Area of the square
	double l = 0; //Length of the square
	double ld = 0; //Length of the diagonal of the square

	cout << "What do you want the area of the square to be? " << endl;
	cin >> a;

	l = sqrt(a);

	ld = (l * sqrt(2));

	cout << "The length of the diagonal of the square is " << ld << endl;
}

void b3()
{
	//Creates the character type.
	char ans;

	cout << "Do you like hotdogs? (y/n)" << endl;
	cin >> ans;

	//These do not require a special header.
	if (tolower(ans) == 'y') 
	{
		cout << "The user said yes, they do like hotdogs. " << endl;
	}

	//Transfers uppercase letters entered by the user and compares them to both the higher and the lower case version of the letter.
	else if (tolower(ans) == 'n')
	{
		cout << "The user said no, they do not like hotdogs. " << endl;
	}
	
	//If the user doesn't enter the key y or n they will be brought to this screen so you can retype your answer
	else
	{
		cout << "Please enter either y or n to the question, Do you like hotdogs? " << endl;
		cin >> ans;
	}
}

//This? When are these useful?
void c3()
{
	//Tab character
	char tab = '\t';
}

void d3()
{
	string mailingAddress;

	//User assigns a phrase to the string
	cout << "What is your email? " << endl;
	cin >> mailingAddress;

	cout << "Your email is " << mailingAddress << endl;
}

void e3()
{
	string var = ""; //Emtpy string variable
}

//Question 4
int main3()
{
	int ans = 0;
	a4();
	cin >> ans; //Prevents program from auto-closing
	return 0;
}

void a4()
{
	int num = 0;

	cout << "Please enter a number between 1 and 10" << endl;
	cin >> num;

	//If the value is outside the 1 to 10 range then the user will be prompted to enter a new value.
	while (num > 10 || num < 1)
	{
		cout << "You entered " << num << ". Please enter a number between 1 and 10. " << endl;
		cin >> num;
	}

	//Outputs if the user enters a number in the 1 to 10 range.
	cout << "You entered a correct number, good job! " << endl;

	//Calls these functions in order.
	b4(num); //This will transfer the value of num to this new function.
	c4(num); //This will transfer the value of num to this new function.
	d4();
	e4(num); //This will transfer the value of num to this new funciton.
	f4();
}

void b4(int n)//This does not need to be the exact characters as the one it is calling.
{
	int cuben = 0;

	//Raise the variable n (which is whatever the value of num is) to the power of 3
	cuben = pow(n, 3);

	cout << "The number cubed is " << cuben << endl;
}

void c4(int n) //Calls the value of num from the previous function
{
	//do-while loop: The "do" is what the function will do. The "while" is what the parameters need to be for that function to execute.
	do //IF the value of num from the previous function is equal to one of these numbers, go to that loop.
	{
		if (n == 1)
		{
			cout << " * " << endl;
		}
		else if (n == 2)
		{
			cout << " * * " << endl;
		}
		else if (n == 3)
		{
			cout << " * * * " << endl;
		}
		else if (n == 4)
		{
			cout << " * * * * " << endl;
		}
		else if (n == 5)
		{
			cout << " * * * * *" << endl;
		}
		else if (n == 6)
		{
			cout << " * * * * * *" << endl;
		}
		else if (n == 7)
		{
			cout << " * * * * * * * " << endl;
		}
		else if (n == 8)
		{
			cout << " * * * * * * * * " << endl;
		}
		else if (n == 9)
		{
			cout << " * * * * * * * * * " << endl;
		}
		else if (n == 10)
		{
			cout << " * * * * * * * * * * " << endl;
		}
	} while (n > 10 || n < 1); //Set the range for the do-while loop.
}

//@@!!!!!!!!!!!!@@@@@
void d4()
{
	// Goes from 0 to 40 looping each number.
	for (int x = 0; x < 41; x++)
	{
		//ASK!!!!!!!!!!!!
		if (x % 2 == 0)
		{
			cout << x << endl;
		}
	}
}

void e4(int n) //Calls the value of num from the previous function
{
	int num = 0;
	num = n * 2;

	cout << "The integar " << n << " doubled is " << num << endl;
}

//The random numbers are not being generated randomly!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void f4() //function called "add"
{
	//Random number generator from 0 to 99
	int val = rand() % 100;
	int var = rand() % 100;
	int sum = 0;

	sum = val + var;

	cout << "The sum of two random numbers " << val << " + " << var << " = " << sum << endl;
	g4(sum); // This will transfer the value of sum to this new function void g4(int sum). The name of the variable, "sum" does not need to be the same.
}

void PassByReference(int x) //Calls the value of sum from function void g4()
{
	//Adds the value of sum + 1 = x (The new value).
	x++;
	cout << "The valule of sum after adding 1 as a pass by reference is " << x << endl;
}

void g4(int sum) //Calls the value of sum from the function void f4()
{
	//Calls the value of sum (the two random numbers added) and displays it before being modified.
	cout << "The value of sum is " << sum << endl;

	//Passes the value of sum (the two random numbers added) and gives it to the function void PassByReference.
	PassByReference(sum);

	//The original value of the sum will be displayed.
	cout << "The value of sum after being called is " << sum << endl;
}

//Question 5
int main4()
{
	int ans = 0;
	a5();
	cin >> ans; //Prevents the program from auto-closing.
	return 0;
	
}

//Could have I done these in a better fashion?
void a5()
{
	//Sets the number of arrays in this to 5.
	int number[5];

	//Enter a value for the first array.
	cout << "Please enter an integer." << endl;
	cin >> number[0];

	//Enter a value for the second array.
	cout << "Please enter an integer." << endl;
	cin >> number[1];

	//Enter a value for the third array.
	cout << "Please enter an integer." << endl;
	cin >> number[2];

	//Enter a value for the fourth array.
	cout << "Please enter an integer." << endl;
	cin >> number[3];

	//Enter a value for the fifth arrary.
	cout << "Please enter an integer." << endl;
	cin >> number[4];

	//Output the value the user inputted for eacy arrary 1 through 5.
	cout << number[0] << " " << number[1] << " " << number[2] << " " << number[3]<< " " << number[4] << endl;
	b5(number, 5); //This will transfer the the array labeled "number" with "5" of its values to the function void b5(int number[], int size). 
						//These labels "number" and "size" will match with the corresponding one in the other array.
	c5(number, 5);		//'number' = "number" and '5' = "size" for function void c5(int number[], int size)
	d5(number, 5);	    //'number' = "number" and '5' = "size" for function void d5(int number[], int size)
}

void b5(int number[], int size) //Calls the array "number" and the number of values in that array "5".
{
	int sum = 0;

	//Loop through each array from 0 to size (1 to 5).
	for (int i = 0; i < size; i++)
	{
		//Each time this loops it will add the value of the previous array to the new value. 
		sum += number[i];
	}
	
	//Outputs the sum of all the arrays calculated in the above loop.
	cout << "The sum of the array is " << sum << endl;
}

void c5(int number[], int size) //Calls the array "number" and the number of values in that array "5".
{
	//Loops through each value in the array
	for (int i = 0; i < size; i++)
	{
		//This will output what array is being anazlyed and the value attributed to that array. 
		cout << "The value of arrary " << i << " is " << number[i] << endl;
	}
}

void d5(int number[], int size) //Calls the array "number" and the number of values in that array "5".
{
	int num = 0;

	//User inputs a value.
	cout << "Enter a number and see if it matches a number in the array. " << endl;
	cin >> num;

	//Loops through each value in the array.
	for (int i = 0; i < size; i++)
	{
		//If the value entered by the user is equal to one of the values in the array, then this loop will run.
			//Compares the user value "num" to each array value [i].
		if (num == number[i])
		{
			cout << "Your number " << num << " did match the number in the array " << number[i] << endl;
			break;
		}
		//If the "num" value does not match a value in the array, this will run.
		else
		{
			cout << "Your number " << num << " did not match a number in the array. " << endl;
			break;
		}
	}
}