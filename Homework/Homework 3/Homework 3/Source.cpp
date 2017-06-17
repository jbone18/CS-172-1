#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<algorithm>

using namespace std;

//Question 1: 9.2 The Fan 
class Fan
{
	//These values cannot be changed or directly manipulated.
private:
	int speed = 1;	
	bool on = true;
	double radius = 0;

	//Public allows these values to be changed and manipulated.
public:

	Fan() //This is an no-arg constructor, which sets the intial values for Fan
	{
		speed = 1;						
		on = false;
		radius = 5;
	}

	Fan(int s, bool o, double r) //This is a constructor, which allows the private values to be manipulated.		
	{
		speed = 1;
		setSpeed(s);
		radius = r;
		on = o;
	}

	//getSpeed is a method which will return the value of speed.
	int getSpeed() { return speed; }
	void setSpeed(int s) 
	{
		if (s >= 1 && s <= 3) //Keeps the value of speed as 1, 2 or 3.
			speed = s;
	}

	int getRadius() { return radius; }
	void setRadius(int r)
	{
		if (r >= 0)
			radius = r;
	}
	bool getFanOn() { return on; }
};
int main1()
{
	srand(time(NULL));
	int ans = 0;

	//Assigns the value of 3 = speed. 10 = radius.
	Fan fan1(3, true, 10);

	//fan2.speed will out put the speed of 3 ( Fan fan1(3,10) ) for fan1.
	cout << "The fans speed is " << fan1.getSpeed() << endl;
	cout << "The fan is on " << fan1.getFanOn() << endl;			 
	//fan2.speed will out put the speed of 10 ( Fan fan1(3,10) ) for fan1.
	cout << "The radius of the fan is " << fan1.getRadius() << endl;


	//Assigns the value of 2 = speed. 5 = radius.
	Fan fan2(2, false, 5);

	//fan2.speed will out put the speed of 2 ( Fan fan2(2,5) ) for fan2.
	cout << "The fans speed is " << fan2.getSpeed() << endl;
	cout << "The fan is turn off " << fan2.getFanOn() << endl;	
	//fan2.raidus will output the radius of 5 ( Fan fan2(2,5) ) for fan2
	cout << "The fans radius is " << fan2.getRadius() << endl;

	//Prevents the program from auto-ending after running
	cin >> ans;
	return 0;
}


//Question 2: 9.6 Algebra: quadratic equations
class QuadraticEquation
{
private:
	double a = 0;
	double b = 0;
	double c = 0;
public:
	//No-argument constructor 
	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	//Constructor
	QuadraticEquation(double A, double B, double C)
	{
		a = A;
		b = B;
		c = C;
	}

	//These three methods will hold the values inputted by the user for variables a,b and c.
	double getA() { return a; }
	double getB() { return b; }
	double getC() { return c; }

	//This will pass the inputted values of a,b and c into the discriminant equation.
	double getDiscriminant() { 
		return b*b - 4 * a * c; 
	}

	//This will pass the value of the discriminant and a to this equation and return the answer for root 1.
	double getRoot1()
	{
		//If the discriminant is a negative number, return a 0 instead.
		if (getDiscriminant() < 0)
			return 0;
		//Return the value of root 1
		else
			return (-b + (pow(getDiscriminant(), 0.5))) / (2 * a);
	}

	//This will pass the value of the discriminant and a to this equation and return the anser for root 2.
	double getRoot2()
	{
		//If the discriminant is a negative number, return a 0 instead.
		if (getDiscriminant() < 0)
			return 0;
		//Return the value of root 2.
		else
			return (-b - (pow(getDiscriminant(), 0.5))) / (2 * a);
	}
};
int main2()
{
	int a, b, c;
	
	cout << "Please enter three numbers. ";
	cin >> a >> b >> c;
	
	//This will pass the inputted values for a, b and c to the methods above.
	QuadraticEquation qe(a,b,c);

	cout << "The value for root 1 is " << qe.getRoot1() << endl;
	cout << "The value for root 2 is " << qe.getRoot2() << endl;

	int ans = 0;
	cin >> ans; //Prevents program from auto-closing after being ran.
	return 0;
}


//Question 3: 9.11: The EvenNumber class
class EvenNumber
{
private:
	int object = 0;

public:
	//No-arg constructor that initializes the object value to 0
	EvenNumber()
	{ 
		object = 0;
	}
	//Constructor
	EvenNumber(int o)
	{
		//Test the inputted number to see if it is even
		if (o % 2 == 0)
		{
			//Sets the even number to the variable "object
			object = o;
		}
		//If the inputted number isn't even, add one to make it even then assign it to the variable "obejct"
		else {
			object = o + 1;
		}
	}

	double getValue() { return object; }
	double getNext() { return object + 2; }
	double getPrevious() { return object - 2; }
};
int main3() 
{
	int o;

	cout << "Please enter a value for o " << endl;
	cin >> o;

	EvenNumber en(o);

	cout << "The value entered was " << en.getValue() << endl;
	cout << "The next even number is " << en.getNext() << endl;
	cout << "The previous even number is " << en.getPrevious() << endl;
	cin >> o;
	return 0;
}


