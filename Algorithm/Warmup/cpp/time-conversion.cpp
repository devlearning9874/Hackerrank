#include<iostream>
#include<string>
using namespace std;

void print(string s){

     if(s[8] == 'P'){
        
        string first = s.substr(0,2);
        string second = s.substr(2,6);

        int f = stoi(first);
         
         if(f >= 1 && f <= 11){
              f = f + 12;
         }
       

        first = to_string(f);

           
        // cout<<first<<" "<<second<<endl;

        cout<<first+second<<endl;
        // return first+second;
        
     }else{
        string first = s.substr(0,2);
        string second = s.substr(2,6);

        int f = stoi(first);
         
         if(f == 12){
            f = f - 12;
         }
       

        

        first = to_string(f);

        if(f >=0 && f <= 9){
          first.insert(0,"0");
        }
        
        

           
        // cout<<first<<" "<<second<<endl;

        cout<<first+second<<endl;

        // return first+second; 
     }
}

int main(){

    string s = "01:01:00AM";

    print(s);

    return 0;
}