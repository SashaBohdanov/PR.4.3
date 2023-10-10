#include <iostream>
#include <iomanip> // Додайте цей рядок
using namespace std;

int main()
{
    double a, b, c, Xp, Xk, dX ;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "Xp= "; cin >> Xp;
    cout << "Xk = "; cin >> Xk;
    cout << "dX = "; cin >> dX;

    double x = Xp;
    double F;

    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    



    while (x <= Xp)
    {
        if (a < 0 && c != 0)
            F = (a * x * x + b * x + c);
        else if (a > 0 && c == 0)
            F = (-a) / (x - b);
        else
            F = (a * (x + c));

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dX;
    }

    cout << "---------------------------" << endl;
    return 0;
}
