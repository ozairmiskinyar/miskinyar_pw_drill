#include <unistd.h>

void print_str(char *str) {
  int len = 0;
  while (str[len] != '\0') {
    write(1, &str[len], 1);
    len++;
  }
}

void print_result(char *type, int size) {
  print_str(type);
  char s_c = size + '0';
  write(1, &s_c, 1);
  print_str(" octets\n");
}

void pw_sizeof(void) {
  print_result("char: ", sizeof(char));
  print_result("short: ", sizeof(short));
  print_result("int: ", sizeof(int));
  print_result("long: ", sizeof(long));
  print_result("float: ", sizeof(float));
  print_result("double: ", sizeof(double));
}