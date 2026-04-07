#include <iostream>
using namespace std;

int main() {
    //Deklarasi array dengan inisialisasi
    int dataku[5] = {10,20,30,40,50};
    //deklarasi tanpa insialisasi
    int datamu[5];
    int x;

    cout << "data ke -3 : " << dataku[2] << endl;

    x = dataku[2];
    dataku[2] = 600;
    cout << "data ke -3 : " << dataku[2] << endl;

    cout << "data index ke - 0 : ";
    cin  >> datamu[0];
    cout << "data index ke - 1 : ";
    cin  >> datamu[1];  
    cout << "data index ke - 2 : ";
    cin  >> datamu[2];
}