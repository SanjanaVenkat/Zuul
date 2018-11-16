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

