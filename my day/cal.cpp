#include <iostream>
using namespace std;

int main() {
    int ch,a,b;
    
    cout<<"enter first number.\n";
    cin>>a;
    cout<<"enter second number.\n";
    cin>>b;
    do{
    cout<<"enter 1 to add.\n"<<"enter 2 to subtact.\n"<<"enter 3 to multiply.\n"<<"enter 4 to divide.\n"<<"enter 5 to modulas.\n"<<"enter 6 to end.\n";
    cout<<"enter your choice.\n";
    cin>>ch;
    switch (ch){
        case 1:
        cout<<"addition of"<<a<<" and "<<b<<" is "<<a+b<<endl;
        break;
        case 2:
        cout<<"subtraction of"<<a<<" and "<<b<<" is "<<a-b<<endl;
        break;
        case 3:
        cout<<"mutiplication of"<<a<<" and "<<b<<" is "<<a*b<<endl;
        break;
        case 4:
        cout<<"divition of"<<a<<" and "<<b<<" is "<<a/b<<endl;
        break; 
        case 5:
        cout<<"modulas of"<<a<<" and "<<b<<" is "<<a%b<<endl;
        break;
    }
    }
    while(ch!=6);{
        cout<<"program ended"<<endl;
    }
    return 0;
}