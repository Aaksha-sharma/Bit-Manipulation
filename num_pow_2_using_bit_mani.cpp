#include<iostream>
using namespace std;
bool pow2(int n)
{
    return (n && (n & (n-1))==0);
}
int main()
{
     cout<<pow2(16392);
}