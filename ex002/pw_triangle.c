#include <unistd.h>

void pw_triangle(void) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            write(1, "a", 1);
        }
        write(1, "\n", 1);
    }
}