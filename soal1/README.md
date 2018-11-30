Menukar Dua Bilangan Variable dengan Fungsi

void nilai(int &a){
    a=8;            Inisialisasi fungsi nilai a, tipe data integer
}
void nilai2(int &b){
    b=5;            Inisialisasi fungsi nilai b, tipe data integer
}

int main(){     //Main Program
    int a=5, b=8;
    Inisialisai main program
    a & b tipe data integer
=========================================================
    cout<<"Nilai awal          Nilai akhir"<<endl;
    cout <<"A="<<a<<"         =>      A=";
    Print nilai a sebelum
=========================================================
    nilai(a);       //panggil fungsi nilai(a)
    cout<<a<<endl;
    Print nilai a sesudah
=========================================================
    cout <<"B="<<a<<"         =>      B=";
    Print nilai b sebelum
=========================================================
    nilai2(b);      //panggil fungsi nilai2(b)
    cout<<b<<endl;
    Print nilai b sesudah
=========================================================


}

Ini flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum7/master/soal1/img/1.png)

Ini screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum7/master/soal1/img/ss1.png)