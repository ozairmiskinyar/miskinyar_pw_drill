char *pw_strncpy(char *dest, char *src, unsigned int n){
    if(src == 0){
        return dest;
    }
    if(dest == 0){
        return 0;
    }
    if(n == 0){
        return dest;
    }
     unsigned int i = 0;
    //int m = (int)n;
    while (i < n  && src[i] != '\0'){
        dest[i] = src[i];
        i++;

    }
    while(i < n ){
        dest[i] = '\0';
        i++;
    }
    return dest;
}