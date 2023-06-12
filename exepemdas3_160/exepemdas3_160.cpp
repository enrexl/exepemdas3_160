#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {// fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		
	} 
	
		virtual float Luas(int a) { //fungsi untuk menghitung luas
			return 0; 
		} 

	virtual float Keliling(int a) {  //fungsi untuk menghitung keliling
		return 0; 
	} 

	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};


class Lingkaran :public bidangDatar { 
private:
	int jejari;
public:
	Lingkaran() {
		cout << "Lingkaran dibuat\n";
	}
	void input() {
		cout << "Masukkan jejari = ";
		cin >> jejari;
		setX(jejari);
	}
	float Keliling(int a) {
		a = 3.14 * a * a;
		return 0;
	}
	float Luas(int a) {
		a = 3.14 * 2 * a;
	}
	
};
class Bujursangkar :public bidangDatar { 
private:
	int sisi;
public:
	Bujursangkar() {
		cout << "Bujursangkar dibuat\n";
	}
	void input() {
		cout << "Masukkan Sisi = ";
		cin >> sisi;;
		setX(sisi);
	}
	float Keliling(int a) {
		a = sisi * 4;
		return 0;
	}
	float Luas(int a) {
		a = sisi * sisi;
		return 0;
	}

};

int main() { 
	Lingkaran L;
	L.Keliling(6);
	L.Luas(6);

	Bujursangkar B;
	B.setX(5);
	B.Luas(5);
	B.Keliling(5);

	
}