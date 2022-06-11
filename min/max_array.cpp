#include <iostream>
#include <climits>
using namespace std;

int maximum(int num[],int size)
{
    int maxi = INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi = max(maxi,num[i]);
       
        
    } 
    return maxi;
}
int minimum(int num[],int size)
{
    int mini = INT_MAX;
    for(int i=0;i<size;i++)
    {
        mini = min(mini,num[i]);
         
       
    }
    return mini;
}
int main()
{
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
 

   cout<<"maximum value of array is "<< maximum(arr,n)<<endl;
   cout<<"minimum value of array is "<<minimum(arr,n)<<endl;



return 0;
}