#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int n, temp, d, m, count=0, check;
    vector<int> chocolate;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>temp;

        chocolate.push_back(temp);
    }

    cin>>d>>m;
    // cout<<d<<" "<<m;
    
    for(int i=0; i<n; i++){
       check = chocolate[i];
        // cout<<pre<<" ";
        for(int j=1; j<m; j++){
            check = check + chocolate[i+j];
        }
        
            if(d == check){
                count++;
            }
            check = 0;
    }

    cout<<count;


    return 0;
}