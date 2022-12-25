#include <iostream>
#include "date.h" 
using namespace std;
/*Функция вычисляет разность между двумя датами в днях. Даты представлены структурой с тремя полями: год, месяц, день.
*/
int main()
{
    setlocale(LC_ALL, "ru");
    using namespace date;
    int a;
    cin >> a;
    int b;
    cin >> b;
    try
    {
        sys_days birthday;
        sys_days today = floor<days>(std::chrono::system_clock::now());
        cout << (today - birthday).count() << endl;
    }
    catch (...) {
        cout << "Данные введены не коректно";
    }
}