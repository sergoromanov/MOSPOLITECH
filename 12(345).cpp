#include <iostream>
using namespace std;
void task3() {
    int n;
    cout << "Task3: Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий»." << "\n";
    cout << "Количество:";
    cin >> n;
    if (n / 10 == 1) {
        switch (n) {
        case 10:
            cout << "десять учебных заданий.";
            break;
        case 11:
            cout << "одинадцать учебных заданий.";
            break;
        case 12:
            cout << "двенадцать учебных заданий.";
            break;
        case 13:
            cout << "тринадцать учебных заданий.";
            break;
        case 14:
            cout << "четырнадцать учебных заданий.";
            break;
        case 15:
            cout << "пятнадцать учебных заданий.";
            break;
        case 16:
            cout << "шестнадцать учебных заданий.";
            break;
        case 17:
            cout << "семнадцать учебных заданий.";
            break;
        case 18:
            cout << "восемнадцать учебных заданий.";
            break;
        case 19:
            cout << "девятнадцать учебных заданий.";
            break;
        }
    }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }
        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "учебных заданий.";
            break;
        case 1:
            cout << "учебное задание.";
            break;
        case 2:
        case 3:
        case 4:
            cout << "учебных задания.";
            break;
        }
    }
    cout << "\n";
}
void task4() {
    cout << "Task4: Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать»." << "\n";
    int n;
    cout << "Число:";
    cin >> n;
    switch (n / 100) {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот  ";
        break;
    case 9:
        cout << "девятьсот  ";
        break;
    }
    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            cout << "десять";
            break;
        case 11:
            cout << "одинадцать";
            break;
        case 12:
            cout << "двенадцать";
            break;
        case 13:
            cout << "тринадцать";
            break;
        case 14:
            cout << "четырнадцать";
            break;
        case 15:
            cout << "пятнадцать";
            break;
        case 16:
            cout << "шестнадцать";
            break;
        case 17:
            cout << "семнадцать";
            break;
        case 18:
            cout << "восемнадцать";
            break;
        case 19:
            cout << "девятнадцать";
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "один";
            break;
        case 2:
            cout << "два";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "девять";
            break;
        }
    }
}
void task5() {
    cout << "Task5: В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы»." << "\n";
    int n;
    cout << "Год:";
    cin >> n;

    cout << "год ";

    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн";
        break;
    case 4:
    case 5:
        cout << "зелён";
        break;
    case 6:
    case 7:
        cout << "красн";
        break;
    case 8:
    case 9:
        cout << "жёлт";
        break;
    }

    switch ((n + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout << "ой ";
        break;
    case 6:
    case 7:
    case 8:
        cout << "ого ";
        break;
    }

    switch ((n + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    task3();
    cout << "\n";
    task4();
    cout << "\n";
    task5();

}
