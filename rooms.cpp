#include <iostream>
#include <cstring>
#include "rooms.h"

using namespace std;

//put the parent class here later

//bathroom exits
char* Bathroom::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
}

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

//history exits
char* History::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
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

//1-20 exits
char* Start::getWest() {
  char w[] = "West";
  strcpy(west, w);
  return west;
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

//winning room exits
char* Win::getEast() {
  char e[] = "East";
  strcpy(east, e);
  return east;
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



//objects
char* Objects::getCalc() {
  char c[] = "Calculator";
  strcpy(calc, c);
  return calc;
}

char* Objects::getMap() {
  char m[] = "Map";
  strcpy(map, m);
  return map;
}

char* Objects::getFood() {
  char f[] = "Food";
  strcpy(food, f);
  return food;
}

char* Objects::getBack() {
  char b[] = "Backpack";
  strcpy(back, b);
  return back;
}

char* Objects::getPaint() {
  char p[] = "Paint";
  strcpy(paint, p);
  return paint;
}

char* Objects::getNone() {
  char n[] = "None";
  strcpy(none, n);
  return none;
}
