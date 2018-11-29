#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//put parent class here later


class Objects {
 public:
  void setObject(char o[]);
  char* getObject();
 private:
  char object[100];
};


class Bathroom {
 public:
  Bathroom();
  char* getEast();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char east[100];
vector <Objects*>* objectlist;
};

class Math {
public:
  Math();
  char* getWest();
  char* getNorth();
  char* getEast();
  void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char north[100];
  char west[100];
  char east[100];
  vector <Objects*>* objectlist;
};


class Spanish {
 public:
  Spanish();
  char* getWest();
  char* getNorth();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char west[100];
  char north[100];
  vector <Objects*>* objectlist;
};


class Physics {
 public:
  Physics();
  char* getNorth();
  char* getSouth();
  char* getEast();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char north[100];
  char south[100];
  char east[100];
  vector <Objects*>* objectlist;
};

class Writing {
 public:
  Writing();
  char* getWest();
  char* getEast();
  char* getSouth();
 void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
private:
  char south[100];
  char east[100];
  char west[100];
  vector <Objects*>* objectlist;
};


class History {
 public:
  History();
  char* getWest();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char west[100];
  vector <Objects*>* objectlist;
};

class One {
 public:
  One();
  char* getNorth();
  char* getSouth();
  char* getEast();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char north[100];
  char south[100];
  char east[100];
vector <Objects*>* objectlist;
};


class Start {
 public:
  Start();
  char* getWest();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char west[100];
  vector <Objects*>* objectlist;
};


class Cafeteria {
 public:
  Cafeteria();
  char* getSouth();
  char* getEast();
  char* getNorth();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char south[100];
  char east[100];
  char north[100];
  vector <Objects*>* objectlist;
};

class Commons {
 public:
  Commons();
  char* getWest();
  char* getEast();
  char* getNorth();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char west[100];
  char east[100];
  char north[100];
  vector <Objects*>* objectlist;
};

class Student {
 public:
  Student();
  char* getWest();
  char* getNorth();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char west[100];
  char north[100];
  vector <Objects*>* objectlist;
};

class Win {
 public:
  Win();
  char* getEast();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char east[100];
  vector <Objects*>* objectlist;
};

class Gym {
 public:
  Gym();
  char* getSouth();
  char* getEast();
  char* getWest();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char south[100];
  char east[100];
  char west[100];
  vector <Objects*>* objectlist;
};

class Art {
 public:
  Art();
  char* getEast();
  char* getSouth();
  char* getWest();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char east[100];
  char south[100];
  char west[100];
  vector <Objects*>* objectlist;
};

class Chemistry {
 public:
  Chemistry();
  char* getSouth();
  char* getWest();
   void addObject(char ob[]);
  Objects* deleteObject(char ob[]);
 private:
  char south[100];
  char west[100];
  vector <Objects*>* objectlist;
};

/*
class Objects {
 public:
  void setObject(char o[]);
  char* getObject();
 private:
  char object[100];
};
*/

