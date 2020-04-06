#pragma once
#include "Repository.h"

class UserController
{
private:
	Repository* watchList;
public:
	UserController(Repository& watchList);
	UserController(const UserController& user);
	~UserController();

	Repository* getWatchList() { return this->watchList; }

	std::string listAllMovies();

	bool addToWatchList(const Movie& movie);

	bool removeFromWatchList(const std::string& title);



};