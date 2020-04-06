#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Tema.h"
#include "Repository.h"
#include "AdminController.h"
#include "UserController.h"
#include <QListWidget>

class Tema : public QMainWindow
{
	Q_OBJECT

public:
	Tema(AdminController admin, UserController user, QWidget *parent = Q_NULLPTR);

private:
	Ui::TemaClass ui;
	AdminController admin;
	UserController user;

private:
	void populate();

private slots:
	void addMovie();
	void deleteMovie();
	void updateMovie();
	void filter();
	void add();
	void play();
	void deleteW();
	void show1();
};
