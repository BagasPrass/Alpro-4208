#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    return a + b;
}

int pengurangan(int a, int b){
    return a - b;
}

int n[3];
int j, t, r;
//j : jumlah array
//t : total
//r : rata-rata
int main()
{
    //penjumlahan
    cout << "penjumlahan dari 20 + 10 = " <<penjumlahan(20,10) << endl;
    //pengurangan
    cout << "pengurangan dari 20 - 10 = " <<pengurangan(20,10) << endl;

    for(int i=1; i <= 3; i++){
        cout << "Masukan angka ke-" << i << ": ";
        cin >> n[i];
        //total
        t = t + n[i];
    }
    //jumlah array
    j = sizeof(n)/sizeof(n[0]);
    //rata-rata
    r = t / j;
    cout << "Total = " << t << endl;
    cout << "Rata-rata = " << r << endl;
    return 0;
}
