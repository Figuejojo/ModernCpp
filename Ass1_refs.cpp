#include <iostream>

void Add(int a, int b, int &result);
void Swap(int &a, int &b);
void factorial(int a, int &result);

int main()
{
    using namespace std;
    int num1 = 4;
    int num2 = 3;
    int answer = 0;

    Add(num1,num2,answer);
    cout << answer << endl;
    
    cout <<"BSwap: "<< num1 <<" "<<num2<< endl;
    Swap(num1,num2);
    cout <<"ASwap: "<< num1 <<" "<<num2<< endl;

    factorial(num1,answer);
    cout << answer << endl;

    return 0;
}

void Add(int a, int b, int &result)
{
    result = a+b;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void factorial(int a, int &result)
{
    result = 1;
    for(;a>1;a--)
    {
        result *= a;
    }
}
