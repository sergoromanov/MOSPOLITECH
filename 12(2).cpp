#include <iostream>

using namespace std;

int main() {
    int n;
    char c;
    cout << "Napravlenie:";
    cin >> c;
    cout << "Komanda:";
    cin >> n;
    switch (c) {
    case 'С':
        switch (n) {
        case 1:
            c = 'З';
            break;
        case 0:
            c = 'С';
            break;
        case -1:
            c = 'В';
            break;
        }
        break;
    case 'В':
        switch (n) {
        case 1:
            c = 'С';
            break;
        case 0:
            c = 'В';
            break;
        case -1:
            c = 'Ю';
            break;
        }
    case 'Ю':
        switch (n) {
        case 1:
            c = 'В';
            break;
        case 0:
            c = 'Ю';
            break;
        case -1:
            c = 'З';
            break;
        }
        break;
    case 'З':
        switch (n) {
        case 1:
            c = 'Ю';
            break;
        case 0:
            c = 'З';
            break;
        case -1:
            c = 'С';
            break;
        }
    }
    cout << c;
}
