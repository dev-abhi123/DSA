#include<iostream>
using namespace std;
int main(){
    char a='A';
for(int i=0;i<4;i++){
    for(int j=0;j<i+1;j++){
        cout<<a<<" ";
    }
    a++;
    cout<<endl;
}
    return 0;
}