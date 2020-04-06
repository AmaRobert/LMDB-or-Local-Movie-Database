#include "Movie.h"
#include <sstream>
#include <Windows.h>
#include <shellapi.h>

Movie::Movie() : title(""), genre(""), year(0), likes(0), source("") {}

Movie::Movie(const std::string& title, const std::string& genre, int year, double likes, const std::string& source)
	: title(title), genre(genre), year(year), likes(likes), source(source)
{
}

Movie::Movie(const Movie& copy)
	: title(copy.title), genre(copy.genre), year(copy.year), likes(copy.likes), source(copy.source)
{

}

Movie& Movie::operator=(const Movie& copy)
{
	this->title = copy.title;
	this->genre = copy.genre;
	this->year = copy.year;
	this->likes = copy.likes;
	this->source = copy.source;

	return *this;
}
Movie::~Movie()
{
}

std::string Movie::toString()
{
	std::ostringstream printString;
	printString << " Title: " << this->title;
	printString << " Genre: " << this->genre;
	printString << " Year: " << this->year;
	printString << " Likes: " << this->likes;
	printString << " Source: " << this->source;

	return printString.str();
}

bool Movie::operator==(Movie t)
{
	if (this->title == t.title)
		return true;
	return false;
}

void Movie::play()
{
	ShellExecuteA(NULL, NULL, "chrome.exe", this->getSource().c_str(), NULL, SW_SHOWMAXIMIZED);
}

std::vector<string> tokenize(std::string line, char delim)
{
	vector <string> result;
	stringstream s(line);
	string token;
	while (getline(s, token, delim))
	{
		result.push_back(token);
	}
	return result;
}

std::istream& operator>>(std::istream & file, Movie & movie)
{
	string line;
	getline(file, line);

	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 5)
		return file;
	movie.title = tokens[0];
	movie.genre = tokens[1];
	movie.year = stoi(tokens[2]);
	movie.likes = stoi(tokens[3]);
	movie.source = tokens[4];
	return file;

}