#include <iostream>
using namespace std;
int main(){
    /*1
      2 1
      3 2 1
      4 3 2 1
    
    */
    for (int i=0;i<4;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}