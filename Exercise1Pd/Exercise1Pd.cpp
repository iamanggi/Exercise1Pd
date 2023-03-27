#include <iostream>
using namespace std;

int i[20];
string nama;


double rerata (double a, double b) {
	return (a + b)/ 2;
}

string status(double rerata, double nilM ) {
	if (rerata >= 70 || nilM > 80)
		return "diterima";
	else
		return "ditolak";
}
int main() {
	
	double nilM, nilI;

	cout << " nilai mtk = ";
	cin >> nilM;
	cout << " nilai b.inggris = ";
	cin >> nilI;
	cout << "status kelulusannya " << status(rerata(nilM, nilI), nilM) << endl;
	cout << "\n========================" << endl;
	cout << "Nama  " << "  " << "status" << endl;
	cout << "========================" << endl;
	cout << "Asroni" << "  " << "diterima" << endl;
	cout << "Lia   " << "  " << "diterima" << endl;
	cout << "joko  " << "  " << "ditolak" << endl;
	


	return 0;
}
