#pragma once
#include<iostream>
#include<string>
#include"Movie.h"


using namespace std;

//This needs to be defined outside of the class so it can be used in the array of movieListing.
const int MOVIECOUNT = 11;

class Theater //public Movie
{
private:

	string Name = "Garland"; //Name of the theater
	string Phone = "509-327-2509"; //Phone number of the theater
	int CokePrice = 2; //Price for a soda
	int PopcornPrice = 3; //Price for popcorn

	//This is an array of movie objects.
	Movie movieListing[MOVIECOUNT];
	Movie Genre;

public: 

	//This is a no-arg constructor.
	Theater()
	{
		Name = "Garland";
		Phone = "509-327-2509";
		CokePrice = 2;
		PopcornPrice = 3;
	}

	//This constructor allows these variables to be manipulated.
	Theater(string n, string p)
	{
		Name = n;
		Phone = p;
	}

	void AddMovie(Movie& Movie)  //How do I define this Movie variable? 
	{
		//This will access the variable that was returned on the Movie.h header file.
		Movie.GetTitle(); 
		Movie.GetGenre();
		Movie.GetShowTime();
	}

	string GetMovieForHour(int hour)
	{
		if (hour <= 0)
		{ 
			return "";
		}

		//This should cycle through the list of movies and return "" if there is no movie at a specific time. If there is a movie at the time, the movie title will be returned
		for (int i = 0; i <= MOVIECOUNT; i++)
		{
			if (hour != movieListing[i].GetShowTime())
			{
				return "";
			}
			else
				return movieListing[i].GetTitle();
		}
	}

	//This should cycle through the times that movies of a certain genre are shown. If the genre is being shown then that movie time will be returned. 
	int GetShowTimeForGenre(string Genre)
	{ 
		for (int i = 0; i <= MOVIECOUNT; i++)
		{
			if (Genre == movieListing[i].GetGenre())
			{
				return movieListing[i].GetShowTime();
			}
			else
			{
				return -1;
			}
		}
	}
	//This will return the price of a popcorn
	int GetPopcornPrice() { return PopcornPrice; }
	//This will return the price of a coke.
	int GetCokePrice() { return CokePrice; }

};
