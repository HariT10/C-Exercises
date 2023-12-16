#include <stdio.h>

//By: Harishan Thilakanathan
//Purpose:
//Date: Friday, Decemeber 15, 2023

int main(){

    int base;

    printf("Please Enter Any Number That You Would Like the Cube of: ");
    scanf("%d", &base);
    
    int result = cube(base);


    printf("The Cube of %d is %d", base, result);

}

int cube(int base){
    int base;
    int cubedNumber;

    cubedNumber = base * base * base;

    return cubedNumber;

}

