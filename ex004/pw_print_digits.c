#include <unistd.h>

void pw_print_digits(void){
    write(1, "0123456789\n", 11);
}