#include <iostream>
using namespace std;

int main()
{
	//begin
	//numeric nJejari, nLuas
	//display 'masukan jejari='
	//accept nJejari
	//compute nLuas = 3.14 * r * r
//end

	double nJejari, nLuas;
	cout << "masukan jejari = ";
	cin >> nJejari;
	nLuas = 3.14 * nJejari * nJejari;
	cout << "luasnya =" << nLuas << endl;
}