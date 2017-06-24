#include<iostream>
#include<string>

using namespace std;
int* doubleCapacity(const int* list, int size);


//Question 1: 11.1 - Analyze Input
int main1()
{
	//These intialize the values of x and y.
	int y = 0;
	int *x = NULL;

	//This assign the value of x to be equal to that of y.
	x = &y;

	int num;
	int sum = 0;
	double average = 0;
	int numAvg = 0;

	//This allows the user to set the size of the array.
	cout << "How many numbers do you want to enter? " << endl;
	cin >> num;

	//This sets the array size for x and y equal to the number entered by the user.
	x = new int[num];

	//This loops as many times as the user entered
	for (int i = 0; i < num; i++)
	{
		//Enter a value for each array postion
		cout << "Please enter a number. " << endl;
		cin >> x[i];
	}

	//This sums up the values entered by the user
	for (int i = 0; i < num; i++)
	{
		sum += x[i];
	}

	average = sum / num;

	//This will compare each value entered by the user to the average of the values.
	for (int i = 0; i < num; i++)
	{
		if (x[i] > average)
		{
			//Everytime a number is above the average this counter will increase by 1.
			numAvg++;
		}
	}

	cout << "The average of the numbers entered is " << average << endl;

	cout << "There are " << numAvg << " numbers above the average number. " << endl;

	cin >> num;
	return 0;
}


//Question 2: 11.3 - Increase Array Size
int main2()
{
	//Creates an array with a size of 4.
	const int size = 4;
	int list[size] = { 2, 4, 6, 8 };

	//The value, *arrayDoubled" will be assigned the values returned from the array in the function int* doubleCapcity(const int* list, int size)
	int *arrayDoubled = doubleCapacity(list, size);

	//This will output each value in the array, arrayDoubled
	for (int i = 0; i < (size * 2); i++)
	{
		cout << arrayDoubled[i] << endl;
	}

	int num;
	cin >> num;
	return 0;
}
int* doubleCapacity(const int* list, int size)
{
	//Doubles the size of the array size
	int doubleSize = size * 2;

	//Creates a new array called doubleSize
	int *newarray = new int[doubleSize];
	
	//This will copy the values of list into the new array
	for (int i = 0; i < doubleSize; i++)
	{
		newarray[i] = list[i];

		//Once the array size has been analyzed the remaining positions in the new array, doubleSize will be assigned the value 1.
		for (int i = size; i < doubleSize; i++ )
		{
			newarray[i] = 1;
		}
	}
	return newarray;
}


//Question 3: 11.5 - Find the Smallest Element
int main3()
{
	int smallest;
	const int size = 8;

	int x[size] = { 1, 2, 4, 5, 10, 100,2 ,-22 };
	int *ptr = x;

	for (int i = 0; i <= size; i++)
	{
		if (ptr[i] < ptr[i - 1])
		{
			//Why is this giving a super small value?
			smallest = ptr[i];
			cout << "smallest " << smallest << endl;
		}	
	}

	cin >> smallest;
	return 0;
}


//Question 4: 11.9 - Geometry: THe Rectangle2D class
class Rectangle2D{
private:
	double x;
	double y;
	double height;
	double width;
public:

	//NO-arg constructor that creates a default rectangle.
	Rectangle2D()
	{
		x = 0;
		y = 0;
		height = 1;
		width = 1;
	}
	//Constructor that allows the private variables to be manipulated
	Rectangle2D(double X, double Y, double Height, double Width)
	{
		x = X;
		y = Y;
		height = Height;
		width = Width;
	}
	//These will return the value of x and y
	double getX() const { return x; }
	double getY() const { return y; }

	//These will ask the user to input their own value for x and y.
	double setX() const { return x; }
	double setY() const { return y; }

	//These will return the value for height and width entered by the user
	double getHeight() const { return height;}
	double getWidth() const { return width; }

	//These will ask the user to input the width and height for a rectangle.
	double setHeight() const { return height; }
	double setWidth() const { return width; }

	//This will calculate the area
	double getArea() const { return (height * width); }

	//This will calculate the perimter
	double getPerimeter() const { return (height * 2) + (width * 2); }

	//This determines if the coordinates (x, y) are within the rectangle.
	bool contains(double X, double Y) const
	{
		//I used a guide to find this equation. I would like to sit down with you and understand it better.
		if ((x + width) / 2 > X && (y + height) / 2 > Y)
			return true;
		else
			return false;
	}

