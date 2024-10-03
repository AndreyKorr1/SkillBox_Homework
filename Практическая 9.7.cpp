// Практическая 9.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

bool numberTrue(string num) {
    if (num[0] != '.' && num[0] != '-' && (num[0] < '0' || num[0] > '9')) {
        return false;
    }
    int dot = 0;
    int minus = 0;
    int numbers = 0;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '.') {
            dot++;
        }
        else if (num[i] == '-') {
            minus++;
        }
        else if (num[i] != '.' && num[i] != '-' && (num[i] < '0' || num[i] > '9')) return false;
        else if (num[i] >= '0' && num[i] <= '9') numbers++;
    }
    if (dot > 1 || minus > 1 || ( num[0] != '-' && minus == 1) || numbers == 0) return false;

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Задание 1 

    /*string departure;
    string arrive;
    int duration;
    

    cout << "Введите времмя отправления (HH:MM):";
    cin >> departure;
    cout << "Введите время прибытия (HH:MM):";
    cin >> arrive;

    if (departure.length() != 5 || departure[2] != ':' || departure[0] < '0' || departure[0] > '9' || departure[1] < '0'
        || departure[1] > '9' || departure[3] < '0' || departure[3] > '9' || departure[4] < '0' || departure[4] > '9'
        || arrive.length() != 5 || arrive[2] != ':' || arrive[0] < '0' || arrive[0] > '9' || arrive[1] < '0'
        || arrive[1] > '9' || arrive[3] < '0' || arrive[3] > '9' || arrive[4] < '0' || arrive[4] > '9') {
        cout << "не правильный ввод";
    }
    else {



        int hoursDeparture = 10 * (departure[0] - '0') + (departure[1] - '0');
        int minutesDeparture = 10 * (departure[3] - '0') + (departure[4] - '0');

        int timeDeparture = 60 * hoursDeparture + minutesDeparture;

        int hoursArrive = 10 * (arrive[0] - '0') + (arrive[1] - '0');
        int minutesArrive = 10 * (arrive[3] - '0') + (arrive[4] - '0');

        int timeArrive = 60 * hoursArrive + minutesArrive;

        if (timeDeparture < timeArrive) {
            duration = timeArrive - timeDeparture;
            cout << "Поездка составила " << duration / 60 << " ч. " << duration - ((duration / 60) * 60) << " мин.";
        }
        else {
            duration = timeDeparture - timeArrive;
            cout << "Поездка составила " << (1440 - duration) / 60 << " ч. " << (1440 - duration) - ((1440 - duration) / 60) * 60 << " мин.";
        }
    }*/

    //Задание 2

    /*string num;
    cout << "Введите число: ";
    cin >> num; 

    if (numberTrue(num)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }*/


    //Задание 3

    /*string text;
    cout << "Введите строку\n";
    getline(cin, text);
    int words = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            continue;
        }
        else if (i == 0 || text[i - 1] == ' ') {
            words++;
        }
    }
    cout << "Ответ: " << words;*/

    // Задание 4

    cout << "введите чсило: ";
    cin >> 
}
