int operasi(int a, int b);
Inisialisasi fungsi

int main()  //main program
{
    int a, b;
    Inisialisasi main program
    tipe data a, b adalah integer
==========================================================

    cout<<"Masukan Nilai A : ";cin>>a; //Input nilai a
    cout<<"Masukan Nilai B : ";cin>>b; //Input nilai b

==========================================================
    operasi(a,b); //panggil fungsi operasi(a,b)

}

int operasi(int a, int b){ //deskripsikan fungsi int operasi(a,b)
    cout<<a<<" x "<<b<<" = ";
    Print a x b =
    (a dan b diganti dengan nilai hasil inputan)
===========================================================

    for(int i=1; i<=b; i++){
    perulangan for
        - variabel i untuk perulangan, syarat i perhitungan dimulai dari 1
        - i lebih kecil atau sama dengan b
        - i++ : i = i + 1 hingga mencapai nilai b
============================================================

        cout<<a;
        Print a
============================================================

        if(i<b){        //jika i lebih kecil dari b
            cout<<" + "; //print " + "
        }
    }

}


ini flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum7/master/soal2/img/2.png)

ini screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum7/master/soal2/img/ss2.png)
