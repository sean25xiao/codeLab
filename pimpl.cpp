#include <iostream>

using namespace std;

class B
{
public:
  B(int _num) : num_b(_num) {};
  void print_something() { cout << "This is B" << endl; };
  int get_num_b() const { return num_b; };
private:
  int num_b;
};

class A 
{
public:
  A(int _num) : num_a(_num) {};
  B* get_B() { return p_b; };
  void set_B(B* _p_b) { p_b = _p_b; };
private:
  int num_a;
  B* p_b;
};

int main()
{
  A a(2);
  cout << a.get_B() << endl;
  a.get_B()->print_something();
  cout << a.get_B()->get_num_b() << endl;  // if class B is not initialized, num_b is 139758936

  B b(816);
  a.set_B(&b);
  cout << a.get_B()->get_num_b() << endl;  // output: 816
}