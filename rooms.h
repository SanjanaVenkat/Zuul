#include <iostream>

using namespace std;

//put parent class here later


class Bathroom {
 public:
  // void setEast();
  char* getEast();
 private:
  char east[];

};

class Math {
 public:
  char* getWest();
  char* getNorth();
  char* getEast();
 private:
  char north[];
  char west[];
  char east[];
};


class Spanish {
 public:
  char* getWest();
  char* getNorth();
 private:
  char west[];
  char north[];
};


class Physics {
 public:
  char* getNorth();
  char* getSouth();
  char* getEast();
 private:
  char north[];
  char south[];
  char east[];
};

class Writing {
 public:
  char* getWest();
  char* getEast();
  char* getSouth();
 private:
  char south[];
  char east[];
  char west[];
};


class History {
 public:
  char* getWest();
 private:
  char west[];
};
