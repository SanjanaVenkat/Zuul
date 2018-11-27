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
  Bathroom* b = new Bathroom();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the bathroom" << endl;
  cout << "These are your exits: ";
  cout << b->getEast() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, b->getEast()) == 0) {
    cout << "Exiting east" << endl;
    math();
  }
}

void math() {
  Math* m = new Math();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the math room" << endl;
  cout << "These are your exits: ";
  cout << m->getNorth() << " ";
  cout << m->getEast() << " ";
  cout << m->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getCalc() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, m->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    physics();
  }
  else if(strcmp(response, m->getEast()) == 0) {
    cout << "Exiting east" << endl;
    spanish();
  }
  else if(strcmp(response, m->getWest()) == 0) {
    cout << "Exiting west" << endl;
    bathroom();
  }
}

void spanish() {
  Spanish* s = new Spanish();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the spanish room" << endl;
  cout << "These are your exits: ";
  cout << s->getNorth() << " ";
  cout << s->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, s->getNorth())==0) {
      cout << "Exiting north" << endl;
      writing();
    }
  else if (strcmp(response, s->getWest()) == 0) {
    cout << "Exiting west" << endl;
    math();
  }
}

void physics() {
  Physics* p = new Physics();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the physics room" << endl;
  cout << "These are your exits: ";
  cout << p->getNorth() << " ";
  cout <<p->getSouth() << " ";
  cout << p->getEast() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, p->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    one();
  }
  else if (strcmp(response, p->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    math();
  }
  else if (strcmp(response, p->getEast()) == 0) {
    cout << "Exiting east" << endl;
    writing();
  }
}

void writing() {
  Writing* w = new Writing();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the writing room" << endl;
  cout << "These are your exits: ";
  cout << w->getWest() << " ";
  cout << w->getEast() << " ";
  cout << w->getSouth() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, w->getWest()) == 0) {
    cout << "Exiting west" << endl;
    physics();
  }
  else if (strcmp(response, w->getEast()) == 0) {
    cout << "Exiting east" << endl;
    history();
  }
  else if (strcmp(response, w->getSouth()) == 0) {
  cout << "Exiting south" << endl;
  spanish();
}
}

void history() {
  History* h = new History();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the history room" << endl;
  cout << "These are your exits: ";
  cout << h->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getMap() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, h->getWest()) == 0) {
    cout << "Exiting west" << endl;
    writing();
  }
}

void one() {
  One* o = new One();
  Objects* ob = new Objects();
  char response[10];
  cout << "You are in one hall" << endl;
  cout << "These are your exits: ";
  cout << o->getNorth() << " ";
  cout << o->getSouth() << " ";
  cout << o->getEast() << endl;
  cout << "Objects in room: ";
  cout << ob->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, o->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    cafeteria();
  }
  else if (strcmp(response, o->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    physics();
  }
  else if (strcmp(response, o->getEast()) == 0) {
    cout << "Exiting east" << endl;
    starting();
  }
}

void starting() {
  char response[10];
  Start* s = new Start();
  Objects* o = new Objects();
  cout << "You are in room 1-20" << endl;
  cout << "These are your exits: ";
  cout << s->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, s->getWest()) == 0) {
    cout << "Exiting west" << endl;
    one();
  }
}

void cafeteria() {
  Cafeteria* c = new Cafeteria();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the cafeteria" << endl;
  cout << "These are your exits: ";
  cout << c->getSouth() << " ";
  cout << c->getEast() << " ";
  cout << c->getNorth() << endl;
  cout << "Objects in room: ";
  cout << o->getFood() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, c->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    one();
  }
  else if (strcmp(response, c->getEast()) == 0) {
    cout << "Exiting east" << endl;
    commons();
  }
  else if (strcmp(response, c->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    gym();
  }
}

void commons() {
  Commons* c = new Commons();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the commons" << endl;
  cout << "These are your exits: ";
  cout << c->getWest() << " ";
  cout << c->getEast() << " ";
  cout << c->getNorth() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, c->getWest()) == 0) {
    cout << "Exiting west" << endl;
    cafeteria();
  }
  else if (strcmp(response, c->getEast()) == 0) {
    cout << "Exiting east" << endl;
    student();
  }
  else if (strcmp(response, c->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    art();
  }
}

void student() {
  Student* s = new Student();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the student center" << endl;
  cout << "These are your exits: ";
  cout << s->getWest() << " ";
  cout << s->getNorth() << endl;
  cout << "Objects in room: ";
  cout << o->getBack() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, s->getWest()) == 0) {
    cout << "Exiting west" << endl;
    commons();
  }
  else if (strcmp(response, s->getNorth()) == 0) {
    cout << "Exiting north" << endl;
    chemistry();
  }
}

void win() {
  Win* w = new Win();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the winning room" << endl;
  cout << "These are your exits: ";					  
  cout << w->getEast() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, w->getEast()) == 0) {
    cout << "Exiting east" << endl;
    gym();
  }
}

void gym() {
  Gym* g = new Gym();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the gym" << endl;
  cout << "These are your exits: ";
  cout << g->getSouth() << " ";
  cout << g->getEast() << " ";
  cout << g->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, g->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    cafeteria();
  }
  else if (strcmp(response, g->getEast()) == 0) {
    cout << "Exiting east" << endl;
    art();
  }
  else if (strcmp(response, g->getWest()) == 0) {
    cout << "Exiting west" << endl;
    win();
  }
}

void art() {
  Art* a = new Art();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the art room" << endl;
  cout << "These are your exits: ";
  cout << a->getEast() << " ";
  cout << a->getSouth() << " ";
  cout << a->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getPaint() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, a->getEast()) == 0) {
    cout << "Exiting east" << endl;
    chemistry();
  }
  else if (strcmp(response, a->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    commons();
  }
  else if (strcmp(response, a->getWest()) == 0) {
    cout << "Exiting west" << endl;
    gym();
  }
}

void chemistry() {
  Chemistry* c = new Chemistry();
  Objects* o = new Objects();
  char response[10];
  cout << "You are in the chemistry room" << endl;
  cout << "These are your exits: ";
  cout << c->getSouth() << " ";
  cout << c->getWest() << endl;
  cout << "Objects in room: ";
  cout << o->getNone() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, c->getSouth()) == 0) {
    cout << "Exiting south" << endl;
    student();
  }
  else if (strcmp(response, c->getWest()) == 0) {
    cout << "Exiting west" << endl;
    art();
  }
}


int main() {
  starting();
  return 0;
}
