int pw_divide(float *a, float *b, float *r){
    
    if(a == 0 || b == 0 || r == 0){
        return 1; 
    }
    if(*b == 0){
        return 1;
    }
    float r_temp = *a / *b;
    
    *r = r_temp;
     return 0;
    

}