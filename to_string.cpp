#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct point_t
{
  int x;
  int y;
};

std::string point_t_to_string(const point_t _point)
{
  std::ostringstream os;
  os << "{ Point ";
  os << "x = " << _point.x;
  os << ", y = " << _point.y;
  os << " }";

  return os.str();
}

int main()
{
  point_t p;
  p.x = 1;
  p.y = 2;
  cout << point_t_to_string(p);
  return 0;
}

// Terminal Output:
// { Point x = 1, y = 2 }
