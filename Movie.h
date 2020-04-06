#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
#include <vector>
using namespace std;
class Movie
{
private:
	std::string title;
	std::string genre;
	int year;
	double likes;
	std::string source;

public:
	//default constructor for a movie
	Movie();

	//constructor with parameters
	Movie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source);

	// copy constructor
	Movie(const Movie& copy);

	//atribution operator

	Movie& operator=(const Movie& copy);

	//destructor
	~Movie();

	// getters
	std::string getTitle() { return this->title; }
	std::string getGenre() { return this->genre; }
	std::string getSource() { return this->source; }

	int getYear() { return this->year; }
	double getLikes() { return this->likes; }

	//setters

	void setTitle(const std::string& title) { this->title = title; }
	void setGenre(const std::string& genre) { this->genre = genre; }
	void setSource(const std::string& source) { this->source = source; }
	void setYear(const int year) { this->year = year; }
	void setLikes(const double likes) { this->likes = likes; }

	bool operator == (Movie t);
	std::string toString();

	friend std::istream& operator>>(std::istream& file, Movie& movie);


	//Plays the current movie: Opes the page to the corresponding source link
	void play();
};