	//This determines if the specfied rectangle is inside this rectangle
	bool contains(const Rectangle2D &r) const
	{
	//I had to use a guide online to figure  out how to do this equation. I would like to sit down with you and understand it better.
		if (x + width / 2 > this->x + this->width / 2 && y + height / 2 > this->y + this->width / 2 && x + width / 2 > this->x - this->width / 2 && y + height / 2 > this->y - this->width / 2)
			return true;
		else
			return false;
	}

	//This determines if the specified rectangle overlaps with this rectangle.
	bool overlaps(const Rectangle2D &r) const
	{
	//I had to use a guide online to figure  out how to do this equation. I would like to sit down with you and understand it better.
		if ((x + width / 2 > this->x + this->width / 2 && y + height / 2 > this->y + this->width / 2) || (x + width / 2 > this->x - this->width / 2 && y + height / 2 > this->y - this->width / 2))
			return true;
		else
			return false;
	}
};
int mai4n()
{

	//These will allow the setX, sety, setHeight and setWidth methods to be used. However, having these with the given demensions causes the program to crash.

	/*double x;
	double y;
	double height;
	double width;

	cout << "Please enter a value for the coordinates x then y. " << endl;
	cin >> x, y;

	cout << "Please enter a value for the height then width of a rectangle. " << endl;
	cin >> height, width;

	Rectangle2D r2d(x, y, height, width);*/

	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "The area for rectangle 1  is " << r1.getArea() << endl;
	cout << "The perimeter for rectangle 1 is " << r1.getPerimeter() << endl;

	cout << "The results for r1.contains(3, 3) is " << r1.contains(3, 3) << endl;
	cout << "The results for r1.contains(r2) is " << r1.contains(r2) << endl;
	cout << "The results for r1.overlaps(r3) is " << r1.overlaps(r3) << endl;

	//Prevents program from auto-closing.
	int num;
	cin >> num;
	return 0;
}


//Question 5: 11.13 - The Course classwhitworth
//I had help for some of these functions from a friend. He walked me through some of his code inorder to help me figure how to write it.
class Course {
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
public:
	//Constructor that allows the private variables to be manipulated.
	Course(const string& courseName, int capacity)
	{
		numberOfStudents = 0;
		this->courseName = courseName;
		this->capacity = capacity;
		students = new string[capacity];
	}

	string getCourseName() const { return courseName; }

	//This will add a student
	void addStudent(const string& name)
	{
		//If there is room to add a new student, that student will be added.
		if (capacity > numberOfStudents)
		{
			//The students name will be added to the array.
			students[numberOfStudents] = name;
			//The total number of students is increased by one.
			numberOfStudents++;
		}
		else
		{
			//If the capacity is filled, this will double the capacity to make room for new students.
			int newCapacity = capacity * 2;
			//Create a new string that will hold the new students.
			string *newarray = new string[newCapacity];

			//This copys the information of the students to the new array.
			for (int i = 0; i <= capacity; i++)
			{
				newarray[i] = students[i];
				students[capacity] = name;
			}
		}
	}

	//Deconstructor
	~Course()
	{
		//This will delete the student.
		delete[] students;
	}

	//This will drop a student
	void dropStudent(const string& name) 
	{
		//This will loop through each student
		for (int i = 0; i < numberOfStudents; i++)
		{
			//If the student's name is found this loop will run.
			if (name == students[i])
			{
				//This will remove the position that held the last student and put the previous and next student next to each other in order.
				while (i < numberOfStudents)
				{
					students[i] = students[i + 1];
					i++;
				}
			}
			//This will remove the students name in space of nothing.
			students[numberOfStudents] = "";
			//This will decrease the total number of students in the class.
			numberOfStudents--;
		}
			
	}		

	string* getStudents() const { return students; }
	int getNumberOfStudents() const { return numberOfStudents; }

	//This will remove all stduents from the course.
	void clear() 
	{
		for (int i = 0; i <= capacity; i++)
		{
			//For each student in the array, substitue their name for a blank space.
			students[i] = "";
		}
	}
};
int main5()
{
	Course co("Biology", 3);
	string *students = co.getStudents();

	//Add these three students.
	co.addStudent("Jordan");
	co.addStudent("Jared");
	co.addStudent("Elizabeth");

	//Drop the student named "Jordan"
	co.dropStudent("Jordan");

	//This will output the students names in the class.
	cout << "The students int the class are " << endl;
	for (int i = 0; i < co.getNumberOfStudents(); i++)
	{
		cout << students[i] << endl;
	}
	int num;
	cin >> num;
	return 0;
}