#include <iostream>
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

class O {
  protected:
    int o;
  public:
    void getO(void);
};

class P : public M, public N, public O {
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
void O :: getO() {
  cout << "Enter value of o: ";
  cin >> o;
}

void P::display (void) {
  cout << "m = " << m << endl;
  cout << "n = " << n << endl;
  cout << "o = " << o << endl;
  cout << "m * n * o = " << m * n * o<< endl;
}

int main() {
  P p;

  p.getM();
  p.getN();
  p.getO();

  system("cls");
  p.display();

  return 0;
}

