#include <iostream>
using namespace std;
int main(){

    char ch='A';
    int i,j;
    int k=0;
    for(i=1;i<=3;i++){

        for(j=1;j<=3;j++){
            cout<<char(ch+k)<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}