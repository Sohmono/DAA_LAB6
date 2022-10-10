#include <iostream>
#include <conio.h>

using namespace std;

struct data{
	char nim[15], kelas[15];
    string nama;
};
	
data batas[10];
int a,byk_data,c,d;

void tambahdata(){
cout<<"Jumlah Data Yang Akan ditambah (maks 5): ";cin>>byk_data; 
banyak += byk_data;
if (byk_data<=5 && byk_data>0 && banyak <= 5){
   d=0;
   for(c=0;c<byk_data;c++){
   d=d+1;
   cout<<"Data ke-"<<d<<endl;
   cout<<"NIM\t: ";cin>>batas[a].nim;
   cin.ignore();
   cout<<"Nama\t: "; getline(cin, batas[a].nama);
   batas[a].nama.resize(30);
   cout<<"Kelas\t: ";cin>>batas[a].kelas;
   a++;}
}
else {
	cout<<"Mohon Maaf data Anda terlalu banyak";
}
   getch();system("cls");}

void lihatdata(){
	int i,j;
	cout<<"Menampilkan Data"<<endl;
	cout<<"====================="<<endl;
	j=0;
	for(i=0;i<a;i++){
		j=j+1;
		cout<<j<<"==================="<<endl;
		cout<<"NIM\t: "<<batas[i].nim<<endl;
		cout<<"Nama\t: "<<batas[i].nama<<endl;
		cout<<"Kelas\t: "<<batas[i].kelas<<endl;
	};
	getch();system("cls");
  }

void hapusdata(){
	int x,y;
	cout<<"Hapus data ke-";cin>>x;
	y=x-1;
	a--;
	for(int i=y;i<a;i++)
	{batas[i]=batas[i+1];}
	system("cls");
	cout<<"Data ke-"<<x<<" Terhapus";
	getch();
    system("cls");
}

//Tugas by bg tamir update data
void updatedata(){
	int k,l;
	cout<<"Masukan Data yang akan diupdate : ";cin>>k;
	l=k-1;//karena array bacanya dari 0, makanya dikurang 1
	cout<<"NIM\t: ";cin>>batas[l].nim;
	cout<<"Nama\t: ";cin>>batas[l].nama;
	cout<<"Kelas\t: ";cin>>batas[l].kelas;
	lihatdata();//cek di void lihat data, buat ngeganti data
}

int main(){
	int pilih;
	char w;
	cout<<"PROGRAM STRUKTUR DATA"<<endl;
	cout<<"=================="<<endl;
	ulang:
	cout<<"PILIHAN "<<endl;
	cout<<"=================="<<endl;
	cout<<"1. Tambah data"<<endl;
	cout<<"2. Hapus Data"<<endl;
	cout<<"3. Lihat Data"<<endl;
	cout<<"4. Update Data"<<endl;
	cout<<"5. Keluar"<<endl;
	cout<<"=================="<<endl;
	cout<<"Masukkan Pilihan : ";
	cin>>pilih;
	if(pilih==1)
		{system("cls");tambahdata();goto ulang;}
	if(pilih==2)
		{system("cls");hapusdata();goto ulang;}
	if(pilih==3)
		{system("cls");lihatdata();goto ulang;}
	if(pilih==4)
		{system("cls");updatedata();goto ulang;}
	if(pilih==5){
		system("cls");		
		cout<<"KELUAR DARI PROGRAM ?(Y/N)";
		cin>>w;
		if(w=='y'||w=='Y'){
			system("cls");
			cout<<"====================="<<endl;
			cout<<"=  PROGRAM SELESAI  =";
			cout<<"====================="<<endl;}
		else if(w=='n'||w=='N')
		    {system("cls");goto ulang;}
		}

}