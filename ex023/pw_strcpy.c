char *pw_strcpy(char *dest, char *src){
    if(src == 0){
        return dest;
    } if ( dest == 0){
        return 0;
    }
    int i = 0;
    while (src[i] != '\0' ){
        dest[i] = src[i];
        i++;
    }
    dest [i] = '\0';
    return dest;

}