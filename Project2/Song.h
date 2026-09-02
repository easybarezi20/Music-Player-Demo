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
	void setName(std::string newName) { name = newName; }
	void setArtist(std::string newArtist) { artist = newArtist; }
	void setNext(Node* newNext) { next = newNext; }
	//getters
	std::string getName() const { return name; }
	std::string getArtist() const { return artist; }
	Node* getNext() const { return next; }

private:
	std::string name;
	std::string artist;
	Node* next;
};

#endif 
