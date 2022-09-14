#include <stdio.h>
#include <math.h>
 int main(){
    int a, b, c, d, q1, q2, q3, q4;

    printf("informe o valor a: ");
    scanf("%d", &a);
    printf("informe o valor b: ");
     scanf("%d", &b);
    printf("informe o valor c: ");
     scanf("%d", &c);
    printf("informe o valor d: ");
     scanf("%d", &d);

     q1 = a * a ;
     q2 = b * b;
     q3 = c * c;
     q4 = d * d;

     if(q3 >= 1000){
        printf("%d",q3);
     }else{
        printf("q1: %d, quadrado: %d\n", a, q1);
        printf("q2: %d, quadrado: %d\n", b, q2);
        printf("q3: %d, quadrado: %d\n", c, q3);
        printf("q4: %d, quadrado: %d\n", d, q4);
     }
 }