#include <iostream>

using namespace std;

class Student {
  protected:
    int rollNo;
  public:
    void getNo(void) {
      cout << "Enter Roll no: ";
      cin >> rollNo;
    }
    void putNo(void) {
      cout << "Roll Number : " << rollNo << endl;
    }
};

class Test : public Student {
  protected:
    float part1, part2;
  public:
    void getMarks(void) {
      cout << "Marks of Part 1: ";
      cin >> part1;
      cout << "Marks of Part 2: ";
      cin >> part2;
    }
    void putMarks(void) {
      cout << "Marks obtained :" << endl;
      cout << "Part1 = " << part1 << endl;
      cout << "Part2 = " << part2 << endl;
    }
};

class Sports {
  protected:
    float score;
  public:
    void getScore(void) {
      cout << "Enter Sports weightage: ";
      cin >> score;
    }
    void putScore(void) {
      cout<<"Sports weightage : " << score << endl;
    }
};

class Result : public Test, public Sports {
  float total;
  public:
    void display(void);
};

void Result::display(void) {
  total = part1 + part2 + score;
  putNo();
  putMarks();
  putScore();
  cout << "Total score : " << total << endl;
}

int main() {
  Result S1;

  S1.getNo();
  S1.getMarks();
  S1.getScore();

  system("cls");
  S1.display();

  return 0;
}
