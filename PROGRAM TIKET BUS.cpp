#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void header(){
cout<<"===============================================\n";
cout<<" TERMINAL MALENGKERI\n";
cout<<" BULLAH N NUFI\n";
cout<<"===============================================\n\n";
}
int main(){
char kode_b, nama_b[50], tujuan[10], nama[50], lagi;
string kode_tj;
int harga, total, jmlh_beli;atas:
header();
cout<<"Id Penumpang : ";gets(nama);
cout<<"Pilihan BUS : (D) Dedy Jaya\n (S) Sinar Jaya\n (E) Elep\n";
cout<<"===============================================\n";
cout<<" Kode BUS [D / S / E] : ";cin>>kode_b;
if(kode_b == 'D'||kode_b == 'd'){
harga = 0;
strcpy(nama_b, "Dedy Jaya");
cout<<"===============================================\n";
cout<<"Pilihan Tujuan : (MRS) Maros\n (PKP) Pangkep\n";
cout<<"===============================================\n";
cout<<" TUJUAN [ MRS / PKP ] : ";cin>>kode_tj;
if(kode_tj == "MRS"||kode_tj == "mrs"){
harga = 150000;
strcpy(tujuan, "Maros");}
else if(kode_tj == "PKP"||kode_tj == "pkp"){
harga = 300000;
strcpy(tujuan, "Pangkep");}
else{
cout<<"KODE TUJUAN SALAH";
}
}
else if(kode_b == 'S'||kode_b == 's'){
harga = 0;
strcpy(nama_b, "Sinar Jaya");
cout<<"===============================================\n";
cout<<"Pilihan Tujuan : (SLO) Solo\n (SMR) Semarang\n";
cout<<"===============================================\n";
cout<<" TUJUAN [ SLO / SMR ] : ";cin>>kode_tj;
if(kode_tj == "SLO"||kode_tj == "slo"){
harga = 200000;
strcpy(tujuan, "Solo");}
else if(kode_tj == "SMR"||kode_tj == "SMR"){
harga = 175000;
strcpy(tujuan, "Semarang");}
else{
cout<<"KODE TUJUAN SALAH";
}
}
else if(kode_b == 'E'||kode_b == 'e'){
harga = 0;
strcpy(nama_b, "Elep");
cout<<"===============================================\n";
cout<<"Pilihan Tujuan : (BRB) Brebes\n (PKL) Pekalongan\n";
cout<<"===============================================\n";
cout<<" TUJUAN [ BRB / PKL ] : ";cin>>kode_tj;
if(kode_tj == "BRB"||kode_tj == "brb"){
harga = 75000;
strcpy(tujuan, "Brebes");}
else if(kode_tj == "PKL"||kode_tj == "PKL"){
harga = 50000;
strcpy(tujuan, "Pekalongan");}
else{
cout<<"KODE TUJUAN SALAH";
}
}
else{
cout<<"KODE BUS SALAH";
}
cout<<"===============================================\n\n";system("cls");
header();
cout<<" Nama Bus : "<<nama_b<<endl;
cout<<" Tujuan Bus : "<<tujuan<<endl;
cout<<" Harga Tiket : Rp. "<<harga<<endl;
cout<<" Jumlah Beli Tiket : ";cin>>jmlh_beli;
total = harga * jmlh_beli;
cout<<"===============================================\n";
cout<<" Total : Rp. "<<total<<endl;
cout<<"===============================================\n\n";
cout<<" Ingin Input Lagi ? [ Y / N ] : ";
cin>>lagi;
if(lagi=='y'||lagi=='Y'){
system("cls");goto atas;}
else{
system("cls");cout<<"\n***** Terima Kasih Berkunjung Ke TERMINAL KEREN *****\n";}
}
