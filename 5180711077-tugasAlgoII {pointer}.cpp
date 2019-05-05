#include <iostream>
using namespace std;

//parameter pointer
void tambah(int *angka){
*angka +=20;
}
main(){
int a = 5;
cout<<"Alamat Variabel a adalah :"<<&a<<endl;
cout<<"Nilai Variabel a adalah :"<<a<<endl;
return 0;*/

//penggunaan refrance(tanda bintang)
int a=5;
int *b; //Mendeklarasikan variabel b sebagai pointer
b = &a; //Mengkopikan alamat variabel a kedalam variabel pointer b
cout<<"Nilai variabel a adalah "<<a<<endl;
cout<<"Alamat variabel a adalah "<<&a<<endl;
cout<<"Isi dari variabel b adalah "<<b<<endl;
cout<<"Nilai yang tertampung dalam variabel b adalah "<<*b<<endl;
 return 0;*/

 //pointer dan array
int nilaiArray[5] = {2,5,4,6,7};
int *pointerArray;
pointerArray = nilaiArray;
cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
*pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
cout<<endl;
cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;
for (int i=0; i<5; i++){
 cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
}
return 0;*/

//pointer sbg parameter suatu fungsi
int nilai = 10;
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
tambah(&nilai);
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
return 0;*/

}
