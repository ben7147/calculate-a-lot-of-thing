#include <iostream>
using namespace std;


int main() {
double a;
double b;
double c;
double d;
double m;
double pi = 3.14159;
double r;
int answer3;

cout << "MÉRTÉKEGYSÉG NELKÜL ADJA MEG A MÉRŐSZÁMOKAT!" << endl;


int answer1;
cout << "válassz az alábbiak közül (csak szám): " << endl << "[1]: egy test felszínének és térfogatának kiszámítása" << endl << "[2]: terület, kerület kiszámítása" << endl;
cin >> answer1;

if (answer1 == 1) {


cout << "Add meg az a oldal értékét!" << endl;
cin >> a;

cout << "Add meg a b oldal értékét! " << endl;
cin >> b;

cout << "Add meg a c oldal értékét! " << endl;
cin >> c;

double A = 2*(a*b+a*c+b*c);
cout << "A test felszíne: " << A << endl;

double V = a*b*c;
cout << "A test térfogata: " << V << endl;

}

if (answer1 == 2) {
  int answer2;
  cout << "Válassz az alábbiak közül (csak szám):" << endl << "[1]: téglalap területe, kerülete" << endl << "[2]: trapéz területe, kerülete" << endl << "[3]: négyzet területe, kerülete" << endl << "[4]: paralelogramma területe, kerülete" << endl << "[5]: kör területe, kerülete" << endl <<"[6]: rombusz területe, kerülete" << endl <<"[7]: háromszög területe, kerülete (nem derékszögű)" << endl << "[8]: 4 szögek, 5szögek stb. területe, kerülete" << endl;

cin >> answer2;

if (answer2 == 1) {
  cout << "Add meg az a oldal értékét!" << endl;
  cin >> a;
  cout << "Add meg a b oldal értékét!" << endl;
  cin >> b;
  double teglalapterulet = a*b;
  cout << "A téglalap területe: " << teglalapterulet << endl;
  double teglalapkerulet = 2*(a+b);
  cout << "A téglalap kerülete: " << teglalapkerulet << endl;
}

if (answer2 == 2) {
  cout << "Add meg az a oldal értékét!" << endl;
  cin >> a;
  cout << "Add meg a b oldal értékét!" << endl;
  cin >> b;
  cout << "Add meg a c oldal értékét!" << endl;
  cin >> c;
  cout << "Add meg a d oldal értékét!" << endl;
  cin >> d;
  cout << "Add meg a magasság értékét!" << endl;
  cin >> m;
  double trapezterulet = (a+c)*m/2;
  double trapezkerulet = a+b+c+d;
  cout << "A trapéz területe: " << trapezterulet << endl;
  cout << "A trapéz kerülete: " << trapezkerulet << endl;
}

if (answer2 == 3) {
  cout << "Add meg az a oldal értékét!" << endl;
  cin >> a;
  double negyzetterulet = a*a;
  double negyzetkerulet = a*4;
  cout << "A négyzet területe: " << negyzetterulet << endl << "A négyzet kerülete: " << negyzetkerulet;
}

if (answer2 == 4) {
  cout << "Add meg az a oldal értékét!" << endl;
  cin >> a;
  cout << "Add meg a b oldal értékét!" << endl;
  cin >> b;
  cout << "Add meg a magasságot!" << endl;
  cin >> m;
  double paralelogrammaterulet = a*m/2;
  double paralelogrammakerulet = 2*(a+b);
  cout << "A paralelogramma területe: " << paralelogrammaterulet << endl << "A paralelogramma kerülete: " << paralelogrammakerulet;
}

if (answer2 == 5) {
  cout << "Add meg a sugár (r) értékét!" << endl;
  cin >> r;
  double korterulet = pi*r*r;
  double korkerulet = 2*pi*r;
  cout << "A kör területe: " << korterulet << endl << "A kör kerülete: " << korkerulet;
}

if (answer2 == 6) {
  cout << "Add meg az a értékét!" << endl;
  cin >> a;
  cout << "Add meg a magasság értékét!" << endl;
  cin >> m;
  double rombuszterulet = a*m;
  double rombuszkerulet = 4*a;
  cout << "A rombusz területe: " << rombuszterulet << endl << "A rombusz kerülete: " << rombuszkerulet;
}

if (answer2 == 7) {
  cout << "Add meg az a oldal értékét!" << endl;
  cin >> a;
  cout << "Add meg a b oldal értékét!" << endl;
  cin >> b;
  cout << "Add meg a c oldal értékét!" << endl;
  cin >> c;
  cout << "Add meg a magasság méretét!" << endl;
  cin >> m;
  double haromszog1terulet = a*m/2;
  double haromszog1kerulet = a+b+c;
  cout << "A háromszög területe: " << haromszog1terulet << endl << "A háromszög kerülete: " << haromszog1kerulet;
}
if (answer2 == 8) {
  cout << "Írd be, hogy hány szögű a szabalyos szög!" << endl;
  cin >> answer3;
  cout << "Add meg a a oldal értékét!" << endl;
  cin >> a;
  cout << "Add meg a magasság értékét!" << endl;
  cin >> m;
  double szogterulet = a*m/2*answer3;
  double szogkerulet = a*answer3;
  cout << "A(z) " << answer3 << " szögnek a területe: " << szogterulet << endl << "A(z) " << answer3 << " szögnek a kerülete: " << szogkerulet;
  
}
}

return 0;
}

