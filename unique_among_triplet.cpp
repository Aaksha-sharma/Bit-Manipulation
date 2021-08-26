#include<iostream>
using namespace std;
bool setbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
int getbit(int n, int pos)
{
    return (n | (1<<pos));
}
int unique(int arr[],int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if ( setbit(arr[j],i))
            {   
                sum++;
            }
        }
        if (sum%3!=0)
        {
            result = getbit(result,i);
        }
    }
    return result;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;
    return 0;

}