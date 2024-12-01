#include <iostream>
#include <vector>

using namespace std;



bool comparison(int a[4][4], int b[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void ConvertMatrix(int a[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                a[i][j] = 0;
            }
            else {
                continue;
            }
        }
    }
}

void TrueBobble(bool a[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            a[i][j] = true;
        }
    }
}

void DisplayWrap(bool a[12][12])
{
    bool allPopped = true;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (a[i][j]) {
                cout << "o ";
            }
            else {
                cout << "x ";
            }
            if (a[i, j]) allPopped = false;
        }
        cout << endl;
    }
    if (allPopped) {
        cout << "Все пузырьки лопнули!" << std::endl;
    }
}

void popRegion(bool a[12][12], int x1, int y1, int x2, int y2) {
    int size = 12;
    if (x1 < 0 || x1 >= size || x2 < 0 || x2 >= size || y1 < 0 || y1 >= size || y2 < 0 || y2 >= size || x1 > x2 || y1 > y2) {
        cerr << "Ошибка: Некорректные координаты региона." << endl;
        return;
    }

    for (int i = x1; i <= x2; ++i) {
        for (int j = y1; j <= y2; ++j) {
            if (a[i][j]) {
                a[i][j] = false;
                cout << "Pop!" << endl;
            }
        }
    }
}


int main()
{
    //Задание 1 
    /*int tableware[6][2] = {
        {4,4},
        {3,3},
        {3,3},
        {3,3},
        {3,3},
        {3,3}
    };
    int plates[6][2] = {
        {3,3},
        {2,2},
        {2,2},
        {2,2},
        {2,2},
        {2,2}
    };

    int chairs[6][2] = {
        {1,1},
        {1,1},
        {1,1},
        {1,1},
        {1,1},
        {1,1}
    };
    chairs[4][0] += 1;//стул для ребенка
    tableware[2][1] -= 1;//украдена ложка
    tableware[0][0] -= 1;//ложку вип гость отдал
    tableware[2][1] += 1;//ложка от вип гостя
    plates[0][0] -= 1;//забрали тарелку вип гостя*/


    //Задание 2
    /*string user = "X";
    int x, y;
    bool win = false;
    int count = 0;
    string game[3][3] = {
        {"", "", ""},
        {"", "", ""},
        {"", "", ""}
    };

    for (int i = 0; i < 9; i ++) {
        if (win) {
            break;
        }
        else {
            cout << "enter the coordinates of the symbol: ";
            cin >> x >> y;
            if (game[x][y] != "") {
                cout << "these coordinates are occupied" << endl;
            }
            else if ((x > 2 || x < 0) || (y > 2 || y < 0)) {
                cout << "incorrect coordinates " << endl;
            }
            else {
                game[x][y] = user;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << game[i][j] << " ";
                    }
                    cout << endl;
                }
                for (int i = 0; i < 3; i++) {
                    if (game[i][0] == user && game[i][1] == user && game[i][2] == user) {
                        cout << "Player " << user << " win!";
                        win = true;
                        break;
                    }
                    else if (game[0][i] == user && game[1][i] == user && game[2][i] == user) {
                        cout << "Player " << user << " win!";
                        win = true;
                        break;
                    }
                }
            }
            if (user == "X") {
                user = "O";
            }
            else {
                user = "X";
            }
        }
    }
    if (!win) {
        cout << "draw";
    }*/

    //Задание 3
    /*int A[4][4];
    int B[4][4];

    cout << "Enter elements of matrix A (4x4):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B (4x4):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> B[i][j];
        }
    }

    if (comparison(A, B)) {
        char answer;
        cout << "choose the matrix A or B: ";
        cin >> answer;
        if (answer == 'A') {
            ConvertMatrix(A);
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            ConvertMatrix(B);
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    cout << B[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    else {
        cout << "Matrix not equal";
    }*/


    //Задание 4

    /*float a[4][4];
    vector<float> b(4);
    vector<float> c(4);
    float sum = 0.0f;
    cout << "Enter elements of matrix A (4x4):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of vector B (4): " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum += a[i][j] * b[j];
        }
        c[i] = sum;
        sum = 0.0f;
    }

    for (int i = 0; i < 4; i++) {
        cout << c[i] << " ";
    }*/

    //Задание 5
    /*bool bubbleWrap[12][12];

    TrueBobble(bubbleWrap);

    while (true) {
        (DisplayWrap(bubbleWrap));

        int x1, y1, x2, y2;
        cout << "Введите координаты региона (x1 y1 x2 y2): ";
        cin >> x1 >> y1 >> x2 >> y2;

        popRegion(bubbleWrap, x1, y1, x2, y2);
    }*/

}