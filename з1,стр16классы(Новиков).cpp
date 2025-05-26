#include <iostream>
#include <cmath>

class FunctionChecker {
private:
    // Вычисляем y(x)
    double computeY(double x) {
        double sqrt_abs_x = sqrt(fabs(x));
        double cos_sqrt_x = cos(sqrt_abs_x);
        double cos6 = pow(cos_sqrt_x, 6);
        double cos2 = pow(cos_sqrt_x, 2);
        double fraction = cos6 / (cos2 + 5);
        double arccos3 = pow(acos(fraction), 3);
        double lg_2x = log10(2 * x);
        double inner_log = pow(3, lg_2x) + 2;
        double log3_val = log(inner_log) / log(3);
        return sqrt(arccos3 + log3_val);
    }

public:
    // Публичный метод для вычисления y(x)
    double calculateY(double x) {
        return computeY(x);
    }

    // Проверка, принадлежит ли точка (x, y) области D
    bool isInRegionD(double x, double y) {
        // Условие 1: x должен быть в области определения (x > 0)
        if (x <= 0) {
            return false;
        }

        // Условие 2: y должен совпадать с y(x) (с учётом погрешности)
        double computed_y = computeY(x);
        const double EPSILON = 1e-6; // Погрешность для сравнения чисел с плавающей точкой
        return fabs(y - computed_y) < EPSILON;
    }
};

int main() {
    double x, y;

    // Создаём объект класса
    FunctionChecker checker;

    // Ввод x
    std::cout << "Введите x: ";
    std::cin >> x;

    // Вычисляем y(x)
    y = checker.calculateY(x);
    std::cout << "y(" << x << ") = " << y << std::endl;

    // Вводим y для проверки
    std::cout << "Введите y для проверки принадлежности точки (" << x << ", y) области D: ";
    std::cin >> y;

    // Проверяем принадлежность точки (x, y) области D
    if (checker.isInRegionD(x, y)) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return 0;
}