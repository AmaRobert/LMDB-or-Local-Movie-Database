#pragma once
#include "Movie.h"
#include "Repository.h"
class UndoAction
{
public:
	UndoAction();
	UndoAction(const UndoAction&) = delete;
	UndoAction& operator =(const UndoAction&) = delete;
	
	virtual void executeUndo() = 0;
	virtual ~UndoAction();
};

class UndoAdd :public UndoAction
{
private:
	Movie addedMovie;
	Repository &repo;
public:
	UndoAdd(Movie s, Repository &r);
	UndoAdd(const UndoAdd&) = delete;
	UndoAdd& operator =(const UndoAdd&) = delete;
	void executeUndo() override;
	~UndoAdd();
};
class UndoRemove :public UndoAction
{
private:
	Movie deletedMovie;
	Repository &repo;
public:
	UndoRemove(Movie s, Repository &r);
	UndoRemove(const UndoRemove&) = delete;
	UndoRemove& operator =(const UndoRemove&) = delete;
	void executeUndo() override;
	~UndoRemove();
};
//class UndoUpdate :public UndoAction
//{
//private:
//	Song updatedSong;
//	Repository &repo;
//public:
//	UndoUpdate(Song s, Repository &r);
//	void executeUndo() override;
//	~UndoUpdate();
//};
//

