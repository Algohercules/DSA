#include<iostream>
using namespace std;


//! recursion :

//? print name n times using recursion

void func_(int I, int N){
   if(I>N)
    return N * (N-1);
   else
    cout << "raj" <<endl;
   
}

int main(){
    int i;
    int n;
    cin >> n;
    func_(i,n);
}