#pragma once
#include "Repository.h"
class FileRepository : public Repository
{
protected:
	std::string filename;
public:
	FileRepository();
	FileRepository(std::string filename);
	~FileRepository();

	virtual bool addMovie(const Movie& movie) override;

	//removes a movie from the list
	virtual bool removeMovie(const Movie& movie) override;

	virtual void openFile() = 0;
	virtual void saveToFile() = 0; //pure virtual
	virtual void loadFromFile() = 0; //pure virtual
};