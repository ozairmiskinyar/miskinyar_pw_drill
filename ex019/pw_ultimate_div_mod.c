void pw_ultimate_div_mod(int *a, int *b){
    int div;
    div = *a;
    *a = div / *b;
    *b = div % *b;
}