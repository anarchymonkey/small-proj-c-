#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int * arr;
    long long int *arr1;
    long long int size;
    long long int price;
    long long int k = 0;
    long long int sum = 0;
    long long int count=0;
    cin>>size;
    cin>>price;
    arr = new long long int[size];
    arr1 = new long long int[size];
    for(long long int i = 0 ; i< size ; i++ )
    {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    for(long long int i = 0 ; i< size ; i++ )
    {
        if(arr[i]<price)
        {
            arr1[k++] = arr[i];
        }
    }
     for(long long int i = 0 ; i<k ; i++ )
    {
         sum += arr1[i];
        if(sum<=price)
        {
            count ++;
        }
         else{
             break;
         }
        
    }
    
    cout<<count;
    
    delete arr;
    delete arr1;
    
    
    
}