#include <iostream>
using namespace std;

int main(){

    int i,j,m;

    i = 2;
    j = 4;
        //1  //0    //4   //6
    m = --i + --i + j++ + ++j;

    cout << i << endl; //0
    cout << j << endl; //6

    cout << m << endl; //11


    return 0;
}
