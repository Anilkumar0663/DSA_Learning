#include <iostream>
using namespace std;

void alternetArray(int arr[],int size)
{
   for(int i=0;i<size;i+=2){
        if(i+1 <size){
        swap(arr[i],arr[i+1]);
     }
    }
}
void printr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   int arr[50];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   alternetArray(arr,n);
   printr(arr,n);
return 0;
}