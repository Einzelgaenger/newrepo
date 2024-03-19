#include <stdio.h>

long int oddJobonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else if(n==3){
        return 1;
    }else if(n%2!=0){
        return 1;
    }
    return oddJobonacci(n-1)+oddJobonacci(n-2);
}

int main(){
    int n = 0;
    scanf("%d",&n); getchar();
    int result = oddJobonacci(n);
    printf("%ld\n",result);
    return 0;
}