#include<iostream>
using namespace std;

long kuadrat(long l){
    return l * l; //penggunaan statement return
}

int main()
{
    long bil;
    cout << "Input sebuah bilangan : ";
    cin >> bil;
    cout << "Hasil kuadratnya = " << kuadrat(bil);

}
