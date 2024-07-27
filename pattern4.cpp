#include <iostream>
using namespace std;
int main(){

    int n,i,j,value;
    cin>>n;
    i=1;
    
    while(i<=n){

        value=i;
        j=1;
        while(j<=i){

            cout<<value<<" ";
            value--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}