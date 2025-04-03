#include "calculator.h"
#include<bits\stdc++.h>
using namespace std;
int addition(int num1, int num2){
return(num1+num2);
}
int substraction(int num1, int num2){
    return(num1-num2);
}
int multipication(int num1, int num2){
    return(num1*num2);
}
double division(int num1, int num2){
    return(double(num1)/num2);
}
int factorialcalculation(int num){
    if(num==1 || num==0){
        return 1;
    }else{
        return (num*factorialcalculation(num-1));
    }
}