void pw_to_uppercase(char *str){
    if(str == 0){
        return;
    }
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] -32;
        }
        i++;
    }
}