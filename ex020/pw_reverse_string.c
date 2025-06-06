void pw_reverse_string(char *str){
    if(str == 0 || str[0] == '\0'){
        return;
    }
    char *ptr = str;
    int len = 0;
    while(*ptr != '\0'){
        len ++;
        ptr++;
    }
    int index = 0;
while(index < len / 2 ){
    char c = str[index];
    str[index]= str[len - index - 1];
    str[len - index -1] = c;
    index++;
    

    }
}
