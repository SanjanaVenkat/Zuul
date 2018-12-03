#include <iostream>
#include "rooms.h"
#include <cstring>
#include <map>

using namespace std;


void printRoom(Room* room) {
  cout << "You are in " << room->getType() << endl;
  cout << "Object(s) in room: ";
  vector <Objects*>* objectlist = room->getObjectlist();
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    cout << o->getObject();
  }
  cout << endl;
  cout << "Exits: ";
  if (room->getEast() != NULL) {
    cout << "East ";
  }
  if (room->getWest() != NULL) {
    cout << "West ";
  }
  if (room->getNorth() != NULL) {
    cout << "North ";
  }
  if (room->getSouth() != NULL) {
    cout << "South ";
  }
  cout << endl;
  cout<< "Which exit do you want to take?" << endl;
}


int main() {
  char bathroomc[] = "Bathroom";
  char mathc[] = "Math room";
  char calculatorc[] = "Calculator";
  char spanishc[] = "Spanish room";
  char physicsc[] = "Physics room";
  char writingc[] = "Writing room";
  char historyc[] = "History room";
  char mapc[] = "Map";
  char onec[] = "One hall";
  char startingc[] = "1-20";
  char cafeteriac[] = "Cafeteria";
  char foodc[] = "Food";
  char commonsc[] = "Commons";
  char studentc[] = "Student center";
  char backpackc[] = "Backpack";
  char winc[] = "Winning room";
  char gymc[] = "Gym";
  char artc[] = "Art room";
  char paintc[] = "Paint";
  char chemistryc[] = "Chemistry room";
  
  Room* bathroom = new Room();
  bathroom->setType(bathroomc);
  Room* math = new Room();
  math->setType(mathc);
  math->addObject(calculatorc);
  Room* spanish = new Room();
  spanish->setType(spanishc);
  Room* physics = new Room();
  physics->setType(physicsc);
  Room* writing = new Room();
  writing->setType(writingc);
  Room* history = new Room();
  history->setType(historyc);
  history->addObject(mapc);
  Room* one = new Room();
  one->setType(onec);
  Room* starting = new Room();
  starting->setType(startingc);
  Room* cafeteria = new Room();
  cafeteria->setType(cafeteriac);
  cafeteria->addObject(foodc);
  Room* commons = new Room();
  commons->setType(commonsc);
  Room* student = new Room();
  student->setType(studentc);
  student->addObject(backpackc);
  Room* win = new Room();
  win->setType(winc);
  Room* gym = new Room();
  gym->setType(gymc);
  Room* art = new Room();
  art->setType(artc);
  art->addObject(paintc);
  Room* chemistry = new Room();
  chemistry->setType(chemistryc);
  
  bathroom->setEast(math);
  math->setNorth(physics);
  math->setEast(spanish);
  math->setWest(bathroom);
  spanish->setWest(math);
  spanish->setNorth(writing);
  physics->setNorth(one);
  physics->setSouth(math);
  physics->setEast(writing);
  writing->setWest(physics);
  writing->setEast(history);
  writing->setSouth(spanish);
  history->setWest(writing);
  one->setNorth(cafeteria);
  one->setSouth(physics);
  one->setEast(starting);
  starting->setWest(one);
  cafeteria->setSouth(one);
  cafeteria->setEast(commons);
  cafeteria->setNorth(gym);
  commons->setWest(cafeteria);
  commons->setEast(student);
  commons->setNorth(art);
  student->setWest(commons);
  student->setNorth(chemistry);
  win->setEast(gym);
  gym->setSouth(cafeteria);
  gym->setEast(art);
  gym->setWest(win);
  art->setEast(chemistry);
  art->setSouth(commons);
  art->setWest(gym);
  chemistry->setSouth(student);
  chemistry->setWest(art);

  
  Room* currentRoom = starting;
  printRoom(currentRoom);
  char response[10];
  char quit[] = "Quit";
  char east[] = "East";
  char west[] = "West";
  char south[] = "South";
  char north[] = "North";
  cin >>response;
  while (strcmp(quit, response) != 0) {
    if (strcmp(response, east) == 0 && currentRoom->getEast() != NULL) {
      currentRoom = currentRoom->getEast();
      printRoom(currentRoom);
      cin >> response;
    }
     if (strcmp(response, west) == 0 && currentRoom->getWest() != NULL) {
       currentRoom = currentRoom->getWest();
       printRoom(currentRoom);
       cin >> response;
     }
 if (strcmp(response, north) == 0 && currentRoom->getNorth() != NULL) {
   currentRoom = currentRoom->getNorth();
      printRoom(currentRoom);
      cin >> response;
 }
 if (strcmp(response, south) == 0 && currentRoom->getSouth() != NULL) {
   currentRoom = currentRoom->getSouth();
   printRoom(currentRoom);
   cin >> response;
    }
  }
  return 0;
}
