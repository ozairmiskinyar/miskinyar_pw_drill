void pw_strip_and_to_uppercase(char *str){
    if(str == 0){
        return;
    }

    int i = 0;
    int j = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[j] = str[i] - 32;
            j++;
            
            
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
                str[j] = str[i];
                j++;

            }
        i++;
    }
 
    str[j] = '\0';
}