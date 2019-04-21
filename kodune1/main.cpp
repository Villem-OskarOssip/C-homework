/* See on peaprogramm, mis algab funktsioonis 'main'. */
#include <iostream> /* Sisend ja väljund */
#include <cstdlib>  /* EXIT_SUCCESS jt konstandid */
#include "functions.h" /* Meie oma funktsioonid */
using namespace std; /* Nimeruumi valik (selgitatakse praktikumis) */

int main(int argc, char *argv[]) {

  if (argc < 3)
		cout << "Liiga vähe!" << endl;
  else
    cout << argv[1] << " " << argv[2] << endl;
	if (argc == 3) {
		cout << maximum (atol(argv[1]), atol(argv[2])) << endl;
		cout << product (atol(argv[1]), atol(argv[2])) << endl;
		cout << power (atol(argv[1]), atol(argv[2])) << endl;
		cout << gcd (atol(argv[1]), atol(argv[2])) << endl;
		cout << minimum (atol(argv[1]), atol(argv[2])) << endl;
	}
	if (argc == 4) {
		string tegevus = argv[3];
		if (tegevus == "maximum") cout << maximum (atol(argv[1]), atol(argv[2]));
		if (tegevus == "product") cout << product (atol(argv[1]), atol(argv[2]));
		if (tegevus == "power") cout << power (atol(argv[1]), atol(argv[2]));
		if (tegevus == "gcd") cout << gcd (atol(argv[1]), atol(argv[2]));
		if (tegevus == "minimum") cout << minimum (atol(argv[1]), atol(argv[2]));
	}
	if (argc > 4)
		cout << "Liiga palju!" << endl;
		
  return EXIT_SUCCESS;
}
