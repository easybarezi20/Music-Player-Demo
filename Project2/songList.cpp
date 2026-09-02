#include "songList.h"
#include <iostream>
#include <string>

using namespace std;

SongList::SongList()
{
	first = nullptr;
	count = 0;
}

void SongList::queSong(string name, string artist)
{
	Node* newNode = new Node(name, artist);
	if (first == nullptr)
	{
		first = newNode;
		return;
	}
	Node* current = first;
	while (current->getNext() != nullptr)
	{
		current = current->getNext();
	}
	current->setNext(newNode);

}

void SongList::viewPlaylist()
{
	if (first == nullptr) cout << "No Songs Queued!" << endl;
}