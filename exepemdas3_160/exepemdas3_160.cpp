#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {
		
	} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	
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
		cout << "Lingkaran dibua\n";
	}
	void input() {
		cout << "Masukkan jejari = ";
		cin >> jejari;
		setX(jejari);
	}
	
};
class Bujursangkar :public bidangDatar { /*lengkapi disini*/ };

int main() { 
	int setnum;
	cin >> setnum;
	Lingkaran L;
	L.setX(setnum)
	

	
}