#include <iostream>
using namespace std;
int main(){

    int i,j;
    int a=0;
    for(i=0;i<3;i++){

        for(j=0;j<=i;j++){

            cout<<a+1;
            a++;
        }
        cout<<endl;

    }
    return 0;
}