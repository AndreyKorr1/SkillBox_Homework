#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    //Задание 1

    /*float weight, power, time, distance;
    cout << "Введите через пробел массу звездолета, силу тяги и время полета: ";
    cin >> weight >> power >> time;
    distance = ((power/weight)*pow(time,2)) / 2;
    cout << "Расстояние которое пролетит космолет равно " << distance;*/

    //Задание 2

    /*float hp, damage, resistance, power;

    cout << "Введите количество здоровья орка: ";
    cin >> hp;
    cout << "Введите его сопративление к магии: ";
    cin >> resistance;
    if (resistance > 1 || resistance < 0) {
      cout << "ошибка" << endl;
    } else {
      cout << "Орк готов" << endl;
    }
    while (hp > 0) {
      cout << "Введите мощность огненного шара: ";
      cin >> power;
      if (power < 0 || power > 1) {
        cout << "ошибка ввода" << endl;
      }
     if (resistance == 1) {
        cout << "Орка не убить \n";
        break;
      }else if (power > resistance) {
        damage = power - resistance;
      } else if (power <= resistance) {
        damage = power * resistance;
      }
      hp -= damage;
      cout << "Урон по Орку равен " << damage << endl;
      cout << "Уровень здоровья Орка " << hp << endl;
    }*/

    //Задание 3
       /*float x, y, z;
       int set, cube;
       cout << "Введите размеры бруска:" << endl << "X: ";
       cin >> x;
       cout << "Y: ";
       cin >> y;
       cout << "Z: ";
       cin >> z;
       cube = int((x*y*z) / 125);
       cout << "Вывод:" << endl << "Из этого бруска можно изготовить " << cube << " кубиков." << endl;
       set = pow(floor(cbrt(cube)), 3);
       cout << "Из них можно составить набор из " << set << " кубиков.";*/



       //Задание 4

          /*int file, speed;
          float procent;
          cout << "Укажите размер файла для скачивания: ";
          cin >> file;
          cout << "Какова скорость интернета: ";
          cin >> speed;
          int download = 0;
          int count = 1;
          do{
               download += speed;
               if (download > file){
                    download = file;
               }
               procent = (float(download) / float(file)) * 100.f;
               cout<< "Прошло "<< count << " сек. Скачано " << download << " из " << file << " МБ " << " (" << int(procent) << "%)" << endl;
               count++;
          }while(download < file);*/


     //Задание 5

    /*int km, pace, min;
    float seconds = 0;
    cout << "Привет, Сэм! Сколько километров ты пробежал? ";
    cin >> km;
    for (int i = 1; i < km + 1; i++) {
        cout << "Какой у тебя был темп на километре " << i << "?";
        cin >> pace;
        seconds += float(pace);
    }
    
    seconds /= float(km);
    seconds = round(seconds);
    min = int(seconds) / 60;
    seconds = seconds - (float(min) * 60.f);
    cout << "Твой средний темп за тренировку: " << min << " мин " << int(seconds) << " сек";*/
    
    //Задание 6
    /*int count = 0;
    int start;
    int end;
    cout << "Введите начальную амплитуду: ";
    cin >> start;
    cout << "Введите конечную амплитуду: ";
    cin >> end;
    float startF = float(start);
    float endF = float(end);
    while (startF > endF) {
        startF -= startF * 0.084;
        count++;
    }
    cout << "Маятник качнется " << count << " раз";*/



}