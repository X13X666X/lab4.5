#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    double R1, R2, x, y;

    srand((unsigned)time(0));

    cout << "R1: "; cin >> R1;
    cout << "R2: "; cin >> R2;

    cout << "\n1 methood:\n";
    for (int i = 0; i < 10; i++) 
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if (x * x + y * y >= R1 * R1 && x * x + y * y <= R2 * R2) {
            cout << " yes\n";
        }
        else {
            cout << " no\n";
        }
    }

    
    cout << "\n2 methood:\n";
    for (int i = 0; i < 10; i++) {
        x = R2 * (2.0 * rand() / RAND_MAX - 1);
        y = R2 * (2.0 * rand() / RAND_MAX - 1);

        if (x * x + y * y >= R1 * R1 && x * x + y * y <= R2 * R2) {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " yes\n";
        }
        else {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " no\n";
        }
    }

    return 0;
}
