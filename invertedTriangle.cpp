//It works on the no of spaces and numbers. in an inverted triangle with n rows there there are i spaces and n-i numbers in each ith row
#include <iostream>
using namespace std;
int main(){
    /*1234
       123
        12
         1*/
       int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
return 0;
}

