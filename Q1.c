#include<stdio.h>

int main() {

    float r,v,sa;
    printf("\nEnter radius of sphere :");
    scanf("%f",&r);
    v=(r*r*r*3.14);
    sa=(r*r*3.14*4/3);
    printf("volume of sphere: %f\n surrface : %f\n", v, sa);
    return 0;
}
