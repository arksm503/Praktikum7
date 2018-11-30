#include<iostream>
using namespace std;

void nilai(int a) //passing by value
{
    a=10;
}

int main()
{
    int a = 5;
    cout<<"awal "<<a<<endl;
    nilai(a);
    cout<<"akhir "<<a;


}
