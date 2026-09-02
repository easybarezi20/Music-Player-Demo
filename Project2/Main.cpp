/*
	Barezi Morales

	9/1/2026

	linked list music player Demo
*/

#include <iostream>
#include "songList.h"

using namespace std;

int main()
{
	SongList list;


	list.queSong("Novacane", "Frank Ocean");
	list.queSong("Godspeed", "Frank Ocean");
	list.queSong("Nike", "Frank Ocean");
	list.viewPlaylist();

	cout << endl; 
	system("Pause");
	return 0;
}