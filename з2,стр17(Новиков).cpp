#include <iostream>
using namespace std;
 
int main() {  
    int n, reverse = 0, rem;    
    cout << "Введите число N(трёхзначное, натуральное): ";    
    cin >> n;
    
    if (n < 100 || n > 999) {
        cout << "Ошибка" << endl;
    }
    
    else {
        while (n > 0) {    
            rem = n % 10;      
            reverse = reverse * 10 + rem;    
            n /= 10;    
        }    
        cout << "Новое число: " << reverse << endl;     
        return 0;
    }
}
