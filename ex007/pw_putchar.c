#include <unistd.h>

void pw_putchar(char c){
    
    write(1, &c, 1);
    write(1, "\n", 1);
}