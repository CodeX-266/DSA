#include <iostream>
using namespace std;
int main(){

    char ch;
    ch='A';
    int i,j;
    for(i=0;i<3;i++){

        for(j=i;j<3+i;j++){

            cout<<char(ch+j);
        }
        cout<<endl;
    }
    return 0;
}