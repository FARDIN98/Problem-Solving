#include<stdio.h>
void main(){
    int x,y,z,p,q;
    x=10,y=z=3;
    printf("%d\n%d\n%d\n", x,y,z);
    x=(p=2)+(q=8)-(z=5);
    p*=z=x-5;
    printf("%d\n %d\n %d\n", x,z,p);
    q*=x+z+p-2;
    --q;
    --x;
    p++;
    printf("%d\n", q+x-p+2);
    printf("p is %d\n",p);
    if(p==0){
        p/=2;
        printf("%d",p);
    }
    else{
        p=p*2;
        printf("%d",p);
    }
}