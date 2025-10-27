// NAMA : IRSAL RIZKI NASRUL FADILAH
// NIM  : 241351086
// KELAS: PAGI B

#include <iostream>
using namespace std;
main(){
    int x = 8;
    int *xPtr1;
    int **xPtr2;
    int ***xPtr3;
    xPtr1 = &x ;
    xPtr2 = &xPtr1 ;
    xPtr3 = &xPtr2 ;

    cout<< "Nilai Ptr1 :" << xPtr1 <<endl;
    cout<< "Nilai Ptr2 :" << xPtr2 <<endl;
    cout<< "Nilai Ptr3 :" << xPtr3 <<endl;


    cout<< "Alamat pointer xPtr1 :" << &xPtr1 <<endl;
    cout<< "Alamat pointer xPtr2 :" << &xPtr2 <<endl;
    cout<< "Alamat pointer xPtr3 :" << &xPtr3 <<endl;

    cout<< "Nilai yang ditunjuk xPtr1 :" << xPtr1 <<endl;
    cout<< "Nilai yang ditunjuk xPtr2 :" << *xPtr2 <<endl;
   
    cout<< "Nilai yang ditunjuk *xPtr2 :" << **xPtr2 <<endl;
    cout<< "Nilai yang ditunjuk xPtr3 :" << xPtr3 <<endl;
    
    cout<< "Nilai yang ditunjuk xPtr3 :" << **xPtr3 <<endl;
    cout<< "Nilai yang ditunjuk xPtr3 :" << ***xPtr3 <<endl;

    x = 100;
    cout<< "xPtr1 merubah nilai x dengan cara *xPtr1 =" << *xPtr1 <<endl;
    cout<< "Nilai x =" << *xPtr1 <<endl;
    x = 200;
    cout<< "xPtr2 merubah nilai x dengan cara **xPtr2 =" << *xPtr2 <<endl;
    cout<< "Nilai x =" << **xPtr2 <<endl;
    x = 300;
    cout<< "xPtr3 merubah nilai x dengan cara ***xPtr3 =" << *xPtr3 <<endl;
    cout<< "Nilai x =" << ***xPtr3 <<endl;
 
}
