#include "Tema.h"
#include <qstring.h>
#include <sstream>
#include <qerrormessage.h>

Tema::Tema(AdminController admin, UserController user, QWidget *parent)
	: admin{ admin }, user{ user }, QMainWindow(parent)
{
	this->admin = admin;
	this->user = user;
	ui.setupUi(this);
	this->populate();
	QObject::connect(this->ui.addButton, &QPushButton::clicked, this, &Tema::addMovie);
	QObject::connect(this->ui.deleteButton, &QPushButton::clicked, this, &Tema::deleteMovie);
	QObject::connect(this->ui.UpdateButton, &QPushButton::clicked, this, &Tema::updateMovie);
	QObject::connect(this->ui.FilterButton, &QPushButton::clicked, this, &Tema::filter);
	QObject::connect(this->ui.pushButton_7, &QPushButton::clicked, this, &Tema::add);
	QObject::connect(this->ui.nextButton, &QPushButton::clicked, this, &Tema::deleteW);
	QObject::connect(this->ui.playButton, &QPushButton::clicked, this, &Tema::play);
	QObject::connect(this->ui.pushButton, &QPushButton::clicked, this, &Tema::show1);
	this->ui.pushButton_7->setStyleSheet("* {color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"
		"background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 cyan, stop:1 blue);}");
}

void Tema::populate()
{
	this->ui.listAllMovies->clear();
	std::vector<Movie> dataBase = this->admin.getDatabase()->getMovies();
	
	for (auto movie : dataBase)
	{
		
		this->ui.listAllMovies->addItem(movie.toString().c_str());
		
	}
}

void Tema::addMovie()
{	
	std::string title = this->ui.titleLine->text().toStdString();
	std::string genre = this->ui.genreLine->text().toStdString();
	int year = std::stoi(this->ui.yearLine->text().toStdString());
	double likes = std::stod(this->ui.likesLine->text().toStdString());
	std::string source = this->ui.sourceLine->text().toStdString();
	this->ui.titleLine->clear();
	this->ui.genreLine->clear();
	this->ui.yearLine->clear();
	this->ui.likesLine->clear();
	this->ui.sourceLine->clear();

	this->admin.addMovie(title, genre, year, likes, source);
	this->populate();

}

void Tema::deleteMovie()
{
	std::string title = this->ui.titleLine->text().toStdString();
	this->ui.titleLine->clear();
	this->admin.removeMovie(title);
	this->populate();

}

void Tema::updateMovie()
{
	std::string title = this->ui.titleLine->text().toStdString();
	std::string genre = this->ui.genreLine->text().toStdString();
	int year = std::stoi(this->ui.yearLine->text().toStdString());
	double likes = std::stod(this->ui.likesLine->text().toStdString());
	std::string source = this->ui.sourceLine->text().toStdString();
	this->ui.titleLine->clear();
	this->ui.genreLine->clear();
	this->ui.yearLine->clear();
	this->ui.likesLine->clear();
	this->ui.sourceLine->clear();

	this->admin.updateMovie(title, genre, year, likes, source);
	this->populate();

}
void Tema::filter()
{
	std::string genre = this->ui.genreLine->text().toStdString();
	this->ui.genreLine->clear();
	std::vector<Movie> nush = this->admin.findMoviesByGenre(genre);
	this->ui.listAllMovies->clear();
	for (auto movie : nush)
	{

		this->ui.listAllMovies->addItem(movie.toString().c_str());
	}

}
std::vector<string> token(std::string line, char delim)
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
void Tema::add()
{
	auto movies = this->ui.listAllMovies->selectedItems();
	std::string movieString = movies[0]->text().toStdString();
	std::vector<string> movieS = token(movieString, ' ');
	std::string title = movieS[2];
	std::string genre = movieS[4];
	int year = std::stoi(movieS[6]);
	double likes = std::stod(movieS[8]);
	std::string source = movieS[10];
	Movie movie{ title,genre,year,likes,source };
	this->user.addToWatchList(movie);

	std::vector<Movie> wishList = this->user.getWatchList()->getMovies();
	this->ui.listWishlist->clear();
	for (auto movie : wishList)
	{

		this->ui.listWishlist->addItem(movie.toString().c_str());

	}




}
void Tema::play()
{
	auto movies = this->ui.listAllMovies->selectedItems();
	std::string movieString = movies[0]->text().toStdString();
	std::vector<string> movieS = token(movieString, ' ');
	std::string title = movieS[2];
	std::string genre = movieS[4];
	int year = std::stoi(movieS[6]);
	double likes = std::stod(movieS[8]);
	std::string source = movieS[10];
	Movie movie{ title,genre,year,likes,source };
	movie.play();
}
void Tema::deleteW()
{
	auto movies = this->ui.listAllMovies->selectedItems();
	std::string movieString = movies[0]->text().toStdString();
	std::vector<string> movieS = token(movieString, ' ');
	std::string title = movieS[2];
	this->user.removeFromWatchList(title);

	std::vector<Movie> wishList = this->user.getWatchList()->getMovies();
	this->ui.listWishlist->clear();
	for (auto movie : wishList)
	{

		this->ui.listWishlist->addItem(movie.toString().c_str());

	}
}

void Tema::show1()
{
	QWidget *widget = new QWidget;
	QListWidget *list = new QListWidget;
	QHBoxLayout *box = new QHBoxLayout;

	std::vector<Movie> dataBase = this->user.getWatchList()->getMovies();

	for (auto movie : dataBase)
	{

		list->addItem(movie.toString().c_str());

	}
	box->addWidget(list);
	widget->setLayout(box);
	widget->show();

}