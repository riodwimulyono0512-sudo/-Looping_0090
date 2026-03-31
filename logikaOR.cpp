#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >=60) || (nilM >=70))
        status = "Lulus";
    else
        status = "Tidak lulus";
}