#include<stdio.h>
#include<math.h>
int main(){
    double area=0.00;
    double radius =0.00;
    const double PI=3.14159;
    double surfaceArea=0.00;
    double volume=0.00;
    
    printf("Enter the radius(r):");
    scanf("%lf",&radius);
  
    area=PI*pow(radius,2);
    surfaceArea = 4*PI*pow(radius, 2);
    volume = (4.0/3.0)*PI*pow(radius, 3);

    printf("Area: %.2lfcm\n",area);
    printf("surface Area: %.2lfcm\n",surfaceArea);
    printf("Volume: %.2lfcm\n",volume);





    return 0;

}