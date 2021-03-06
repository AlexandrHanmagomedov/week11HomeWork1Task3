/*
Задание 3. Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.

Соверше́нное число́ (др.-греч. ἀριθμὸς τέλειος) — натуральное число, равное сумме всех своих собственных делителей
(то есть всех положительных делителей, отличных от самого́ числа). Например, число 6 равно сумме своих собственных делителей 1 + 2 + 3.
Это понятие было введено пифагорейцами в VI веке до н. э.; согласно их нумерологической мистике,
совпадение числа с суммой своих делителей свидетельствовало об особом совершенстве такого числа.
6 (1+2+3)
28 (1+2+4+7+14)
496
8128
33550336
8589869056
*/

/////////////////////
#include <iostream>
using namespace std;

void sov4islo(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        int otv = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                otv += j;
            }
        }
        if (otv == i)
        {
            cout << otv << endl;
        }
    }
}
void main()
{
    int a, b;
    cout << "Vvedite na4al`noe 4islo ";
    cin >> a;
    cout << "Vvedite kone4noe 4islo ";
    cin >> b;
    cout << "Sovershennie 4isla intervale ot   " << a << "  do  " << b << " : \n";
    sov4islo(a, b);
}