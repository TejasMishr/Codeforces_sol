int f(int x){
    if(x<2) return 1;
    else return f(x-1) + f(x-2);
}