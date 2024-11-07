#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int ax, ay, bx, by, cx, cy;
 double A,B,C,P,S;
 cout << "Vvedite coordinati dlya tochki A"<< endl;
 cin >> ax >> ay;
 cout << "Vvedite coordinati dlya tochki B"<< endl;
 cin >> bx >> by;
 cout << "Vvedite coordinati dlya tochki C"<< endl;
 cin >> cx >> cy;
A = sqrt(pow((double)(cx-ax),2)+pow((double)(cy-ay),2));
B = sqrt(pow((double)(bx-ax),2)+pow((double)(by-ay),2));
C = sqrt(pow((double)(bx-cx),2)+pow((double)(by-cy),2));
P = A+B+C;
cout << "Perimetr = "<< P <<endl;
S = sqrt(P*(P-A)*(P-B)*(P-C));
cout << "Ploshad = "<< S <<endl;
}
