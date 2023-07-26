#include <iostream>
#include "calculator.h"

void calculator::calculate(){

    switch(symbol){
        case'+': cout << " = " << sum(num1, num2) << endl;
            break;
        case'*': cout << " = " << multi(num1, num2) << endl;
            break;
        case'/': cout << " = " << division(num1, num2) << endl;
            break;
        case'-': cout << " = " << subtraction(num1, num2) << endl;
            break;
        default: cout << " entered incorrect type!" << endl;
            break;
    }
}


void calculator::get_input(){
    cout << "enter input.(example 3 * 5)" << endl;
    cin >> num1 >> symbol >> num2;
    cout << num1 << " " << symbol << " " << num2;
}


int calculator::sum(int a, int b){
    return a+b;
}

int calculator::multi(int a, int b){
    return (float)a*b;
}

float calculator::division(int a, int b){
    return a/(float)b;
}

int calculator::subtraction(int a, int b){
    return a - b;
}
