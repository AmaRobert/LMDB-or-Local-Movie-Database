#include "Repository.h"
#include "Movie.h"
#include <string>

Repository::Repository()
{
	std::vector<Movie> movies;
	this->movies = movies;
}

Repository::Repository(const Repository& watchList)
{
	std::vector<Movie> movies{ watchList.movies };
	this->movies = movies;
}

Repository::~Repository()
{
}

Movie& Repository::getElement(int pos)
{
	return this->movies[pos];
}
std::vector<Movie> Repository::getMoviesByGenre(std::string& genre)
{	
	if (genre == "")
		return this->getMovies();
	std::vector<Movie> dv;
	for (int i = 0; i < this->getSize(); i++)
	{
		if (this->movies[i].getGenre() == genre)
			dv.push_back(this->movies[i]);


	}
	return dv;
}
bool Repository::addMovie(const Movie& movie)
{
	int pos = this->find(movie);
	if (pos == -1)
	{
		this->movies.push_back(movie);
		return true;
	}
	return false;

}

bool Repository::removeMovie(const Movie& movie)
{
	int pos = find(movie);
	if (pos != -1)
	{
		this->movies.erase(movies.begin() + pos);
		return true;
	}
	return false;
}



int Repository::find(const Movie& movie)
{
	for (int i = 0; i < movies.size(); i++)
	{
		Movie m = this->movies[i];
		if (m == movie)
			return i;
	}
	return -1;
}



void Repository::initialiseRepo()
{
	ifstream fin("input.txt");
	if (!fin.is_open())
		return;
	std::string title, genre, source;
	int year;
	double likes;
	while (fin >> title >> genre >> year >> likes >> source)
	{
		this->addMovie(Movie{ title,genre,year,likes,source });
	}
}

std::string Repository::toString()
{
	std::string allMovies;
	for (int i = 0; i < this->getSize(); i++)
	{
		allMovies += this->movies[i].toString();
		allMovies += "\n";

	}
	return allMovies;
}

void Repository::tooFile()
{
	ofstream fout("input.txt");
	for (int i = 0; i < this->getSize(); i++)
	{
		auto m = this->getElement(i);
		fout << m.getTitle() << ' ' << m.getGenre() << ' ' << m.getYear() << ' ' << m.getLikes() << ' ' << m.getSource() << "\n";
	}
}
