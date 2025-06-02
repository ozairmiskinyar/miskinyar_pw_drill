#include <unistd.h>

int pw_casting(float f){
    //changing the int vairable to float
    int int_val = (int)f;
    //changing the float variable to char
    char char_val = (char)f;
    //declarre the variable to puting the decimal number 
    int value;
    float decimal_val = f - int_val;

    if(decimal_val >= 0.5){
        value = int_val + 1;
    }else {
        value = int_val;
    }
    return int_val + char_val + value;
        
    }





