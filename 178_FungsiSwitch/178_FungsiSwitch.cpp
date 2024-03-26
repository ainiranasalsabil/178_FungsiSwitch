#include <iostream>
using namespace std;

int luas;

void prosedurLuas(int p, int l)
{
	luas = p * l;
}

int fungsiLuas(int p, int l)
{
	return p * l;
}
 
int main()
{
	int panjang, lebar;
	cout << "Masukan panjang: ";
	cin >> panjang;
	cout << "Masukan lebar : ";
	cin >> lebar;

	prosedurLuas(panjang, lebar);
	cout << "Luas persegi panjang dengan prosdure: " << luas << endl;

	cout << "Luas persegi panjang dan fungsi: " << fungsiLuas(panjang, lebar) << endl;

	return 0;

}