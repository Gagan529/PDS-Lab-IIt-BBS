#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c;
    printf("enter the coeficeient: ");
    scanf("%f%f%f", &a,&b,&c);
    if(b*b-4*a*c < 0){
    printf("imaginary roots\n");
    }
    else if (b*b-4*a*c == 0){
    float root=(-b/(2*a));
    printf("%f\n",root);}
    else{
        
        float root1= (-b +sqrt(b*b-4*a*c))/(2*a) ;
        float root2= (-b -sqrt(b*b-4*a*c))/(2*a);
        printf("both the roots are = %f %f,\n", root1,root2);
        
    }

    
    return 0;
}