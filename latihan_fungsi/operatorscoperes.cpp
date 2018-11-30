#include<iostream>
using namespace std;

int total;

int main(){
    int total = 5;
    cout<<"total lokal = "<<total<<endl;
    ::total = 7;   //menggunakan :: agar dapat pangil total yg di luar main
    cout<<"total global = "<< ::total;

}
