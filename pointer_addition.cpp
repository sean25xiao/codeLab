#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::cout << "Hello World!\n";
  vector<int> v = {0,1,2,3,4,5}; // -std=c++11

  vector<int>* p_v = &v;
  int* p_ele = &(v.at(0));  // points to first element in vector v
  
  cout << p_v << endl;
  cout << p_v[0].at(4) << endl;  // Output: 4
  cout << p_v[1].at(4) << endl;  // Point addition: add pointer with an offset of size of vector<int>, output: 2120270023
  
  cout << p_ele << endl;
  cout << p_ele[0] << endl;   // Output: 0
  cout << p_ele[1] << endl;   // Output: 1
  cout << p_ele[2] << endl;   // Output: 5

  int* p_data;
  if (p_data == NULL) {
    cout << "Error: Data is NULL" << endl;
  } else {
    cout << p_data << endl;  // If leave p_data unassigned, the pointer value is 0
  }

  return 0;
}
