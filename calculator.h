#include <iostream>
using namespace std;

class calculator{
    public:
        int num1, num2;
        char symbol;

        void calculate();
        void get_input();
        int sum(int a, int b);
        int multi(int a, int b);
        float division(int a, int b);
        int subtraction(int a, int b);
};
