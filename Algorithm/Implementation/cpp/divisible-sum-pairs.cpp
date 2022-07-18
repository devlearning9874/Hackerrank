#include<iostream>
#include<vector>
#include<set>

using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {

        int count = 0;
        
        typedef pair<int,int> pairs;
        
        set<pairs> s;
        
        for(int i=0; i<n; i++){
            
            for(int j=0; j<n; j++){
                
                if(i != j && (ar[i]+ar[j])%k == 0) {
                    pairs p = make_pair(i,j);
                    s.insert(p);
                };
                
            }
            
           
        }
        
        int l = s.size();

      return l/2;
}


int main(){

    

    int n, k,num;

    cin>>n>>k;

    vector<int> arr;

    for(int i=0; i<n; i++){
            
            
        cin>>num;

        arr.push_back(num);

    }

    int res = divisibleSumPairs(n, k, arr);

    cout<<res;

    return 0;
}