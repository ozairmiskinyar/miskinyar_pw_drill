#include <unistd.h>

void pw_count_to_n(unsigned int n){
     for (unsigned int i = 0; i <= n; i++){
        char c = i + '0';
        write(1, &c, 1);
        write(1, "\n", 1);

     }
}