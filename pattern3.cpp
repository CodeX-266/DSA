#include <iostream>
using namespace std;
int main(){

    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=i;j<i*2;j++)
        {
            cout<<j<<" ";

        }
        cout<<endl;

    }
    return 0;
}