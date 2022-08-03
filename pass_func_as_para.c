#include <stdio.h>
#define ARRAY_SIZE 10

void my_print(int num)
{
    printf("%d ", num);
}

void print_array( void (*f) (int), int* array)
{
    for (int i = 0; i < ARRAY_SIZE; i++) {
        f(array[i]);
    }
    printf("\n");
}

int main()
{
    int array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }
    print_array(my_print, array);
    return 0;
}