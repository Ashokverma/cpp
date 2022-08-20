#include <iostream>
using namespace std;

int main(){

    char a;
    cin>>a ;

    switch (a)
    {
    case '1':
        cout<<"one"<<endl;
        break;
    case '2':
        cout<<"two"<<endl;
        break;
    case '3':
        cout<<"three"<<endl;
        break;

    default:
        cout<<"other"<<endl;
        break;
    }



    return 0;
}