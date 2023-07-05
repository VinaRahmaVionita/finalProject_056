#include <iostream>
using namespace std;


class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {
	
	}
	virtual float Luas(int a) {
		return 0;
	}
	virtual float Keliling(int a) { 
		return 0; 
	}
	virtual void cekUkuran() {
		return;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar {

	void input() {
		cout << "Masukkan jejari: ";
		int r;
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}

	void cekUkuran() {
		float keliling = Keliling(getX());
		if (keliling > 40)
			cout << "Ukuran lingkaran adalah besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran lingkaran adalah sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran lingkaran adalah kecil" << endl;
	}
};
class Persegipanjang :public bidangDatar { 
	void input() {
		cout << "Masukkan panjang: ";
		int p;
		cin >> p;
		setX(p);
		cout << "Masukkan lebar: ";
		int l;
		cin >> l;
		setY(l);
	}

	float Luas(int p) {
		return p * getY();
	}

	float Keliling(int p) {
		return 2 * (p + getY());
	}

	void cekUkuran() {
		float keliling = Keliling(getX());
		if (keliling > 40)
			cout << "Ukuran Persegi Panjang adalah besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran Persegi Panjang adalah sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran Persegi Panjang adalah kecil" << endl;
	}
 };

int main() { 

	bidangDatar* bd;

	cout << "Lingkaran dibuat" << endl;
	bd = new Lingkaran();
	bd->input();
	cout << "Luas Lingkaran = " << bd->Luas(bd->getX()) << endl;
	cout << "Keliling Lingkaran = " << bd->Keliling(bd->getX()) << endl;
	void cekUkuran();

	cout << "Persegipanjang dibuat" << endl;
	bd = new Persegipanjang();
	bd->input();
	cout << "Luas Persegipanjang = " << bd->Luas(bd->getX()) << endl;
	cout << "Keliling Persegipanjang = " << bd->Keliling(bd->getX()) << endl;
	void cekUkuran();
	return 0;
	}