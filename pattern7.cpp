#include <iostream>
using namespace std;
int main(){

    int i,j,n;
    cin>>n;
    char ch='A';
    char a;
    for(i=0;i<n;i++){

        char a=char(ch+i);
        for(j=0;j<=n;j++){

            cout<<char(a+j);
        }
        cout<<endl;
    }
    return 0;
}