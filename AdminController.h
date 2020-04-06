#pragma once
#include "Repository.h"
#include "UndoAction.h";
#include <vector>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <functional>
class AdminController
{
private:
	Repository* database;

public:
	//default constructor
	AdminController(Repository& database);

	//constructor
	AdminController(const AdminController& admin);

	//destructor
	~AdminController();

	//Add a movie to the database
	bool addMovie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source);


	Repository* getDatabase() { return this->database; }
	//Remove a movie from the database
	bool removeMovie(const std::string& title);

	bool increaseLikes(const std::string& title);

	//Update a movie from the database
	bool updateMovie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source);

	std::vector<Movie> findMoviesByGenre(std::string& genre);
	std::string listAllMovies();

	//void Undo();
};