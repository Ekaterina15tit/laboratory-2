#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;
int get_random(void) { return rand() % 100; }
bool is_even(const int x) { return (x % 2) == 0; }

int main(void)
{
    setlocale(0, "rus");
    srand(static_cast<unsigned int>(time(0)));

    cout << "Введите количество элементов массива: ";
    int n = 0;
    cin >> n;

    int* arr = new int[n];
    int* begin = arr;
    int* end = arr + n;

  //  Сформировать массив из n элементов с помощью датчика случайных чисел
    generate(begin, end, get_random);
    cout << "Исходный массив: ";
    copy(begin, end, ostream_iterator<int>(cout, " "));
    cout << "\n\n";

    //   Выполнить удаление указанных элементов из массива.
    cout << "Введите количество элементов, которые следует удалить: ";
    int N = 0;
    cin >> N;
    cout << "Введите индекс элемента, с которого начать удаление: ";
    int K = 0;
    cin >> K;
    int* begin_del = (K < n) ? begin + K : end;
    int* end_del = (N + K < n) ? begin_del + N : end;
    copy(end_del, end, begin_del);
    end = begin_del;
    n = distance(begin, end);
    //)   Вывести полученный результат.
    cout << "Массив с удалёнными элементами: ";
    copy(begin, end, ostream_iterator<int>(cout, " "));
    cout << "\n\n";

    //  Выполнить добавление указанных элементов в массив.
    cout << "Введите количество элементов, которое нужно добавить: ";
    cin >> K;
    n += K;
    int* new_arr = new int[n];
    generate(new_arr, new_arr + K, get_random);
    copy(begin, end, new_arr + K);
    begin = new_arr;
    end = new_arr + n;
    delete[] arr;
    //   Вывести полученный результат.
    cout << "Массив с добавленными элементами: ";
    copy(begin, end, ostream_iterator<int>(cout, " "));
    cout << "\n\n";

   

    system("pause");
    return 0;
}