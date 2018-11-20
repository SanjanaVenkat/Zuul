#include <iostream>
#include "rooms.h"
#include <cstring>

using namespace std;

void bathroom() {
  Bathroom* b = new Bathroom();
  cout << "You are in the bathroom" << endl;
  cout << "These are your exits: ";
  cout << b->getEast() << endl;
}

void math() {
  Math* m = new Math();
  cout << "You are in the math room" << endl;
  cout << "These are your exits: ";
  cout << m->getNorth() << " ";
  cout << m->getEast() << " ";
  cout << m->getWest() << endl;
}

void spanish() {
  Spanish* s = new Spanish();
  cout << "You are in the spanish room" << endl;
  cout << "These are your exits: ";
  cout << s->getNorth() << " ";
  cout << s->getWest() << endl;
}

void physics() {
  Physics* p = new Physics();
  cout << "You are in the physics room" << endl;
  cout << "These are your exits: ";
  cout << p->getNorth() << " ";
  cout <<p->getSouth() << " ";
  cout << p->getEast() << endl;
}

void writing() {
  Writing* w = new Writing();
  cout << "You are in the writing room" << endl;
  cout << "These are your exits: ";
  cout << w->getWest() << " ";
  cout << w->getEast() << " ";
  cout << w->getSouth() << endl;
}
void history() {
  History* h = new History();
  cout << "You are in the history room" << endl;
  cout << "These are your exits: ";
  cout << h->getWest() << endl;
}

void one() {
  One* o = new One();
  char response[10];
  cout << "You are in one hall" << endl;
  cout << "These are your exits: ";
  cout << o->getNorth() << " ";
  cout << o->getSouth() << " ";
  cout << o->getEast() << endl;
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
    one();
  }
}

void starting() {
  char response[10];
  Start* s = new Start();
  cout << "You are in room 1-20" << endl;
  cout << "These are your exits: ";
  cout << s->getWest() << endl;
  cout << "Where do you want to go?" << endl;
  cin >> response;
  if (strcmp(response, s->getWest()) == 0) {
    cout << "Exiting west" << endl;
    one();
  }
}

void cafeteria() {
  Cafeteria* c = new Cafeteria();
  cout << "You are in the cafeteria" << endl;
  cout << "These are your exits: ";
  cout << c->getSouth() << " ";
  cout << c->getEast() << " ";
  cout << c->getNorth() << endl;
}

void commons() {
  Commons* c = new Commons();
  cout << "You are in the commons" << endl;
  cout << "These are your exits: ";
  cout << c->getWest() << " ";
  cout << c->getEast() << " ";
  cout << c->getNorth() << endl;
}

void student() {
  Student* s = new Student();
  cout << "You are in the student center" << endl;
  cout << "These are your exits: ";
  cout << s->getWest() << " ";
  cout << s->getNorth() << endl;
}

void win() {
  Win* w = new Win();
  cout << "You are in the winning room" << endl;
  cout << "These are your exits: ";					  
  cout << w->getEast() << endl;
}

void gym() {
  Gym* g = new Gym();
  cout << "You are in the gym" << endl;
  cout << "These are your exits: ";
  cout << g->getSouth() << " ";
  cout << g->getEast() << " ";
  cout << g->getWest() << endl;
}

void art() {
  Art* a = new Art();
  cout << "You are in the art room" << endl;
  cout << "These are your exits: ";
  cout << a->getEast() << " ";
  cout << a->getSouth() << " ";
  cout << a->getWest() << endl;
}

void chemistry() {
  Chemistry* c = new Chemistry();
  cout << "You are in the chemistry room" << endl;
  cout << "These are your exits: ";
  cout << c->getSouth() << " ";
  cout << c->getWest() << endl;
}


int main() {
  starting();
  return 0;
}
