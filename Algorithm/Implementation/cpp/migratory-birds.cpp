#include<iostream>
#include<vector>
#include<set>
#include<climits>

using namespace std;



int maxBird(int max, int max_idx, int res[], int n ){
    
          for(int i=1; i<n; i++){
              
              if(res[i] > max){
                  max = res[i];
                  max_idx = i;              }
          }
    
    return max_idx;
}

int migratoryBirds(vector<int> arr) {
    
      int result[]= {0,0,0,0,0,0};
      
      int n = sizeof(result)/sizeof(result[0]);
      
      set<int> s;
      
      for(int i=0; i<arr.size(); i++){
          
        s.insert(arr[i]);
      }
      
      for(auto it: s){
          
          for(int i=0; i<arr.size(); i++){
              
                  if(arr[i] == it){
                      ++result[it];
                  }
          }
      }
      
    //   int max = *max_element(result, result+n);

    
    for(auto it: result){
        cout<<it<<" ";
    }

    cout<<endl;

    int max = INT_MIN;
    int max_idx = 1;
    
   int res = maxBird(max, max_idx, result, n);
    
    // cout<<max;
      
      return res;
}
  


int main(){


    int n, temp;
    cin>>n;

   vector<int> arr;


    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }


     cout<<"Maximum Frequency of Bird Id: "<<migratoryBirds(arr);

    


    return 0;
}


/*
Input:

6

1 4 4 4 5 3

Output: 4



*/ 