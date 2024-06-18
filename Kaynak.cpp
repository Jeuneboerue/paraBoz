#include <iostream>

using namespace std;

int paraBoz(int para, int bolen) {
	int bolum;
	bolum = para / bolen;
	para = para - (bolum * bolen);
	cout << bolum << " adet " << bolen << " TL\n";
	return para;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int para, bolum;

	cout << "Paranýzý Giriniz: ";
	cin >> para;

	while (para) {
		if (para >= 200) {
			
			para = paraBoz(para, 200);
		}
		else if (para >= 100) {
			para = paraBoz(para, 100);
		}
		else if (para >= 50) {
			para = paraBoz(para, 50);
		}
		else if (para >= 20) {
			para = paraBoz(para, 20);
		}
		else if (para >= 10) {
			para = paraBoz(para, 10);
		}
		else if (para >= 5) {
			para = paraBoz(para, 5);
		}
		else {
			paraBoz(para, 1);
			break;
		}
	}
}