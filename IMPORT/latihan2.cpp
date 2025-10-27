// NAMA : IRSAL RIZKI NASRUL FADILAH
// NIM  : 241351086
// KELAS: PAGI B

#include <iostream>
using namespace std;
main(){
    int Nilai[]={45, 23, 50, 8, 12, 10, 15};
    int *Ptr_Nilai;
    Ptr_Nilai = Nilai;
    cout<< "Nilai Ptr_Nilai :" << Ptr_Nilai <<endl;
    cout<< "Alamat array nilai :" << Nilai <<endl;
    cout<< "Nilai Ptr_Nilai :" << Ptr_Nilai << "adalah" << *Ptr_Nilai <<endl;
    cout<< "Elemen array index pertama :" << Nilai[0] <<endl;
    cout<< "Elemen array (dgn array) : \n";
    for (int i=0; i<7; i++){
        cout<<Nilai[i]<<" ";
    }
    cout<<endl;
    
    cout<< "Elemen array (dgn Pointer) : \n";
    for (int i=0; i<7; i++){
        cout<<"Nilai pada Alamat"<<(Ptr_Nilai+i)<<" = " <<*(Ptr_Nilai+i)<<"\n";

    }
}
