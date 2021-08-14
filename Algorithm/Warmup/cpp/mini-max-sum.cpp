#include<iostream>
#include<algorithm>
using namespace std;

void minMaxSum(long long int arr[], long long int n){


       long long int newArr[n];

       for(int i=0; i<n; i++){
           long long int sum = 0;

           for(int j=0; j<n; j++){
                
                if(i==j) continue;

               sum = sum + arr[j];
           }
           newArr[i] = sum;
       }

       sort(newArr, newArr+n);

    //    for(auto it: newArr){
    //        cout<<it<<" ";
    //    }

       cout<<newArr[0]<<" "<<newArr[n-1];
}

int main(){

    long long int arr[] = {1, 2, 3, 4, 5};
    long long int n = sizeof(arr)/sizeof(arr[0]);
    minMaxSum(arr,n);

    return 0;
}