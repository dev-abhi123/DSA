#include <iostream>
using namespace std;
int main(){
    /*A
      B A
      C B A
      D C B A
    */
    char ch='A';
    for (int i=0;i<4;i++){
        
        for(int j=i;j>=0;j--){
            char a=ch;
            cout<<(char)('A'+j)<<" ";
            a--;
        }
        ch++;
        cout<<endl;
    }
return 0;
}