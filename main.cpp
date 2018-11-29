#include <iostream>
#include "rooms.h"
#include <cstring>

using namespace std;


void bathroom();
void math();
void spanish();
void physics();
void writing();
void history();
void one();
void starting();
void cafeteria();
void commons();
void student();
void win();
void gym();
void art();
void chemistry();


void bathroom() {
  //  Bathroom* b = new Bathroom();
  //Objects* o = new Objects();
  char response[10];
  char east[] = "East";
  cout << "You are in the bathroom" << endl;
  cout << "These are your exits: ";
  cout << east << endl;
  //cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    math();
  }
}

void math() {
  //Math* m = new Math();
  //Objects* o = new Objects();
  char response[10];
  char north[] = "North";
  char east[] = "East";
  char west[] = "West";
  cout << "You are in the math room" << endl;
  cout << "These are your exits: ";
  cout << north << " ";
  cout << east << " ";
  cout << west << endl;
  //cout << "Objects in room: ";
  //cout << o->getCalc() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    physics();
  }
  else if(strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    spanish();
  }
  else if(strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    bathroom();
  }
}

void spanish() {
  //Spanish* s = new Spanish();
  //Objects* o = new Objects();
  char response[10];
  char north[] = "North";
  char west[] = "West";
  cout << "You are in the spanish room" << endl;
  cout << "These are your exits: ";
  cout << north << " ";
  cout << west << endl;
  //cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, north)==0) {
      cout << "Exiting north" << endl;
      writing();
    }
  else if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    math();
  }
}

void physics() {
  //  Physics* p = new Physics();
  //Objects* o = new Objects();
  char response[10];
  char north[] = "North";
  char south[] = "South";
  char east[] = "East";
  cout << "You are in the physics room" << endl;
  cout << "These are your exits: ";
  cout << north << " ";
  cout << south << " ";
  cout << east << endl;
  //cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    one();
  }
  else if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    math();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    writing();
  }
}

void writing() {
  //  Writing* w = new Writing();
  // Objects* o = new Objects();
  char response[10];
  char west[] = "West";
  char east[] = "East";
  char south[] = "South";
  cout << "You are in the writing room" << endl;
  cout << "These are your exits: ";
  cout << west << " ";
  cout << east << " ";
  cout << south << endl;
  //cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    physics();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    history();
  }
  else if (strcmp(response, south) == 0) {
  cout << "Exiting south" << endl;
  spanish();
}
}

void history() {
  //  History* h = new History();
  //Objects* o = new Objects();
  char response[10];
  char west[] = "West";
  cout << "You are in the history room" << endl;
  cout << "These are your exits: ";
  cout << west << endl;
  //  cout << "Objects in room: ";
  //cout << o->getMap() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    writing();
  }
}

void one() {
  //  One* o = new One();
  //Objects* ob = new Objects();
  char response[10];
  char north[] = "North";
  char south[] = "South";
  char east[] = "East";
  cout << "You are in one hall" << endl;
  cout << "These are your exits: ";
  cout << north << " ";
  cout << south << " ";
  cout << east << endl;
  //  cout << "Objects in room: ";
  //cout << ob->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    cafeteria();
  }
  else if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    physics();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    starting();
  }
}

void starting() {
  char response[10];
  char west[] = "West";
  //  Start* s = new Start();
  //Objects* o = new Objects();
  cout << "You are in room 1-20" << endl;
  cout << "These are your exits: ";
  cout << west << endl;
  // cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    one();
  }
}

void cafeteria() {
  // Cafeteria* c = new Cafeteria();
  //Objects* o = new Objects();
  char response[10];
  char south[] = "South";
  char east[] = "East";
  char north[] = "North";
  cout << "You are in the cafeteria" << endl;
  cout << "These are your exits: ";
  cout << south << " ";
  cout << east << " ";
  cout << north << endl;
  //cout << "Objects in room: ";
  //cout << o->getFood() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    one();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    commons();
  }
  else if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    gym();
  }
}

void commons() {
  //  Commons* c = new Commons();
  //Objects* o = new Objects();
  char response[10];
  char west[] = "West";
  char east[] = "East";
  char north[] = "North";
  cout << "You are in the commons" << endl;
  cout << "These are your exits: ";
  cout << west << " ";
  cout << east << " ";
  cout << north << endl;
  //  cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    cafeteria();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    student();
  }
  else if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    art();
  }
}

void student() {
  //  Student* s = new Student();
  //Objects* o = new Objects();
  char response[10];
  char west[] = "West";
  char north[] = "North";
  cout << "You are in the student center" << endl;
  cout << "These are your exits: ";
  cout << west << " ";
  cout << north << endl;
  // cout << "Objects in room: ";
  //cout << o->getBack() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    commons();
  }
  else if (strcmp(response, north) == 0) {
    cout << "Exiting north" << endl;
    chemistry();
  }
}

void win() {
  //  Win* w = new Win();
  //Objects* o = new Objects();
  char response[10];
  char east[] = "East";
  cout << "You are in the winning room" << endl;
  cout << "These are your exits: ";					  
  cout << east << endl;
  //  cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    gym();
  }
}

void gym() {
  //  Gym* g = new Gym();
  //Objects* o = new Objects();
  char response[10];
  char south[] = "South";
  char east[] = "East";
  char west[] = "West";
  cout << "You are in the gym" << endl;
  cout << "These are your exits: ";
  cout << south << " ";
  cout << east << " ";
  cout << west << endl;
  //  cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    cafeteria();
  }
  else if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    art();
  }
  else if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    win();
  }
}

void art() {
  //  Art* a = new Art();
  //Objects* o = new Objects();
  char response[10];
  char east[] = "East";
  char south[] = "South";
  char west[] = "West";
  cout << "You are in the art room" << endl;
  cout << "These are your exits: ";
  cout << east << " ";
  cout << south << " ";
  cout << west << endl;
  //  cout << "Objects in room: ";
  //cout << o->getPaint() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, east) == 0) {
    cout << "Exiting east" << endl;
    chemistry();
  }
  else if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    commons();
  }
  else if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    gym();
  }
}

void chemistry() {
  //  Chemistry* c = new Chemistry();
  //Objects* o = new Objects();
  char response[10];
  char south[] = "South";
  char west[] = "West";
  cout << "You are in the chemistry room" << endl;
  cout << "These are your exits: ";
  cout << south << " ";
  cout << west << endl;
  //cout << "Objects in room: ";
  //cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, south) == 0) {
    cout << "Exiting south" << endl;
    student();
  }
  else if (strcmp(response, west) == 0) {
    cout << "Exiting west" << endl;
    art();
  }
}


int main() {
  char calc[] = "Calculator";
  char map[] = "Map";
  char food[] = "Food";
  char paint[] = "Paint";
  char back[] = "Backpack";
  Math* m = new Math();
  m->addObject(calc);
  Bathroom* b = new Bathroom();
  Spanish* s = new Spanish();
  Physics* p = new Physics();
  Writing* w = new Writing();
  History* h = new History();
  h->addObject(map);
  One* o = new One();
  Start* st = new Start();
  Cafeteria* c = new Cafeteria();
  c->addObject(food);
  Commons* co = new Commons();
  Student* stu = new Student();
  stu->addObject(back);
  Win* wi = new Win();
  Gym* g = new Gym();
  Art* a = new Art();
  a->addObject(paint);
  Chemistry* ch = new Chemistry();
  starting();
  return 0;
}
