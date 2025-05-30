#include <unistd.h>
char pw_pair_impair(char *str){

    if (str == NULL) {
        return 'N'; // Return 0 if the input string is null
    } // Return 0 if the input string is null



   int count =0;
   char *alpahbet = str;

    while (*alpahbet != '\0'){
        if((*alpahbet >= 'A' && *alpahbet <= 'Z') || (*alpahbet >= 'a' && *alpahbet <= 'z')){ 
            count++;  /* code */
        }
        alpahbet++;
    }
    return (count % 2 == 0) ? 'P' : 'I';


}






