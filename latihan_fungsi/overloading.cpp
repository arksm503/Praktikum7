#include<iostream>
using namespace std;


int lain(int angka)
{
    return angka;
}

double lain(double angka)
{
    return angka;
}

float lain(int angka, float bil)
{
    return(angka + bil);

}

int main()
{
    cout<<lain(34.66)<<endl;    //double lain
    cout<<lain(23,23.5)<<endl;  //float lain
    cout<<lain(76)<<endl;       //int lain
}
