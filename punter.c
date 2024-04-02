#include<stdio.h>  
#include<stdlib.h>

void senalar(int a, int b, int *p);

int main(){
    int r,m,n,i;
    printf("deme a: "); scanf("%d", &r);
    printf("deme b: "); scanf("%d", &m);
    n=r;
    printf(" a l b l n \n");
    for(i=0;i<=8;i++){

        senalar(r,m,&n);
        printf(" %i l %i l %i l %p \n",r,m,n,&n); 

    }
    return 0;
}


void senalar(int a, int b, int *p){
    if (*p==a){
        *p=b;
    }else{
        *p=a;
    }
}