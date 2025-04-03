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
int greatestcommondivisor(int num1, int num2){
    if(num2==0){
        return num1;
    }else{
        return(greatestcommondivisor(num2,num1%num2));
    }
}
int leastcommonmultiple(int num1,int num2){
    return(num1*num2/(greatestcommondivisor(num1,num2)));
}
int randomnumber(int start, int end){
    srand(time(0));
    int random = rand() % (end-start+1);
    random+= start;
    return random;
}
double mathematical_expression(){
    string s;
    cout<<"insert the mathematical expression"<<endl;
    cin>>s;
    stack<char>operators;
    deque<char>numbers;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            numbers.push_back(s[i]);
        }else if(s[i]==')'){
            while(operators.top()!='('){
                numbers.push_back(operators.top());
                operators.pop();
            }
            operators.pop();
        }else{
            if(s[i]=='+' || s[i]=='-'){
                while(!operators.empty() && (operators.top()=='*' || operators.top()=='/')){
                    numbers.push_back(operators.top());
                    operators.pop();
                }
            }
            operators.push(s[i]);
        }
    }
    while(!operators.empty()){
        numbers.push_back(operators.top());
        operators.pop();
    }
    int result = 0;
    stack<char>alternate;
    while(!numbers.empty()){
        alternate.push(numbers.back());
        numbers.pop_back();
    }
    stack<double>finalanswers;
    while(!alternate.empty()){
            if(isdigit(alternate.top())){
                finalanswers.push(alternate.top()-'0');
                alternate.pop();
            }else if(alternate.top()=='+'){
                double temp= 0;
                temp += finalanswers.top();
                finalanswers.pop();
                temp+= finalanswers.top();
                finalanswers.pop();
                finalanswers.push(temp);
                alternate.pop();
            }else if(alternate.top()=='-'){
                double temp= -finalanswers.top();
                finalanswers.pop();
                temp+= finalanswers.top();
                finalanswers.pop();
                finalanswers.push(temp);
                alternate.pop();
            }else if(alternate.top()=='*'){
                double temp= 1;
                temp *= finalanswers.top();
                finalanswers.pop();
                temp*= finalanswers.top();
                finalanswers.pop();
                finalanswers.push(temp);
                alternate.pop();
            }else if(alternate.top()=='/'){
                double val1= finalanswers.top();
                finalanswers.pop();
                double val2= finalanswers.top();
                double temp = val2/val1;
                finalanswers.pop();
                finalanswers.push(temp);
                alternate.pop();
            }
    }
    return finalanswers.top();
}