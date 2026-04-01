#include <iostream>

using namespace std;

// variabel global
int n;
int pilihan;

// --- Prototipe Fungsi ---
bool isPrime(int num);
bool isFibonacci(int num);
void inputNumber();
void displayResult(int type);
void showMenu();

int main()
{
    bool running = true;

    while (running)
    {
        showMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputNumber();
            displayResult(1);
            break;
        case 2:
            inputNumber();
            displayResult(2);
            break;
        case 0:
            cout << "Keluar dari program. Terima kasih!" << endl;
            running = false;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    int i = 2;

    while (i * i <= num)
    {
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

bool isFibonacci(int num)
{
    if (num < 0)
        return false;
    int a = 0, b = 1;

    while (a < num)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == num);
}


