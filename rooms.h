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

class One {
 public:
  char* getNorth();
  char* getSouth();
  char* getEast();
 private:
  char north[];
  char south[];
  char east[];
};


class Start {
 public:
  char* getWest();
 private:
  char west[];
};

class Cafeteria {
 public:
  char* getSouth();
  char* getEast();
  char* getNorth();
 private:
  char south[];
  char east[];
  char north[];
};

class Commons {
 public:
  char* getWest();
  char* getEast();
  char* getNorth();
 private:
  char west[];
  char east[];
  char north[];
};

class Student {
 public:
  char* getWest();
  char* getNorth();
 private:
  char west[];
  char north[];
};

class Win {
 public:
  char* getEast();
 private:
  char east[];
};

class Gym {
 public:
  char* getSouth();
  char* getEast();
  char* getWest();
 private:
  char south[];
  char east[];
  char west[];
};

class Art {
 public:
  char* getEast();
  char* getSouth();
  char* getWest();
 private:
  char east[];
  char south[];
  char west[];
};

class Chemistry {
 public:
  char* getSouth();
  char* getWest();
 private:
  char south[];
  char west[];
};
