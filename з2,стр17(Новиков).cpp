#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    if (x <= 0) {
        cout << "x должен быть больше 0" << endl;
    }
    else {

        double sqrt_abs_x = sqrt(fabs(x));
        double cos_sqrt_x = cos(sqrt_abs_x);
        double cos6 = pow(cos_sqrt_x, 6);
        double cos2 = pow(cos_sqrt_x, 2);
        double fraction = cos6 / (cos2 + 5);
        double arccos3 = pow(acos(fraction), 3);
        double lg_2x = log10(2 * x);
        double inner_log = pow(3, lg_2x) + 2;
        double log3_val = log(inner_log) / log(3);
        y = sqrt(arccos3 + log3_val);
        cout << "y(" << x << ") = " << y << endl;
    }

    int N;
    cout << "Введите N(трёхзначное, натуральное): ";
    cin >> N;

    
    if (N < 100 || N > 999) {
        cout << "Ошибка" << endl;
        return 1;
    }

    
    int reversed = 0;
    int temp = N;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit; 
        temp /= 10; 
    }

    cout << "Число с цифрами в обратном порядке: " << reversed << endl;

    return 0;
}