//Question 4: 10.4: Sort characters in a string
int main4()
{
	int ans;	
	string word;
	char Letter;
	

	cout << "Please enter a word " << endl;
	getline(cin, word);

	//Going through the string character by character.
	for (int i = 0; i < word.length() - 1; i++)
	{ 
		Letter = tolower(word[i]); //Intialize the letter to which ever letter is being looked at.
		int minIndex = i; 

		for (int j = i + 1; j < word.length(); j++)
		{
			if (Letter > tolower(word[j]))
			{
				Letter  = tolower(word[j]);
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			word[minIndex] = tolower(word[i]);
			word[i] = Letter;
		}
	}
		
	cout << "The string sorted alphabetically is " << word << endl;

	cin >> ans;
	return 0;

}


//Question 5: 10.10: The MyInteger class
class MyInteger
{
private:
	int value = 0;
public:

	MyInteger()
	{
		value = 0;
	}
	MyInteger(int v)
	{
		value = v;
	}

	double getValue() { return value; }
	double getValue() const { return value; }

	//The book asks for const functions
	const bool isEven()
	{
		if (value % 2 == 0)
			return value = true;
		else
			return value = false;
	}
	const bool isOdd()
	{
		if (value % 2 == 0)
			return value = false;
		else
			return value = true;
	}
	const bool isPrime()
	{
		//If the number is even, it cannot be prime
		if (value % 2 == 0)
			return value = false;
		//Both 1 and 2 are not prime numbers
		else if (value <= 2)
			return value = false;
		else
		{
			for (int i = 2; i < value; i++)
			{
				return value = true;
				if (value % i == 0)
				{
					return value = false;
				}
			}
		}
	}

	//The book asks for static functions with int
	static bool isEven(int value)
	{
		if (value % 2 == 0)
			return value = true;
		else
			return value = false;
	}
	static bool isOdd(int value)
	{
		if (value % 2 == 0)
			return value = false;
		else
			return value = true;
	} 
	static bool isPrime(int value)
	{
		//If the number is even, it cannot be prime
		if (value % 2 == 0)
			return value = false;
		//Both 1 and 2 are not prime numbers
		else if (value <= 2)
			return value = false;
		else
		{
			for (int i = 2; i < value; i++)
			{
				return value = true;
				if (value % i == 0)
				{
					return value = false;
				}
			}
		}
	}

	//I'm really struggling with understanding the assignment from this point on.

	//I used an online guide from https://www.chegg.com/homework-help/myinteger-class-design-class-named-myinteger-class-contains-chapter-10-problem-10pe-solution-9780133252811-exc
	//I am not trying to cheat, i used these to try and understand what was going on. 
	//My comments are me attempting to explain whats going on with the code.
	static bool isEven(MyInteger Int)
	{
		//This will create a new variable Int which will take a value from getValue and pass it to the method isEven.
		return Int.isEven(Int.getValue());
	}
	static bool isOdd(MyInteger Int)
	{
		//This will create a new variable Int which will take a value from getValue and pass it to the method isOdd.
		return Int.isOdd(Int.getValue());
	}
	static bool isPrimer(MyInteger Int)
	{
		//This will create a new variable Int which will take a value from getValue and pass it to the method isPrime.
		return Int.isPrime(Int.getValue());
	}

	const bool equals(int myinteger)
	{
		//I am unsure as to what this does. I know it checks to see if value is equivalent to myinteger but I'm not sure how myinteger is getting its value.
		return value == myinteger;
	}
	const bool equals(MyInteger Int)
	{
		//This will return true if the value of Int is equal to the value the user submitted... I think.
		return equals(Int.getValue());
	}
	double parseInt(string s)
	{

		//This is a functin that will convert the string into an integer.
		return std::stoi(s);
	}
};
int main()
{
	int ans;
	int v = 0;

	cout << "Please enter a number " << endl;
	cin >> v;

	MyInteger mi(v);


	cout << "You entered the number " << mi.getValue() << endl << endl;

	cout << "Using constant, is the number you entered even? " << mi.isEven() << endl;
	cout << "Using constant, is the number you entered odd? " << mi.isOdd() << endl;
	cout << "Using constant, is the number you entered primse? " << mi.isPrime() << endl << endl;

	cout << "Using static, is the number you entered even? " << mi.isEven(v) << endl;
	cout << "Using static, is the number you entered odd? " << mi.isOdd(v) << endl;
	cout << "Using static, is the number you entered prime? " << mi.isPrime(v) << endl << endl;

	cout << "Using static with MyInteger, is the number you entered even? " << MyInteger::isEven(v) << endl;
	cout << "Using static with MyInteger, is the number you entered odd? " << MyInteger::isOdd(v) << endl;
	cout << "Using static with MyInteger, is the number you entered prime? " << MyInteger::isPrime(v) << endl;

	cout << "Using constant with equals(int), is the number you entered equal to the specified value? " << mi.equals(v) << endl;
	//I'm not sure how to get this to call the equals (MyInteger Int) 
	cout << "Using const with MyInteger, is the number you entered equal to the specified value? " << mi.equals(mi2) << endl;
	
	cout << "Using parseInt, this is the number convereted to an integer. " << mi.parseInt(v) << endl;

	cin >> ans;
	return 0;
}
