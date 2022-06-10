#include<iostream>
using namespace std;


int factorial(int a)
{
    int fact =1;
    for(int i = 1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;


}
int main()
{
    int n,r;
    int num = factorial(n);
    int mul = factorial(r)*factorial(n-r);
    int ans = num/mul;
    cout<<"the factorial of"<<n <<" "<<r<<"is" <<ans;
}