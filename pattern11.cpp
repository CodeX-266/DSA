#include <iostream>
using namespace std;
int main(){

    int i;
    char j;
    int ch='D';
    for(i=0;i<4;i++){

        for(j=char(ch-i);j<=ch;j++){

            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}