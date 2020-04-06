#include "AdminController.h"

AdminController::AdminController(Repository& database)
{
	this->database = &database;
}

AdminController::AdminController(const AdminController & admin) : database{ admin.database }
{
}

AdminController::~AdminController()
{
}

bool AdminController::addMovie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source)
{
	Movie newMovie{ title,  genre, year,  likes,  source };
	return this->database->addMovie(newMovie);
	//auto pt = std::make_unique<UndoAdd>(newMovie, *(this->database));
	//this->vectorash.push_back(std::move(pt));
}

bool AdminController::removeMovie(const std::string& title)
{
	Movie movie{ title,"doesntMatter",0,0,"link" };
	return this->database->removeMovie(movie);
}

std::string AdminController::listAllMovies()
{
	return this->database->toString();
}

bool AdminController::updateMovie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source)
{
	Movie newMovie{ title, genre, year, likes, source };
	//find pos of the movie
	int pos = this->database->find(newMovie);

	if (pos == -1)
	{
		return false;
	}

	Movie& movie = this->database->getElement(pos);

	movie.setGenre(genre);
	movie.setLikes(likes);
	movie.setYear(year);
	movie.setSource(source);
	return true;
}
bool AdminController::increaseLikes(const std::string& title)
{
	Movie newMovie{ title, "s", 1, 1, "link" };
	//find pos of the movie
	int pos = this->database->find(newMovie);

	if (pos == -1)
	{
		return false;
	}

	Movie& movie = this->database->getElement(pos);
	movie.setLikes(movie.getLikes() + 1);
	return true;
}


std::vector<Movie> AdminController::findMoviesByGenre(std::string& genre)
{
	return this->database->getMoviesByGenre(genre);
}
/*
void AdminController::Undo()
{
	if (this->vectorash.size() == 0)
	{
		return;
	}
	auto undo = std::move(this->vectorash[this->vectorash.size() - 1]);
	vectorash.pop_back();
	undo->executeUndo();
}
*/
