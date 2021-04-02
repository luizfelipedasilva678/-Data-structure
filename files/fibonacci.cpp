#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int fib(int n)
{
    int next  =  1;
    int prev  =  0;

    if(n == 0 || n == 1)
        return n;
    else
        for(int i = 0; i < n; i++)
        {
            cout<<prev<<" "<<next<<" "<<"\n";

            next  =  next + prev;
            prev  =  next - prev;
        }
    return prev;
}

int main(void)
{
    int a = fib(20);
    cout<<a;
}
