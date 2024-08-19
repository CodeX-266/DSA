#include <iostream>
using namespace std;
int main(){

    string S="bbggbbg";
    int a=S.length();
    int i;
    int k=0;
    for(i=0;i<a-1;){
        

       if(S[i]!=S[i+1]){

            k++;
            cout<<"pair formed";
            i=i+2;
       }else{
            cout<<"same pair";
            i++;
            continue;
            

       }
    }
    cout<<k;
    return 0;
}