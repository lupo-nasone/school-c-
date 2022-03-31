#include <iostream>
#include <fstream>
#include <cmath>
#define npunti 7



using namespace std;

int main() {

	float xmax, xmin, ymax, ymin;
	float cx, cy;
	float distanzamax, distanza;
	float x[7];
	float y[7];

	ifstream fin("punti.txt");
	ofstream fout("risultati.txt");

	for (int i = 0; i < npunti; i++) {
		fin >> x[i] >> y[i];
	}

	for (int i = 0; i < npunti; i++) {
		cout << x[i] << "  " << y[i] << endl;
	}

	xmax = x[0];
	xmin = x[0];
	ymax = y[0];
	ymin = y[0];

	for (int i = 0; i < npunti; i++) {
		if (xmax < x[i])
			xmax = x[i];

		if (xmin > x[i])
			xmin = x[i];

		if (ymax < y[i])
			ymax = y[i];

		if (ymin > y[i])
			ymin = y[i];

	}
	cout << " \nxmax --> " << xmax;
	cout << " \nxmin --> " << xmin;
	cout << " \nymax --> " << ymax;
	cout << " \nymin --> " << ymin;

	cx = (xmax + xmin) / 2;
	cy = (ymax + ymin) / 2;

	cout << "\n\nil centro si trova in --> " << cx << "  " << cy;

	distanzamax = sqrt(pow(x[0] - cx, 2) + pow(y[0] - cy, 2));

	for (int i = 0; i < npunti; i++) {
		distanza = sqrt(pow(x[i] - cx, 2) + pow(y[i] - cy, 2));

		if (distanza > distanzamax)
			distanzamax = distanza;
	}

	cout << "\n\ndistanza max ---> " << distanzamax;

	fout << "raggio --> " << distanzamax;
	fout << "\ncentro --> x: " << cx << "  y: " << cy;


	

}
