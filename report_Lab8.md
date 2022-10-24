# Отчет по лабораторной работе N 8 по курсу
# "Фундаментальная информатика"

Студент группы: M8O-104Б-21, Томаев Георгий Альбердович\
Контакты: georgiitomaev132@gmail.com\
Работа выполнена: 25.10.2021\
Преподаватель: Безлуцкая Елизавета Николаевна

## 1. Тема

Язык программирования C.

## 2. Цель работы

Разработка алгоритма на языке программирования C.

## 3. Задание

A) Найти и вывести сумму двх целых чисел, не меньших -32000 и не превосходящих 32000.

B) Найти сумму последовательности из не более чем 40 целых чисел со значениями от -20000000 до 20000000.

C) Найти сумму последовательности из не более чем 40 целых чисел со значениями от -20000000 до 20000000. Суммировать необходимо только числа, превосходящие или равные 10.

## 4. Оборудование

Процессор: Intel(R) Pentium(R) CPU 4417U @ 2.30GHz 2.30 GHz\
ОП: 3973 Мб\
НМД: 1024 Гб\
Монитор: 1920x1080

## 5. Программное обеспечение

Microsoft Visual Studio Code (User)\
v 1.61.2
## 6. Идея, метод, алгоритм решения задачи
для задачи А
```
#include <stdio.h>
int main(void)
{
    
    int a = 0, b = 0, res;
    scanf("%d%d", &a, &b);
    res = a + b;
    printf("%d\n", res);
    return 0;
}
```

для задачи B

```
#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, res = 0, num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int temp = 0;
        scanf("%d", &temp);
        res += temp;
    }
    printf("%d\n", res);
    return 0;
}
```
для задачи C

```
#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, res = 0, num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int temp = 0;
        scanf("%d", &temp);
        if (temp >= 10) {
            res += temp;
        }
        
    }
    printf("%d\n", res);
    return 0;
}
```

## 7. Сценарий выполнения работы

A) Для входных данных 12 13 посмотрим, что делает программа:\
Сначала она считывает значения 12 13 в переменные a,b соответственно. Далее складывает их и записывает в переменную res, которую мы и выводим на экран.\
B) Для входных данных 3 1 2 3 посмотрим, что делает программа:\
Самое первое число - кол-во чисел в последовательности, которое считывается в переменную num, следовательно, введем цикл с количеством повторений равным num. Очередное значение последовательности считываем в переменную temp. Далее к res прибавляем temp и в конце выводим res. Это и будет ответом.\
С) Эта задача практически ничем не отличается от задачи B. Единственное отличие - дополнительное условие. Мы вводим условие, что temp должна быть >= 10. Тогда и только тогда мы к res прибавляем temp.

## 8. Распечатка протокола
```
#include <stdio.h>
int main(void)
{
    
    int a = 0, b = 0, res;
    scanf("%d%d", &a, &b);
    res = a + b;
    printf("%d\n", res);
    return 0;
}
```

```
#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, res = 0, num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int temp = 0;
        scanf("%d", &temp);
        res += temp;
    }
    printf("%d\n", res);
    return 0;
}
```

```
#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, res = 0, num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int temp = 0;
        scanf("%d", &temp);
        if (temp >= 10) {
            res += temp;
        }
        
    }
    printf("%d\n", res);
    return 0;
}
```

## 9. Дневник отладки
По мере выполнения лабораторной работы ошибок не возникло.

## 10. Замечания автора по существу работы

Замечаний нет.

## 11. Выводы

После выполнения данной лабораторной работы, я освоил основы синтаксиса ЯП C.
