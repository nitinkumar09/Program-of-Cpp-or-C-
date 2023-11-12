#include<iostream>
using namespace std;
int leftaccurence(int arr[], int size, int key)
{
    int start = 0,ans;
    int end = size-1;
    int mid = (start+(end-start)/2);
    while(start<=end)
    {
        if(arr[mid]==key)                                //{1,3,3,3,4,5,5,6,8}    //{1,2,3,3,3,4,6,8}
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start= mid+1;
        }
           else if(key<arr[mid]){
            end = mid-1;
        }
        mid = (start+(end-start)/2);
    }
    return ans;
}

int rightaccurence(int arr[], int size, int key)
{
    int start = 0,answer;
    int end = size-1;
    int mid = (start+(end-start)/2);
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            answer=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start= mid+1;
        }
           else if(key<arr[mid]){
            end = mid-1;
        }
        mid = (start+(end-start)/2);
    }
    return answer;
}

int main()
{
    int even[9] ={1,3,3,3,4,5,5,6,8},key;
   //int odd[5] = {2,6,8,9,10};
    cout<<"enter search key"<<endl;
    cin>>key;
    int ans = leftaccurence(even, 9, key);
    int answer =rightaccurence(even, 9, key);
     cout<<"answer in first array element " <<key<<"  at: "<<leftaccurence(even, 9, key)<<endl;
    cout<<"answer in second array element "<<key<<" at: "<<rightaccurence(even, 9, key)<<endl;
  int totalacc;
   totalacc=(answer-ans)+1;
  cout<<"total no. of accurence .. "<<totalacc<<" "<<endl;
}
