# Отчет по лабораторной работе N 13 по курсу
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
На вход подаётся произвольный набор английских слов, разделённых пробелами, запятыми, знаками табуляции и границами строк. Букву 'y' для простоты считать согласной (гласными или согласными бывают звуки, но не буквы). Необходимо проверить выполнение следующего условия: есть ли два соседних слова с непересекающимся набором согласных?

## 4. Оборудование

Процессор: Intel(R) Pentium(R) CPU 4417U @ 2.30GHz 2.30 GHz\
ОП: 3973 Мб\
НМД: 1024 Гб\
Монитор: 1920x1080

## 5. Программное обеспечение

Microsoft Visual Studio Code (User)\
v 1.61.2

## 6. Идея, метод, алгоритм решения задачи

Реализация множества приведена в методических пособиях. Задумаемся, как проверить, что буква является согласной? Первое, что приходит на ум - создать множество гласных букв и если побитовая конъюнкция с очередным символом будет давать 0, то символ есть согласная буква. Далее(предусматривая, что написаны функции для объединения, пресечения множеств) объединяем все согласные буквы, подаваемого на вход слова, в одно множество и пересекаем с таким же множеством предыдущего слова. Если в пересечении получился 0, то выводим "Yes". Иначе если для всех слов не выполнено, то выводим "No".

## 7. Сценарий выполнения работы

Рассмотрим на примере из чекера, что будет происходить в коде:
Ввод: ipso facto
Вывод:Yes

Во-первых, мы читаем очередной символ с помощью команды ```f = getchar()```. Во-вторых, проверяем, является ли символ - согласной буквой при помощи следующего куска кода:
```
int is_not_cons(char a)
{
    unsigned long set = 0;
    if (a != ',' && a != ' ' && (!iscntrl(a))) {
        a = tolower(a);
        if (a >= 'a' && a <= 'z') {
            set = 1u << (a - 'a');
            if (intersection(mx_low, set) == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}
```
Где константа mx_low = 1065233 - множество всех гласных латинского алфавита. Если символ - гласная, то ничего не делаем в основной функции. В данном тесте первое слово содержит 2 согласные - ps. В виде множество они будут представлены константой 294912, второе слово - 3 согласные - fct, и будет представлено константой 524324. Побитовая конъюнкция чисел 294912 и 524324 есть 0. Следовательно, выводим "Yes".

## 8. Распечатка протокола
```
#include <stdio.h>
#include <ctype.h>
#define mx_low 1065233

unsigned long intersection(unsigned long set1, unsigned long set2)
{
    return set1 & set2;
}
unsigned long pool(unsigned long set1, unsigned long set2)
{
    return set1 | set2;
}
int is_not_cons(char a)
{
    unsigned long set = 0;
    if (a != ',' && a != ' ' && (!iscntrl(a))) {
        a = tolower(a);
        if (a >= 'a' && a <= 'z') {
            set = 1u << (a - 'a');
            if (intersection(mx_low, set) == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}
int main(void)
{

    char f;
    int flag = 0;
    unsigned long binary = 0, set = 0, final_bynary = 0, temp = 0, flag_2 = 0, flag_3 = 0;
    while ((f = getchar()) != EOF) {
        if (is_not_cons(f) == 1) {
            set = 1u << (f - 'a');
            binary = pool(binary, set);
            flag_2 = 1;
        } else if (is_not_cons(f) == 2) {
            while (f != ' ' || f != ',' || !iscntrl(f)) {
                f = getchar();
                flag = 0;
                binary = 0;
                final_bynary = 0;
                flag_2 = 0;
            }
        } else if (iscntrl(f) || f == ' ' || f == ',') {
            if ((intersection(binary, final_bynary) == 0) && flag == 1 && flag_2 == 1) {
                printf("Yes\n");
                temp = 1;
                break;
            } else if (flag_2 == 1) {
                final_bynary = binary;
                binary = 0;
                flag = 1;
                flag_2 = 0;
            }
        } else if (f == '\n' && flag == 0 && flag_2 == 1) {
            printf("Yes\n");
            temp = 1;
        }
    }
    if (temp == 0) {
        printf("No\n");
    }
    return 0;
}
```

## 9. Дневник отладки


| № | Лаб. или дом. | Дата       | Время     | Событие                  | Действие по исправлению | Примечание  |
|---|---------------|------------|-----------|--------------------------|-------------------------|-------------|
| 1 | Лаб.          | 14.01.2022 | 20:04     | ошибка на 43 тесте       | Обнулял флаг наличия согласной в слове для каждого слова | |
| 2 | Лаб.          | 15.01.2022 | 10:03     | ошибка на 52 тесте       | Учел случай, когда в начале входных данных могут стоять разделители | |

## 10. Замечания автора по существу работы

Замечаний нет.

## 11. Выводы
После выполнения данной ЛР научился реализовывать множества в ЯП C и операции, с ними связанные. Также изучил некоторые функции библиотеки ctype.h.

