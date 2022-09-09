#include<iostream>
using namespace std;
template <typename t>
int swap_numbers( t& x,t& y)
{
    t f;
    f=x;
    x=y;
    y=f;
    return 0;
}
int main()
{
    int a,b;
    a=10;
    b=33;
    
    swap_numbers(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
