#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

    int m,n, temp;

    cin>>m>>n;

   vector<int> res;

    int a[m];
    int b[n];

    for(int i=0; i<m; i++){
        
        cin>>temp;

        a[i] = temp;
    }

    for(int j=0; j<n; j++){

        cin>>temp;

        b[j] = temp;
    }

    sort(a, a+m);
    sort(b, b+n);

    int p = a[m-1];
    int q = b[0];

    // cout<<p<<" "<<q;

    for(int i=p; i<=q; i++){
             int bc=0;
             int ac = 0;
          for(int j=0; j<n; j++){

               if( b[j] % i == 0){
                   bc++;
               }
          }
          if(bc == n){

              for(int k=0; k<m; k++){
                    
                    int check = a[k];

                   if(i%check == 0){
                       ac++;
                   }
              }
              if(ac == m){
                   res.push_back(i);
              }
              
          }
    }

     int re = res.size();
     for(auto it: res){
         cout<<it<<" ";
     }
     cout<<endl;
    cout<<re;


    return 0;
}