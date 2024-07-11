/*Управляющая компания рассылает странные квитанции: 
в них указана только полная стоимость ремонта многоквартирного дома, 
а сколько должна платить конкретная квартира — непонятно. Напишите программу, 
с помощью которой жители квартир смогут посчитать, какую сумму им надо заплатить. 
Сумма делится на все квартиры вне зависимости от площади, количества жильцов и комнат. 
Все значения сохраните в переменные и выводите в нужных местах, имитируя ввод данных.

*Пример работы программы: *
Приветствуем вас в калькуляторе квартплаты!

Введите сумму, указанную в квитанции: 4000000
Сколько подъездов в вашем доме? 10
Сколько квартир в каждом подъезде? 40
----Считаем-----
Каждая квартира должна платить по 10 000 руб.
*/

#include <iostream>

using namespace std;

int main(){
    int total_price, count_entrance, count_flat;
    cout << "Введите сумму, указанную в квитанции: ";
    cin >> total_price;
    cout << "Сколько подъездов в вашем доме? ";
    cin >> count_entrance;
    cout << "Сколько квартир в каждом подъезде? ";
    cin >> count_flat;

    cout << "----Считаем-----" << endl;
    cout << "Каждая квартира должна платить по " << total_price/ (count_entrance*count_flat) << " руб.";
}