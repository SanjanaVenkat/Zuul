//Sanjana Venkat
//12.3.18
//file that holds class for objects and class for room
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

//objects class, sets the name and gets the name of each object
class Objects {
 public:
  void setObject(char o[]);
  char* getObject();
 private:
  char object[100];
};

//class of all of the rooms
class Room {
  //constructor, can add and delete objects, has objectlist for room, room name, set and get exits
 public:
  Room();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
  vector <Objects*>* getObjectlist();
  void setType(char t[]);
  char* getType();
  Room* getEast();
  Room* getWest();
  Room* getNorth();
  Room* getSouth();
  void setEast(Room* room);
  void setWest(Room* room);
  void setNorth(Room* room);
  void setSouth(Room* room);
  //map, objectlsit, and room name
private:
vector <Objects*>* objectlist;
  char type[100];
  map<int, Room*>* exits;
};


