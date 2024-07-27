#include <iostream>
using namespace std;
int main(){

    int i,j;
    char ch='A';
    for(i=0;i<=2;i++){

        for(j=1;j<=3;j++){

            cout<<char(ch+i);
        }
        cout<<endl;
    }
    return 0;    
}