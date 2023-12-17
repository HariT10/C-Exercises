#include <stdio.h>

//By: Harishan Thilakanathan
//Purpose: diameter, circumference, and area of cirlce
//Date: Saturday, Decemeber 16, 2023

//PROTOTYPE
int diameter(int rad);
int circumference(int rad);
int area(int rad);

//main function
int main(){
    int radius;

    printf("Please enter a Radius: ");
    scanf("%d", &radius);

    int result1 = diameter(radius);
    printf("The Diameter is %d", result1);

    int result2 = circumference(radius);
    printf("\nThe Circumference is %d\n", result2);

    int result3 = area(radius);
    printf("\nThe area is %d\n", result3);

   
}


int diameter(int rad){
    int diameterResult;

    diameterResult = rad * 2;

    return diameterResult;

}


int circumference(int rad){
    int circumferenceResult;

    circumferenceResult = 2 * 3.14 * rad;

    return circumferenceResult;

}

int area(int rad){
    int areaResult;

    areaResult = 3.14 * rad * rad;

    return areaResult;
}
 

