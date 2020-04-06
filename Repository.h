#pragma once
#include "Movie.h"
#include <vector>
#include <fstream>

using namespace std;
class Repository
{
protected:
	std::vector<Movie> movies;

public:
	//Default constructor
	Repository();

	Repository(const Repository& watchList);
	//Repository& operator=(const Repository& watchList);

	//Default destructor
	~Repository();

	//adds a movie to the list
	virtual bool addMovie(const Movie& movie);

	//removes a movie from the list
	virtual bool removeMovie(const Movie& movie);


	//get all movies
	std::vector<Movie> getMovies() const { return movies; }

	//get all movies by a genre
	std::vector<Movie> getMoviesByGenre(std::string& genre);

	//finds a movie in the repo and returns its position (if found)
	int find(const Movie& movie);

	// get element on a given position
	Movie& getElement(int pos);

	void initialiseRepo();
	std::string toString();
	const int getSize() { return this->movies.size(); }
	void tooFile();
};