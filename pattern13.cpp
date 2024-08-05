#include <iostream>
using namespace std;
int main(){

    int i,j,k;
    for(i=0;i<4;i++){

        for(j=1;j<=4;j++){

            if(j>i){
                cout<<"* ";
            }else{
                cout<<"  ";

            }

        }
        cout<<endl;
    }
    return 0;
}