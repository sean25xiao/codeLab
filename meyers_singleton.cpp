#include <iostream>

using namespace std;

class A
{
public:
  static A& getInstance();

  void compute() { num++; };
  int get_num() const { return num; }

private:
  A() {num = 1;};
  A(const A& rhs);

  /*
   *   meyers_singleton.cpp:32:20: error: 'compute' is a private member of 'A'
   *    A::getInstance().compute();
   *
  */
  //void compute() { num++; };  // can't put here
  //int get_num() const { return num; }

  int num;
};

A& A::getInstance() {
	static A a;          // Create a static self
	return a;
}

int main()
{
  cout << "hello!" << endl;

  cout << A::getInstance().get_num() << endl;
  cout << A::getInstance().get_num() << endl;
  A::getInstance().compute();
  cout << A::getInstance().get_num() << endl;
}

// Output:
/*
hello!
1
1
2
*/