#include<bits\stdc++.h>
#include "calculator.h"
using namespace std;
void menu(){
    cout<<"choose one of the following choices"<<endl;
    cout<<"1-Addition of two numbers"<<endl;
    cout<<"2-Subtraction of two numbers"<<endl;
    cout<<"3-Multiplication of two numbers"<<endl;
    cout<<"4-Division of two numbers"<<endl;
    cout<<"5-Factorial calculation"<<endl;
    cout<<"6-Greatest Common Divisor (GCD) calculation";
    cout<<"7-Least Common Multiple (LCM) calculation"<<endl;
    cout<<"8-Random number generation (within a range)"<<endl;
    cout<<"9-Evaluate the mathematical expression"<<endl;
    int choice;
    cin>>choice;
    double result;
    int number1,number2,number;
    switch (choice)
    {
    case 1:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<addition(number1,number2)<<endl;
        break;
    case 2:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<substraction(number1,number2)<<endl;
        break;
    case 3:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<multipication(number1,number2)<<endl;
        break;
    case 4:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<division(number1,number2)<<endl;
        break;
    case 5:
        cout<<"enter the numbers"<<endl;
        cin>>number;
        cout<<"The result is "<<factorialcalculation(number)<<endl;
        break;
    case 6:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<greatestcommondivisor(number1,number2)<<endl;
        break;
    case 7:
        cout<<"enter the two numbers"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<leastcommonmultiple(number1,number2)<<endl;
        break;
    case 8:
        cout<<"enter the beginning and the end of the range"<<endl;
        cin>>number1>>number2;
        cout<<"The result is "<<randomnumber(number1,number2)<<endl;
        break;
    case 9:
        result = mathematical_expression();
        cout<<"The result is "<<result<<endl;
        break;
    default:
        cout<<"invalid choice"<<endl;
        menu();
        break;
    }
}
int main(){
while(true){
    menu();
    cout<<"do you want to end(y/n)"<<endl;
    char s;
    cin>>s;
    if(tolower(s)=='y'){
        break;
    }else if(tolower(s)!='n'){
        cout<<"invalid choice"<<endl;
    }
}
return 0;
}