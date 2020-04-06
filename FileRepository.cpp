#include "FileRepository.h"

FileRepository::FileRepository()
{
}

FileRepository::FileRepository(std::string filename)
{
	this->filename = filename;
}

FileRepository::~FileRepository()
{
}
bool FileRepository::addMovie(const Movie& movie)
{
	bool ok = Repository::addMovie(movie);
	this->saveToFile();
	return ok;
}

bool FileRepository::removeMovie(const Movie & movie)
{
	bool ok = Repository::removeMovie(movie);
	this->saveToFile();
	return ok;
}
