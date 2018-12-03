#include <iostream>
#include "rooms.h"
#include <cstring>
#include <map>

using namespace std;

void pickupObject(Room* room, vector <Objects*>* inventory) {
  char object[100];
  cout << "What object do you want to pick up?" << endl;
  cin >> object;
  int index = -1;
  vector <Objects*>* objectlist = room->getObjectlist();
  for (int i = 0; i < objectlist->size(); i++) {
    index = i;
    Objects* o = (*objectlist)[i];
    if (strcmp(object, o->getObject()) == 0) {
	break;
      }
  }
    if (index > -1) {
      Objects* removedObject = (*objectlist)[index];
      objectlist->erase(objectlist->begin()+index);
      inventory->push_back(removedObject);
      cout << "Item picked up and removed from room" << endl;
    }
    cout << "Which exit do you want to take? Or pickup/drop off items?" << endl;
}

  void dropoffObject(Room* room, vector <Objects*>* inventory) {
char object[100];
  cout << "What object do you want to drop off?" << endl;
  cin >> object;
  int index = -1;
  vector <Objects*>* objectlist = room->getObjectlist();
  for (int i = 0; i < inventory->size(); i++) {
    index = i;
    Objects* o = (*inventory)[i];
    if (strcmp(object, o->getObject()) == 0) {
        break;
      }
  }
    if (index > -1) {
      Objects* removedObject = (*inventory)[index];
      inventory->erase(inventory->begin()+index);
      objectlist->push_back(removedObject);
      cout << "Item removed from inventory and added to room" << endl;
    }
    cout << "Which exit do you want to take? Or pickup/drop off items?" << endl;
  }
  
void printRoom(Room* room, vector <Objects*>* inventory) {
  cout << "You are in " << room->getType() << endl;
  cout << "Object(s) in room: ";
  vector <Objects*>* objectlist = room->getObjectlist();
  for (int i = 0; i < objectlist->size(); i++) {
    Objects* o = (*objectlist)[i];
    cout << o->getObject() << " ";
  }
  cout << endl;
  cout << "You are carrying: ";
  for (int i = 0; i < inventory->size(); i++) {
    Objects* o = (*inventory)[i];
    cout << o->getObject() << " ";
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
  cout<< "Which exit do you want to take? Or pickup/drop off items?" << endl;
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

  vector <Objects*>* inventory = new vector <Objects*>();
  
  Room* currentRoom = starting;
  printRoom(currentRoom, inventory);
  char response[10];
  char quit[] = "Quit";
  char east[] = "East";
  char west[] = "West";
  char south[] = "South";
  char north[] = "North";
  char pickup[] = "Pickup";
  char dropoff[] = "Dropoff";
  cin >>response;
  while (strcmp(quit, response) != 0) {
    if (strcmp(response, east) == 0 && currentRoom->getEast() != NULL) {
      cout << "Exiting east" << endl;
      currentRoom = currentRoom->getEast();
      printRoom(currentRoom, inventory);
      cin >> response;
    }
   else if (strcmp(response, west) == 0 && currentRoom->getWest() != NULL) {
     cout << "Exiting west" << endl;
     currentRoom = currentRoom->getWest();
       printRoom(currentRoom, inventory);
       cin >> response;
     }
else if (strcmp(response, north) == 0 && currentRoom->getNorth() != NULL) {
  cout << "Exiting north" << endl;
  currentRoom = currentRoom->getNorth();
   printRoom(currentRoom, inventory);
      cin >> response;
 }
else if (strcmp(response, south) == 0 && currentRoom->getSouth() != NULL) {
  cout << "Exiting south" << endl;
  currentRoom = currentRoom->getSouth();
   printRoom(currentRoom, inventory);
   cin >> response;
    }

 else if (strcmp(response, pickup) == 0) {
   pickupObject(currentRoom, inventory);
   cin >> response;
 }
 else if (strcmp(response, dropoff) == 0) {
   dropoffObject(currentRoom, inventory);
   cin >> response;
 }
  }
  return 0;
}
