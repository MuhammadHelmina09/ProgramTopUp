/*
NAMA   : MUHAMMAD HELMINA
NPM    : 2010010612
KELAS  : 3N REG BJM
MATKUL : PEMROGRAMAN TERSTRUKTUR
*/

//Program Top Up Diamonds 

#include<iostream>
using namespace std;
const int admin=1000;

int main(){
	
	char name[30],pembeli[30];
	int harga,jumlah,total,jumtotal,jumbayar,kembalian,diskon;
	int id[2];
	string input,kode;
	
	do {
		cout << "==================================================== " <<endl;
		cout << "                    Helmi Store                      "<<endl;
		cout << "==================================================== "  <<endl;
		cout << " Nama Pembeli        : ";
		cin >> pembeli;
		cout << " Masukkan ID Account : ";
		cin >> id[0];
		cout << " Masukkan ID Server  : ";
		cin >> id[1];
		cout<<endl;
		cout << " Pilihan Top Up Tersedia "<<endl;
		cout << " 1  - 74   Diamonds Mobile Legends  - Rp. 19.000"<<endl;
		cout << " 2  - 222  Diamonds Mobile Legends  - Rp. 57.000"<<endl;
		cout << " 3  - 370  Diamonds Mobile Legends  - Rp. 95.000"<<endl;
		cout << " 4  - 966  Diamonds Mobile Legends  - Rp. 237.500"<<endl;
		cout << " 5  - 2010 Diamonds Mobile Legends  - Rp. 475.000"<<endl;
		cout << " 6  - 4830 Diamonds Mobile Legends  - Rp. 1.140.000"<<endl;
		cout << " 7  - Starlight Member             - Rp. 150.000"<<endl;
		cout << " 8  - Starlight Member Plus        - Rp. 299.000"<<endl;
		
		cout<<endl;
		cout<<endl;
		cout<<" Top Up Yang dipilih  : ";
		cin >>kode;
		cout <<" Jumlah Beli          : ";
		cin >>jumlah;
		
		
		if (kode == "1"){
			cout << " 74  Diamonds Mobile Legends";
			harga = 19000;
		} else if (kode == "2") {
			cout << " 222  Diamonds Mobile Legends";
			harga = 57000;
		} else if (kode == "3") {
			cout << " 370  Diamonds Mobile Legends";
			harga = 95000;
	    } else if (kode == "4") {
			cout << " 966  Diamonds Mobile Legends";
			harga = 237500;
		} else if (kode == "5") {
			cout << " 2010  Diamonds Mobile Legends";
			harga = 475000;
		} else if (kode == "6") {
			cout << " 4830  Diamonds Mobile Legends";
			harga = 1140000;
		} else if (kode == "7") {
			cout << " Starlight Member";
			harga = 150000;
	    } else if (kode == "8") {
			cout << " Starlight Member Plus";
			harga = 299000; 
	    } else {
	    	cout <<"Top Up Anda Pilih Tidak Tersedia";
	    }
     
	    cout<<endl;
	    cout<< "==================================================== "  <<endl;
	    cout<< "                   Struk Pembayaran                  "<<endl;
	    cout<< "==================================================== "  <<endl;
	    cout<<" Nama Pembeli     : " <<pembeli<<endl;
	    cout<<" ID Account       : " <<id[0] <<"("<< id[1] <<")" <<endl;
	    cout<<" Harga            : Rp. "<<harga<<endl;
	    cout<<" Jumlah           : " <<jumlah<<endl;
	    cout<<" Biaya Admin      : Rp. " <<admin<<endl;
	    
	    
	    total = harga * jumlah + admin;
	    cout <<" Total            : Rp. " <<total<<endl;
	    cout <<endl;
	    
	    if (total >= 100000) {
	        diskon = 0.05 * total;
	    } else if ( total >= 500000){
	    	diskon = 0.10 * total;
	    } else {
	    	diskon = 0;
	    }
	    
	    cout <<" Diskon           : Rp. " <<diskon<<endl;
	    cout<< "==================================================== "  <<endl;
	    
	    jumtotal = total - diskon;
	    
	    cout <<" Total Keseluruhan : Rp. " <<jumtotal<<endl;
	    cout <<" Uang Bayar        : Rp. ";
	    cin>> jumbayar;
	    
	    kembalian =jumbayar - jumtotal;
	    cout <<" Uang Kembalian    : Rp. " <<kembalian<<endl;
	    cout<< "==================================================== "  <<endl;
	  
	  
	    cout <<" Mau Top Up Lagi [Y/N]:";
	    cin >> input;
	    
	  } while  (input == "y"  || input=="Y");
	  cout<<endl;
	  
	  for (int a = 1; a <= 3; a++){
	    cout<<" Terimakasih Sudah Top Up di Helmi Store"<<endl;
}
	    
	        
}
