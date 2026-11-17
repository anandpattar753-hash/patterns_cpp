#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";// printing stars
        }
        cout<<endl; //jumping into the next row or next line
    }// ended
}
