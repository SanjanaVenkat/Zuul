#include <iostream>

using namespace std;

//put parent class here later


class Bathroom {
 public:
  // void setEast();
  char* getEast();
 private:
  char east[100];

};

class Math {
 public:
  char* getWest();
  char* getNorth();
  char* getEast();
 private:
  char north[100];
  char west[100];
  char east[100];
};


class Spanish {
 public:
  char* getWest();
  char* getNorth();
 private:
  char west[100];
  char north[100];
};


class Physics {
 public:
  char* getNorth();
  char* getSouth();
  char* getEast();
 private:
  char north[100];
  char south[100];
  char east[100];
};

class Writing {
 public:
  char* getWest();
  char* getEast();
  char* getSouth();
 private:
  char south[100];
  char east[100];
  char west[100];
};


class History {
 public:
  char* getWest();
 private:
  char west[100];
};

class One {
 public:
  char* getNorth();
  char* getSouth();
  char* getEast();
 private:
  char north[100];
  char south[100];
  char east[100];
};


class Start {
 public:
  char* getWest();
 private:
  char west[100];
};

class Cafeteria {
 public:
  char* getSouth();
  char* getEast();
  char* getNorth();
 private:
  char south[100];
  char east[100];
  char north[100];
};

class Commons {
 public:
  char* getWest();
  char* getEast();
  char* getNorth();
 private:
  char west[100];
  char east[100];
  char north[100];
};

class Student {
 public:
  char* getWest();
  char* getNorth();
 private:
  char west[100];
  char north[100];
};

class Win {
 public:
  char* getEast();
 private:
  char east[100];
};

class Gym {
 public:
  char* getSouth();
  char* getEast();
  char* getWest();
 private:
  char south[100];
  char east[100];
  char west[100];
};

class Art {
 public:
  char* getEast();
  char* getSouth();
  char* getWest();
 private:
  char east[100];
  char south[100];
  char west[100];
};

class Chemistry {
 public:
  char* getSouth();
  char* getWest();
 private:
  char south[100];
  char west[100];
};


class Objects {
 public:
  char* getCalc();
  char* getMap();
  char* getFood();
  char* getBack();
  char* getPaint();
  char* getNone();
 private:
  char calc[100];
  char map[100];
  char food[100];
  char back[100];
  char paint[100];
  char none[100];
};
