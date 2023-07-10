#include <iostream>
#include <stdlib.h>
using namespace std;

class Student {
  protected:
    int rollNo;
  public:
    void getNo(void);
    void putNo(void);
};

void Student :: getNo() {
  cout << "Enter Roll No: ";
  cin >> rollNo;
}

void Student :: putNo() {
  cout << "Roll Number: " << rollNo <<endl;
}

class Test : public Student {     //first level derivation
  protected:
    float sub1;
    float sub2;
  public:
    void getMarks(void);
    void putMarks(void);
};

void Test :: getMarks() {
  cout << "Enter Subject 1 Marks: ";
  cin >> sub1;
  cout << "Enter Subject 2 Marks: ";
  cin >> sub2;
}

void Test :: putMarks() {
  cout << "Marks in subject1 = " << sub1 << endl;
  cout << "Marks in subject2 = " << sub2 << endl;
}

class Result : public Test {    //second level inheritance
  float total;
  public:
    void display(void);
};

void Result :: display () {
  total = sub1 + sub2;
  putNo();
  putMarks();
  cout << "Total marks = " << total << endl;
}

int main() {
  Result S1;      //Student 1 created

  S1.getNo();
  S1.getMarks();

  system("cls");
  S1.display();

return 0;
}