#include "UserController.h"

UserController::UserController(Repository& watchList)
{
	this->watchList = &watchList;
}

UserController::UserController(const UserController & user) : watchList{ user.watchList }
{
}


UserController::~UserController()
{
}

bool UserController::addToWatchList(const Movie& movie)
{
	return this->watchList->addMovie(movie);
}

bool UserController::removeFromWatchList(const std::string& title)
{
	Movie movie{ title,"doesntMatter",0,0,"link" };
	return this->watchList->removeMovie(movie);
}



std::string UserController::listAllMovies()
{
	return this->watchList->toString();
}