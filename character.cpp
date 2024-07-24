#include <iostream>
using namespace std;
int main(){

    char ch; 
    cout<<"Enter the character ";
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"It's a small case character ";
    }else{
        cout<<"It's an uppercase character";
    }
    return 0;
}