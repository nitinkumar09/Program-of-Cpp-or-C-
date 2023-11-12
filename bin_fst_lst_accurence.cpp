#include<iostream>
using namespace std;
int firstOcc(int ar[] , int n , int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
     int ans = -1;
    while(start<= end)
    {
        if(ar[mid] ==  key)
        {
            ans  = mid;
            end = mid -1;
        }
        else if(ar[mid] >key)
        {
            end = mid - 1;
        }
        else // (ar[mid]<key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int ar[] , int n , int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
     int ans = -1;
    while(start<= end)
    {
        if(ar[mid] ==  key)
        {
            ans  = mid;
            start = mid+1;
        }
        else if(ar[mid] >key)
        {
            end = mid - 1;
        }
        else // (ar[mid]<key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int ar[10] = {1,2,5,3,3,3,5};
    cout<< " first Occurrence of 3 is at index  "<<firstOcc(ar , 8 ,3)<<endl<<endl;
     cout<< " last   Occurrence  of 3 is at index  "<<lastOcc(ar,8,3)<<endl;
}
