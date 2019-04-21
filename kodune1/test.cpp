/* See on testimise peaprogramm. Töö algab funktsioonis 'main'. */
#include <iostream> /* Sisend ja väljund */
#include <cstdlib>  /* EXIT_SUCCESS jt konstandid */
#include "functions.h" /* Meie oma funktsioonid */

using namespace std; /* Nimeruumi valik (selgitatakse praktikumis) */

int testcount = 0;
#define TEST(ex) cout << "Test " << ++testcount << ". " << #ex << " " << ((ex) ? "OK" :"FAIL") << endl

int main() {
  cout << "--Testime funktsiooni minimum" << endl;
  // Kas funktsioon minimum on defineeritud?
  cout << "min (35, 40) = " << minimum (35, 40) << endl;
  // Testi funktsiooni minimum tulemusi
  TEST(minimum(35, 40) == 35);
  TEST(minimum(35, 40) != 40);
  cout << "min (10, -1) = " << minimum (10, -1) << endl;
  TEST(minimum(10, -1) == -1);
  TEST(minimum(10, -1) != 10);
    cout << "min (-1, 2) = " << minimum (-1, 2) << endl;
  TEST(minimum(-1, 2) == -1);
  TEST(minimum(-1, 2) != 2);
  cout << "min (-2.2, -5.5) = " << minimum (-2.2, -5.5) << endl;
  TEST(minimum(-2.2, -5.5) == -5);
  TEST(minimum(-2.2, -5.5) != -2);

  cout << "##############################" << endl;
  cout << "--Testime funktsiooni maximum" << endl;
  cout << "max (35, 40) = " << maximum (35, 40) << endl;
  TEST(maximum(35, 40) == 40);
  TEST(maximum(35, 40) != 35);
  cout << "max (10, -1) = " << maximum (10, -1) << endl;
  TEST(maximum(10, -1) == 10);
  TEST(maximum(10, -1) != -1);
    cout << "max (-1, 2) = " << maximum (-1, 2) << endl;
  TEST(maximum(-1, 2) == 2);
  TEST(maximum(-1, 2) != -1);
  cout << "max (-2.2, -5.5) = " << maximum (-2.2, -5.5) << endl;
  TEST(maximum(-2.2, -5.5) == -2);
  TEST(maximum(-2.2, -5.5) != -5);

  cout << "##############################" << endl;
  cout << "--Testime funktsiooni product" << endl;
  cout << "product (35, 40) = " << product (35, 40) << endl;
  TEST(product(35, 40) == 1400);
  cout << "product (10, -1) = " << product (10, -1) << endl;
  TEST(product(10, -1) == -10);
  cout << "product (-1, 2) = " << product (-1, 2) << endl;
  TEST(product(-1, 2) == -2);
  cout << "product (-2.2, -5.5) = " << product (-2.2, -5.5) << endl;
  TEST(product(-2.2, -5.5) == 10);

  cout << "##############################" << endl;
  cout << "--Testime funktsiooni power" << endl;
  cout << "power (2, 4) = " << power (2, 4) << endl;
  TEST(power(2, 4) == 16);
  cout << "power (10, -1) = " << power (10, -1) << endl;
  TEST(power(10, -1) == 0);
  cout << "power (-1, 2) = " << power (-1, 2) << endl;
  TEST(power(-1, 2) == 1);
  cout << "power (-2.2, -5.5) = " << power (-2.2, -5.5) << endl;
  TEST(power(-2.2, -5.5) == 0);

  cout << "##############################" << endl;
  cout << "--Testime funktsiooni gcd" << endl;
  cout << "power (2, 4) = " << gcd (2, 4) << endl;
  TEST(gcd(2, 4) == 2);
  cout << "power (10, -1) = " << gcd (10, -1) << endl;
  TEST(gcd(10, -1) == -1);
  cout << "power (-1, 2) = " << gcd (-1, 2) << endl;
  TEST(gcd(-1, 2) == -1);
  cout << "power (-2.2, -5.5) = " << gcd (-2.2, -5.5) << endl;
  TEST(gcd(-2.2, -5.5) == -1);
    cout << "power (30, 35) = " << gcd (30, 35) << endl;
  TEST(gcd(30, 35) == 5);


  cout << "##############################" << endl;
  cout << "Testide arv: " << testcount << endl; 
  return EXIT_SUCCESS;
}
