#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int t, r, n;
    int a, b;
    while(true)
    {
        cout << "Please enter two keys:" << endl;
        cin >> a;
        cout << "";
        cin >> b;
        if (a < b)
        {t = b; b = a; a = t;}
        r = a % b;
        n = a * b;
        while (r != 0)
        {
            a = b;
            b = r;
            r = a % b;
        }
        
        cout << "�������������Լ����" << b << "�� ��С��������" << n / b << endl;
    }
}
