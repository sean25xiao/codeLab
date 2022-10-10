#include <iostream>

class A
{
public:
    virtual void func() {
        printf("hi there\n");
    }
};

int main() {
    A* p = (A*)(nullptr);
    p->func();    // is able to print

    return 0;
}