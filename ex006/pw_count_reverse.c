#include <unistd.h>

void pw_count_reverse(unsigned int n){
    for (unsigned int i = n; i > 0; i--){
        char c = i + '0';
        write(1, &c, 1);
        write(1, "\n", 1);
    }
    char c = '0';
    write(1, &c, 1);
    write(1, "\n", 1);
}