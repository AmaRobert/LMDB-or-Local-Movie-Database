#include "UndoAction.h"




UndoAction::UndoAction()
{
}



UndoAction::~UndoAction()
{
}

UndoAdd::UndoAdd(Movie s, Repository &r) : UndoAction{}, addedMovie{ s }, repo{ r }
{
}

void UndoAdd::executeUndo()
{

	//do something
	// toata abordarea ii numai sa apelam functia opusa din repo
	repo.removeMovie(addedMovie);

}

UndoAdd::~UndoAdd()
{
}

UndoRemove::UndoRemove(Movie s, Repository &r) :UndoAction{}, deletedMovie{ s }, repo{ r }
{
}

void UndoRemove::executeUndo()
{
	//same ca la add
	repo.addMovie(deletedMovie);
}

UndoRemove::~UndoRemove()
{
}

//UndoUpdate::UndoUpdate(Song s, Repository & r):UndoAction{}, updatedSong{s}, repo{r}
//{
//	
//}
//
//void UndoUpdate::executeUndo()
//{
//}
//
//UndoUpdate::~UndoUpdate()
//{
//}

