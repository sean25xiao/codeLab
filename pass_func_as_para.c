#include <stdio.h>

void my_print(int num)
{
    printf("%d ", num);
}

void print_array( void (*f) (int), int* array)
{
    for (int i = 0; i < 5; i++) {
        f(array[i]);
    }
    printf("\n");
}

int main()
{
    int array[5] = {0,1,2,3,4};
    print_array(my_print, array);
    return 0;
}