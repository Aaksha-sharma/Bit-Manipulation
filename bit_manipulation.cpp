#include<iostream>
using namespace std;
int getbit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}
int setbit(int n , int pos)
{
    return (n|(1<<pos));
}
int clearbit(int n, int pos)
{
    int mask=~(1<<pos);        //taking 1's compliment with~
    return (n & mask);
}
int updatebit(int n, int pos, int value)        //clear & set bit
{
    int mask = ~(1<<pos);
    n = n & mask;                           //position from where we have cleared bit
    return (n|(value<<pos));
}
int togglebit(int n, int pos)           //bitwise xor b/w n and mask toggle the pos bit
{
    return (n xor (1<<pos));
}
int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
    cout<<togglebit(5,1)<<endl;
}