#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace::std;

main(){
string member[6]={"","bayu","irvan","susiati","diana","roni"};
string nomor[6]={"","A001","A002","A003","A004","A005"};
string g,h,i,q,z;
int a,b,c[10],e,f,j,n,o,p;
int d=0;
int k=6;
int l=0;
double m;
do{
    system("cls");
cout<<"apakah anda member : ";cin>>h;
if(h=="ya"){
    cout<<"masukan nomor identitas = ";cin>>i;
    for(j=1;j<k;j++){
        if(i==nomor[j]){
            l++;
            if(l==1)
                cout<<member[j];cout<<endl;
        }
    }
    if(l==0){
        cout<<"nama tidak ditemukan";
        }
    cout<<"jumlah belanjaan yang ingin dibeli : ";cin>>a;
    for(b=0;b<a;b++){
    cout<<"  nama barang   : ";cin>>g;
    cout<<"  jumlah barang : ";cin>>e;
    cout<<"  Harga barang  : ";cin>>c[b];cout<<endl;
    f=e*c[b];
    d+=f;
    }
    cout<<"harga total = "<<d;cout<<endl;cout<<endl;
    cout<<"jumlah belanjaan = "<<a<<endl;
cout<<"==urut harga belanjaan==";
for(b=1;b<a;b++){
    for(o=0;o<(a-1);++o)
    if(c[o]>c[o+1]){
        p=c[o];
        c[o]=c[o+1];
        c[o+1]=p;

    }
}
for(b=0;b<a;++b){
    cout<<"\n"<<c[b];
    }

    cout<<"\n\n==anda mendapat potongan 5%=="<<endl;
    m=(d*5)/100;
    n=d-m;
    cout<<"diskon = "<<m<<endl;
    cout<<"total setelah di diskon "<<n<<endl;
    cout<<"harga yang harus dibayar = Rp"<<n;

}
else{
    cout<<"masukan nama :";cin>>q;
      cout<<"jumlah belanjaan yang ingin dibeli : ";cin>>a;
    for(b=0;b<a;b++){
    cout<<"  nama barang   : ";cin>>g;
    cout<<"  jumlah barang : ";cin>>e;
    cout<<"  Harga barang  : ";cin>>c[b];cout<<endl;
    f=e*c[b];
    d+=f;
    }
    cout<<"harga total = "<<d;cout<<endl;cout<<endl;
cout<<"jumlah belanjaan = "<<a<<endl;
cout<<"==urut harga belanjaan==";
for(b=1;b<a;b++){
    for(o=0;o<(a-1);++o)
    if(c[o]>c[o+1]){
        p=c[o];
        c[o]=c[o+1];
        c[o+1]=p;

    }
}
for(b=0;b<a;++b){
    cout<<"\n"<<c[b];
    }
    cout<<"\n\nHarga Yang harus dibayar = Rp"<<d;

}
cout<<"\n\napakah anda ingin belanja lagi? ";cin>>z;
system("pause");
}while(z=="iya"||"ya");
}
