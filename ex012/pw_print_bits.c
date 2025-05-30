#include <unistd.h>

/*void pw_print_bits(void){

    char jam [9];
    jam[8] ='\n';
    for(int i = 0; i <= 255; i++)
      for(int j = 7; j>=0; j--){
        if(7 >= i){
            write(1, jam,1);
        }else if (i>0){
            write(1,jam,1);
        }
        write(1, jam, 9);
        


      }
}*/
void pw_print_bits(void) {
    char buffer[9];
    buffer[8] = '\n';
    for (int num = 0; num < 256; num++) {
        // Start with mask for MSB (10000000)
        unsigned mask = 0x80;
        for (int i = 0; i < 8; i++) {
            // Check if masked bit is set
            buffer[i] = (num & mask) ? '1' : '0';
            // Move mask right for next bit
            mask >>= 1;
        }
        write(1, buffer, 9);
    }
}