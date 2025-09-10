//wap to find the roots of quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    double a,b,c;
    double discriminent,root1,root2,real_part,img_part;
    printf("Enter co-efficients ofa,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminent=(b*b)-(4*a*c);
    // Roots are real and distinct.
    if(discriminent>0){
        root1=((-b)+sqrt(discriminent))/(2*a);
        root2=((-b)-sqrt(discriminent))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("root1=%.2lf and root2=%.2lf",root1,root2);
    }
    //roots are real and equal.
    else if(discriminent==0){
        root1=root2=(-b)/(2*a);
        printf("Roots are real and equal.\n");
        printf("root1=root2=%.2lf",root1);
    }
    //roots are not real.
    else{
        real_part=(-b)/(2*a);
        img_part=sqrt(-discriminent)/(2*a);
        printf("Roots are complex.\n");
        printf("root1=%.2lf+%.2lf and root2=%.2lf-%.2lf",real_part,img_part,real_part,img_part);

    }
    return 0;
}


