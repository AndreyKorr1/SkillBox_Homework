

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Not a quadratic equation!" << endl;
    }
    float discriminant = pow(b,2) * c - 4 * a * c;
    if (discriminant > 0)
    {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1, 2: " << x1 << ", " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        float x = -b / (2 * a);
        cout << "Root: " << x << endl;
    }
    else
    {
        cout << "Complex scenario is not supported!" << endl;
    }
}
