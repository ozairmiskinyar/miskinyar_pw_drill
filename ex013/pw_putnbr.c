#include <unistd.h>
void pw_putnbr(int n){
    if(n >= 10){
        pw_putnbr(n/10);
    }
    write(1, &"0123456789"[n % 10], 1);


}