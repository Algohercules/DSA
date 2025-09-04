//first step 
/// for the outer loop count the no of rows 
// for the inner loop  , focus on the rows and the n try them to anyhow connect ot the rows 
// print what ever is asked for 

#include<iostream>
using namespace std;



 void print1(int n){
  for(int i = 0; i<n; i++){
    for( int j=0; j<n; j++){
        cout << "*";
    }
    cout << endl;
  }
}

void print2(int n) {
    for(int i = 0; i < n; i++){
for(int j=0; j<i; j++){
    cout << "*";
}
cout << endl;
}
 }

 void print3(int n){
    
 }
int main(){
    int t;
    cin >> t;
    for( int i = 0; i<t; i++){
        int n;
        cin >> n;
        print2(n);
    }


}







