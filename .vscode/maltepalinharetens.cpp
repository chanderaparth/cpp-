#include <iostream>
#include <stdlib.h>
using namespace std;

class M {
  protected:
    int m;
  public:
    void getM(void);
};

class N {
  protected:
    int n;
  public:
    void getN(void);
};

class P : public M, public N {
  public:
    void display(void);
};

void M :: getM() {
  cout << "Enter value of M: ";
  cin >> m;
}

void N :: getN() {
  cout << "Enter value of N: ";
  cin >> n;
}

void P::display (void) {
  cout << "m = " << m << endl;
  cout << "n = " << n << endl;
  cout << "m * n = " << m * n<< endl;
}

int main() {
  P p;

  p.getM();
  p.getN();

  system("cls");
  p.display();

  return 0;
}