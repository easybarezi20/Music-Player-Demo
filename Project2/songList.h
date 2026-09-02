#ifndef SONGLIST_H
#define SONGLIST_H

#include "Song.h"
#include <string>

class SongList
{
public:
	SongList();

	void queSong(std::string, std::string);
	//void play();
	//void skip();
	void viewPlaylist();
	//void clearList();
	//~SongList();

private:
	Node* first;
	int count;
};

#endif
