#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

class sDim {
private:
    long double Pi;
public:
    long double l;
    long double w;
    long double h;
    long double r;
    
    void setPi(long double PiF, long double PiS) {
        Pi = PiF / PiS;
    }
    long double getPi() {
        return Pi;
    }
};

int main()
{
    std::cout << "Volume Calculator\n\n";
    cout << "Press R to calculate volume of a Cube or Rectangular Prism" << endl;
    cout << "Press S to calculate volume of a Sphere" << endl;
    cout << "Press C to calculate volume of a Cylinder\n" << endl;

    char c;
    long double cI;
    long double cN = 4;
    long double cD = 3;

    c = _getch();
    
    if (c == 'r' || c == 'R') {
        sDim dimR;
        dimR.setPi(3926990817, 1250000000i64);
        cout << "Enter length in centimeters: ";
        cin >> dimR.l;
        cout << "Enter height in centimeters: ";
        cin >> dimR.h;
        cout << "Enter width in centimeters: ";
        cin >> dimR.w;
        cout << endl;
        cout << "Volume = " << dimR.l * dimR.h * dimR.w << "cm";
        cout << endl << endl;
    }
    else if (c == 's' || c == 'S') {
        sDim dimS;
        dimS.setPi(3926990817, 1250000000i64);
        cout << "Enter radius in centimeters: ";
        cin >> dimS.r;
        cI = cN / cD;
        cI = cI * dimS.getPi() * pow(dimS.r, 3);
        cout << endl;
        cout << "Volume = " << cI << "cm";
        cout << endl<< endl;
    }
    else if (c == 'c' || c == 'C') {
        sDim dimC;
        dimC.setPi(3926990817, 1250000000i64);
        cout << "Enter radius in centimeters: ";
        cin >> dimC.r;
        cout << "Enter height in centimeters: ";
        cin >> dimC.h;
        cout << endl;
        cout << "Volume = " << dimC.getPi() * dimC.h * pow(dimC.r, 2) << "cm";
        cout << endl << endl;
    }
}
