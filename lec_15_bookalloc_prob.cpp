#include<iostream>
using namespace std;

bool isPossible(int ar[] , int n , int m , int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i= 0; i < n; i++)
    {
       if(pageSum+ar[i]<=mid)
       {
          pageSum+=ar[i];
       }
       else{
           studentCount++;
           if(studentCount>m || ar[i]>mid || pageSum>mid)
           {
               return false;
           }
           pageSum = 0;
           pageSum+= ar[i];
       }
    }
    return true;
}
int alocateBooks(int ar[] ,int n , int m)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        sum = sum+ar[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while(s<=e)
    {
        if(isPossible(ar,n,m,mid))
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
  //  int ar[10] = {10,20,30,40};    //ans 60 (ar,4,2)
//    int ar[10] = {12,34,67,90};  // ans 113; (ar , 4 , 2)
       int ar[10] = {5,17,100,11};   //ans 100 (ar,4,4)
   cout<< alocateBooks(ar,4,2)<<endl;
}
