// NAMA : IRSAL RIZKI NASRUL FADILAH
// NIM  : 241351086
// KELAS: PAGI B

#include <iostream>
using namespace std;

typedef struct {
    int UTS;
    int UAS;
} NILAI;


main(){
    int *A;
    NILAI siswa[2];

siswa[0].UTS = 60;
siswa[0].UAS = 80;
cout<< "siswa[0].UTS =" << siswa[0].UTS <<endl;
cout<< "siswa[0].UAS =" << siswa[0].UAS <<endl;
siswa[1].UTS = 75;
siswa[1].UAS = 95;
cout<< "siswa[1].UTS =" << siswa[1].UTS <<endl;
cout<< "siswa[1].UAS =" << siswa[1].UTS <<endl;
A=&siswa[0].UAS;
cout<< "Nilai *A ="<<*A<<endl;

}
