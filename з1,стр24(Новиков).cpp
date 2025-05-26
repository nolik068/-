#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    // Ввод x
    cout << "Введите x: ";
    cin >> x;

    // Вычисляем y(x) в зависимости от условия
    if (x <= -3) {
        y = atan(sqrt(fabs(x))) + 3;
    }
    else if (x > -3 && x < 3) {
        y = cos((x * x + 2 * x) / (3 + x * x));
    }
    else { // x >= 3
        y = pow(x, 4) + pow(3, -x) * pow(x, -5);
    }

    // Вывод результата
    cout << "y(" << x << ") = " << y << endl;

    return 0;
}