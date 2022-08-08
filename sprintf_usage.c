/*#include <stdio.h>

int main () {
  char str[80];

  sprintf(str, "Value of Pi = ");
  puts(str);

  return 0;
} */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
  char first_name[100];
  char last_name[100];
  int age;
  int salary;
} person;

int num_char(person *p, char *buf) {
  return sprintf(buf, "|%d|%s,%s|%d|%d|", p->id, p->last_name, p->first_name,
                 p->age, p->salary);
}

int print_bar(int n) {
  char temp[400];
  char *ptr = temp;
  for (; n--;) {
    sprintf(ptr++, "-");
  }
  printf("%s\n", temp);
}

int main() {
  person uut1 = {1, "John", "Smith", 40, 31000};
  person uut2 = {2, "Chris", "Wendyslem", 100, 550000};
  char temp[400];
  char temp2[400];
  int res = num_char(&uut1, temp);
  int res2 = num_char(&uut2, temp2);
  int final_res = (res > res2) ? res : res2;
  print_bar(final_res); // print bar which can align with the content string
  printf("%s", temp);
  printf("\n");
  printf("%s", temp2);
  printf("\n");
  print_bar(final_res);
}

/* Output:
------------------------------
|1|Smith,John|40|31000|
|2|Wendyslem,Chris|100|550000|
------------------------------
  */