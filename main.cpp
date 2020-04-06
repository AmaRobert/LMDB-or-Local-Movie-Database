#include "Tema.h"
#include <QtWidgets/QApplication>
#include "Repository.h"
#include "AdminController.h"
#include "UserController.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository database{}, watchList{};
	database.initialiseRepo();
	AdminController admin{ database };
	UserController user{ watchList };
	
	Tema w{admin, user };
	w.show();
	return a.exec();
}
