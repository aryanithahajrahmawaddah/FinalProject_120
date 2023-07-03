#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0;}
	virtual void cekKelulusan() { return 0 ; }
	virtual void input() { return 0 ;}

	void setPresense(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi(int i) {
		return presensi;
	}
};

int main() {
	int n;
	string status, bobot, nilai;
	double presensi, activity, exercise, tugasAkhir;

	cout << " Program dibuat";
	cin >> n;
	cout << endl;

	for () {
		cout << endl;

		cout << "\nMasukan nilai Presensi =  ";
		cout << "\nMasukan nilai Activity = ";
		cout << "\nMasukan nilai Exercise = ";
		cout << "\nMasukan nilai Tugas Akhir = ";

		bobot = (presensi, activity, exercise, tugasAkhir);

		if (bobot >= 75 && presensi,activity, exercise, tugasAkhir>= 90) {
			status = "Lulus";
		}
		else {
			status = "Tidak Lulus: ";
		}
	}
	cout << endl;
	cout << "BOBOT NILAI" << endl;
	cout << "Presensi		Activity		Exercise		TugasAkhir" << endl;
	
}

class Pemograman : public Matakuliah {

};

int main() {
	
}