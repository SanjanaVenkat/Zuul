//Sanjana Venkat
//12.3.18
//contains all the information for two classes
#include <iostream>
#include <cstring>
#include "rooms.h"
#include <vector>
#include <map>
#include <iterator>

using namespace std;

//objects class
//sets name of object
void Objects::setObject(char o[]) {
  strcpy(object, o);
}
//returns object name
char* Objects::getObject() {
  return object;
}

//rooms class
//sets name of room
void Room::setType(char t[]) {
  strcpy(type, t);
}
//returns room name
char* Room::getType() {
  return type;
}
//east is assigned '0' using map
//sets east by making pair with int 0 and another room
void Room::setEast(Room* room) {
  exits->insert(make_pair(0, room));
}
//using the int 0, gets exit east from a room if it is a valid exit, else returns null
Room* Room::getEast() {
  map<int, Room*>::iterator it;
  it = exits->find(0);
  if (it != exits->end()) {
    return it->second;
  }
  else {
    return NULL;
  }
}
//west is same as east except for int 1 instead of 0
void Room::setWest(Room* room) {
   exits->insert(make_pair(1, room));
}

Room* Room::getWest() {
  map<int, Room*>::iterator it;
  it = exits->find(1);
  if (it != exits->end()) {
    return it->second;
  }
  else {
    return NULL;
  }
}
//north, same as above except with int 2
void Room::setNorth(Room* room) {
   exits->insert(make_pair(2, room));
}

Room* Room::getNorth() {
  map<int, Room*>::iterator it;
  it = exits->find(2);
  if (it != exits->end()) {
    return it->second;
  }
  else {
    return NULL;
  }
}
//south, same as above except with int 3
void Room::setSouth(Room* room) {
   exits->insert(make_pair(3, room));
}

Room* Room::getSouth() {
   map<int, Room*>::iterator it;
  it = exits->find(3);
  if (it != exits->end()) {
    return it->second;
  }
  else {
    return NULL;
  }
}
//returns list of objects in room
vector <Objects*>* Room::getObjectlist() {
  return  objectlist;
}
//constructor
Room::Room() {
 objectlist = new vector<Objects*>();
 exits = new map<int, Room*>();
}
//to add an object into the room
void Room::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);

  if (objectlist == NULL)
    cout << "NULL objectlist" << endl;
  
  objectlist->push_back(o);
}

//to delete an object from a room
Objects* Room::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }








/*
//math exits
char* Math::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}

char* Math::getEast() {
  char e[] = "East";
  strcpy(east, e);
 return east;
}

char* Math::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

Math::Math(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Math::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Math::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//spanish exits
char* Spanish::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}

char* Spanish::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

Spanish::Spanish(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Spanish::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Spanish::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//physics exits
char* Physics::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}

char* Physics::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* Physics::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;

}

Physics::Physics(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Physics::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Physics::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//writing exits
char* Writing::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

char* Writing::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

char* Writing::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}
Writing::Writing(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Writing::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Writing::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//history exits
char* History::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

History::History(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void History::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* History::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//one hall exits
char* One::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}

char* One::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* One::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

One::One(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void One::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* One::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//1-20 exits
char* Start::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

Start::Start(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Start::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Start::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//cafeteria exits
char* Cafeteria::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* Cafeteria::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

char* Cafeteria::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}

Cafeteria::Cafeteria(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Cafeteria::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Cafeteria::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//commons exits
char* Commons::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

char* Commons::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

char* Commons::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}
Commons::Commons(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Commons::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Commons::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//student center exits
char* Student::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}


char* Student::getNorth() {
  char n[] = "North";
  strcpy(north, n);
  return north;
}
Student::Student(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Student::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Student::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//winning room exits
char* Win::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

Win::Win(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Win::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Win::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//gym exits
char* Gym::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* Gym::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

char* Gym::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

Gym::Gym(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Gym::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Gym::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//art class exits
char* Art::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* Art::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

char* Art::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}
Art::Art(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Art::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Art::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }

//chemistry class exits
char* Chemistry::getSouth() {
  char s[] = "South";
  strcpy(south, s);
  return south;
}

char* Chemistry::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
}

Chemistry::Chemistry(){
  vector <Objects*>* objectlist = new vector<Objects*>();
}

void Chemistry::addObject(char ob[]) {
  Objects* o = new Objects();
  o->setObject(ob);
  objectlist->push_back(o);
}

Objects* Chemistry::deleteObject(char ob[]) {
  int index = -1;
  char item[100];
  cout << "What do you want to pick up from this room?" << endl;
  cin >> item;
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    if (strcmp(o->getObject(), item) == 0) {
      index = i;
      break;
    }
  }
    if (index >= 0) {
    Objects* o = (*objectlist)[index];
    objectlist->erase(objectlist->begin()+index);
    return o;
    }
  else {
    return NULL;
    }
 }


//objects
void Objects::setObject(char o[]) {
  strcpy(object, o);
}

char* Objects::getObject() {
  return object;
}
*/
