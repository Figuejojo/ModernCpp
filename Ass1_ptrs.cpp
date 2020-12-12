#include <iostream>

int Add(int *a, int *b);
void AddVal(int *a,int *b, int *result);
void Swap(int *a, int *b);
void factorial(int *a, int *result);

int main()
{
    using namespace std;
    int num1 = 5;
    int num2 = 10;
    int *ptr = &num1;
    int *ptr2= &num2;

    int result = Add(ptr,ptr2);
    cout << result << endl;

    int total;
    int *res = &total;
    AddVal(ptr,ptr2,res);
    cout << *res << endl;
    
    cout << "A: "<< num1 << " B: " << num2 << endl;
    Swap(ptr,ptr2);
    cout << "A: "<< num1 << " B: " << num2 << endl;

    int fact = 0;
    int *ptrfact = &fact;
    factorial(ptrfact,res);
    cout << total << endl;

    return 0;
}

int Add(int *a,int *b)
{
    return *a+*b;
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void factorial( int *a, int *result)
{
    *result = 1;
    for(int x = *a; x>1; x--)
    {
        *result *= x;
    } 
}