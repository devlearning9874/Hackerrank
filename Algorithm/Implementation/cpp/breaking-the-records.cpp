#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){


    int n, temp; 
    int min_count=0, max_count=0;
    int min_p, max_p, a_min, b_max;
    cin>>n;

    vector<int> scores;

    for(int i=0; i<n; i++){
         
         cin>>temp;

         scores.push_back(temp);

    }

     max_p = scores[0];
     min_p = scores[0];

    for(int i=1; i<n; i++){

        a_min = min(min_p, scores[i]);

        b_max = max(max_p, scores[i]);

        if(min_p != a_min){
            min_p = a_min;
            min_count++;
        }else if(max_p != b_max){
            max_p = b_max;
            max_count++;
        }
            
    }

    cout<<"Min_count:"<<min_count<<endl;
    cout<<"Max_count:"<<max_count<<endl;



    return 0;
}