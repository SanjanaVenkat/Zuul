#include <iostream>
#include "rooms.h"

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
int main() {
  bathroom();
  math();
  spanish();
  physics();
  writing();
  history();
  return 0;
}
