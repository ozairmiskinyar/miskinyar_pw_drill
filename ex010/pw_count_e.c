#include <stddef.h>

int pw_count_e(char *str){
    int count = 0;
    int i= 0;
    if (str == 0) {
        return 0; // Handle null pointer case
    }
    while(str[i]!= '\0'){
        if(str[i] == 'e'){
            count++;
            
        }
        i++;
    }
    return count;
}