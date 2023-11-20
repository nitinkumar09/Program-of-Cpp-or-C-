#include<iostream>
using namespace std;
bool isPossible(int ar[],int n,int p,int mid)
{
    int painterCount = 1;
    int board = 0;
    for(int i= 0;i<n;i++)
    {
        if(ar[i]+board<=mid)
        {
            board +=ar[i];
        }
        else{
            painterCount++;
             if(painterCount>p || board>mid)
             {
                 return false;
             }
            board = 0;
            board+=ar[i];
        }
    }
    return true;
}
int painter_part(int ar[],int n,int p)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        sum = sum +ar[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while(s<=e)
    {
        if(isPossible(ar ,n ,p ,mid))
        {
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
   // int ar[10] = {5,5,5,5};    // ans = 10 (ar,4,2)

  //  int ar[10] = {10,20,30,40};    // ans =  (ar,4,2)
// int ar[10] = {2,1,5,6,2,3};  // ans 11 (ar,6,2)
int ar[10] = {48,90};  //ans 48 (ar,2,2)

    cout<<painter_part(ar,2,2);
}
