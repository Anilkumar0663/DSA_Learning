#include <iostream>
using namespace std;
int pivotArray(int arr[],int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else{
            end =mid;
        }
        mid = start+ (end-start)/2;
    }
    return end;

}
int main(){

    int n = 3;
    int arr[3]={2,1,-1};
    cout<<pivotArray(arr,n);
    return 0;
}