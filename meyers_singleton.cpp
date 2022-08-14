#include <iostream>

using namespace std;

class A
{
public:
  static A& getInstance();
  compute()

private:
  A();
  A(const A& rhs);
}

A& A::getInstance() {
	static A a;          // Create a static self
	return a;
}

int main()
{
  cout << "hello!" << endl;
}