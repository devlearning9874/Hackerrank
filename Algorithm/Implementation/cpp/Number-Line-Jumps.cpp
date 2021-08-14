
#include<iostream>
#include<string>

using namespace std;


string kangaroo(int x1, int v1, int x2, int v2){

     if(x1 < x2 && v1 > v2){
         
         while(x1 < x2){
               x2 = x2 + v2;
               x1 = x1 + v1;
         }
     }else if(x2 < x1 && v1 < v2){

         while(x2 < x1){
             x1 = x1 + v1;
             x2 = x2 + v2;
         }

     }else{
         return "NO";
     }

     if(x1 == x2){
        //  cout<<"Yes \n";
        return "YES";
     }else{
        //  cout<<"No \n";
        return "NO";
     }
}


int main(){

    int x1, x2, v1, v2;

    cin>>x1>>v1>>x2>>v2;

    string check = kangaroo(x1, v1, x2, v2);

    cout<<check;

    return 0;
}