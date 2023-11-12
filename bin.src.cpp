#include<iostream>
using namespace std;

//  first program start of Binary search...!
int  binary_src(int ar[], int size,int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(s<=e)
    {
        if(ar[mid]==key)
        {
            return mid;
        }
        else if(ar[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
//  first program end of Binary search...!


//  Second program start of peakIndexInMountainArray...!

int peakIndexInMountainArray(int arr[],int n)
{
 int s = 0;
        int e = n-1;
        int mid = s + (e - s) / 2;
        while(s<e)
        {
            if(arr[mid] < arr[mid+1])
            {
               s = mid + 1;
            }
            else{
                e = mid;
            }
          mid = s + (e - s) / 2;
        }
        return s;
}

//  Second program end of peakIndexInMountainArray...!

int main()
{
    //  first program start of Binary search...!
    int ar[10] = {1,2,3,4,5,6,8,8,9,};
    int key;
    cout<<"enter a number for search"<<endl;
    cin>>key;
    cout<<"Item found at index   "<<binary_src(ar,9,key)<< "  " <<endl<<endl;
    cout<<" Second program start of peakIndexInMountainArray "<<endl<<endl;
      //  first program end of Binary search...!



    //  Second program start of peakIndexInMountainArray...!
 int arr[10] = {1,2,3,6,4,2,1};// this is a mounting array ..!
    cout<<" Peak index in mounting array  "<<"  "<<peakIndexInMountainArray(arr , 7)<<endl;
//  Second program end of peakIndexInMountainArray...!
}
