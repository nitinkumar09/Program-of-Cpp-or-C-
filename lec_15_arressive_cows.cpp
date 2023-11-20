#include<iostream>
#include<vector>
#include <bits/stdc++.h>
//#include<math.h>
using namespace std;
bool isPosssible(vector<int>&ar ,int n,int c, int mid)
{
   int  cowsCount = 1;
    int lastpos = ar[0];
    for(int i =0;i<n;i++)
    {
        if(ar[i] - lastpos>=mid)
        {
            cowsCount++;
            if(cowsCount == c)
            {
                return true;
            }
            lastpos = ar[i];
        }
    }
    return false;
}


int agressiveCow(vector<int>&v ,int n , int c)
{
    sort(v.begin() , v.end());
    int s = 0;
    int ans = -1;
    int maxi = -1;
for(int i = 0; i<n;i++)
{
      maxi = max(maxi,v[i]);
}
  int e = maxi;
  int mid = s + (e - s) / 2;
  while(s<=e)
  {
      if(isPosssible(v,n,c,mid))
      {
          ans = mid;
          s = mid + 1;
      }
      else{
        e = mid -1;
      }
      mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
    vector<int> ar = {1,2,3,4,6};   // ans 5(ar,5,2)
    int n = ar.size();
   cout<< agressiveCow(ar,n,2);
}
