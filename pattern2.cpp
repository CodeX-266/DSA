#include <iostream>
using namespace std;
int main(){

    int i,j,n;
    cin>>n;
    int count=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}