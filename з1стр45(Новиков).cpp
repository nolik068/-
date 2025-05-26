#include <iostream>
#include <cmath>
#include <ctime>

class ArrayProcessor {
private:
    int* arr; 
    int size;

    
    void initializeArray() {
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 101 - 50; 
        }
    }

public:
    // Конструктор
    ArrayProcessor(int n) : size(n) {
        arr = new int[size];
        srand(time(0)); 
        initializeArray();
    }

    // Деструктор для освобождения памяти
    ~ArrayProcessor() {
        delete[] arr;
    }

    // Вычисление суммы
    double calculateSum() {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Вычисление среднего арифметического
    double calculateAverage() {
        return calculateSum() / size;
    }

    // Вывод массива
    void printArray() {
        std::cout << "Массив: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int N;

    // Диалог с пользователем
    std::cout << "Введите трёхзначное число N: ";
    std::cin >> N;

    // Проверка на трёхзначное число
    if (N < 100 || N > 999) {
        std::cout << "Ошибка" << std::endl;
        return 1;
    }

    // Создание объекта класса
    ArrayProcessor processor(N);

    // Вывод массива
    processor.printArray();

    // Вычисление и вывод суммы
    double sum = processor.calculateSum();
    std::cout << "Сумма элементов: " << sum << std::endl;

    // Вычисление и вывод среднего арифметического
    double average = processor.calculateAverage();
    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}