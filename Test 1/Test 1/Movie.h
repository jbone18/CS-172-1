#pragma once
#include<iostream>
#include<string>
using namespace std;
// I affirm that all code given below was written solely by me, Jordan Bone, and that any help I recieved adhereed to the rules stated for this exam.

class Movie
{
private:
	string Title;
	string Genre;
	int ShowTime = 0;
public:

	//No-arg constructor that sets default variables for the Title, Genre and Show time.
	Movie()
	{
		Title = "Lord of the Rings. ";
		Genre = "Action. ";
		ShowTime = 0;
	}

	//Allows these values to be manipulated.
	Movie(string t, string g, int st)
	{
		Title = t;
		Genre = g;
		ShowTime = st;
	}

	//These methods will return their specific variable.
	string GetTitle() { return Title; }
	string GetGenre() { return Genre; }
	int GetShowTime() { return ShowTime; }
};


