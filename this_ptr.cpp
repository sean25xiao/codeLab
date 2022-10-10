#include <iostream>

class A
{
public:
    void func() {
        printf("hi there\n");
    }

    int a;
};

int main() {
    //A* p = (A*)(nullptr);
    A* p = (A*)(0xffffff);
    p->func();    // is able to print
    //p->a = 1;     // segfault

    return 0;
}