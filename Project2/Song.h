#ifndef SONG_H
#define SONG_H

#include <string>

class Node 
{
public:
	// constructors
	Node() : name("Blank"), artist("Blank"), next(nullptr) {}
	Node(std::string newName) : name(newName) , artist("Blank") , next(nullptr) {}
	Node(std::string newName, std::string newArtist) : name(newName) , artist(newArtist) , next(nullptr) {}
	Node(std::string newName, std::string newArtist, Node* newNext) : name(newName), artist(newArtist), next(newNext) {}
	//setters

	//getters


private:
	std::string name;
	std::string artist;
	Node* next;
};

#endif 
