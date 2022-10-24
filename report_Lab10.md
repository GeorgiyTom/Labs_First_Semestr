# Отчет по лабораторной работе N 10 по курсу
# "Фундаментальная информатика"

Студент группы: M8O-104Б-21, Томаев Георгий Альбердович\
Контакты: georgiitomaev132@gmail.com\
Работа выполнена: 25.10.2021\
Преподаватель: Безлуцкая Елизавета Николаевна

## 1. Тема

Отладчик GDB.

## 2. Цель работы

Научиться производить отладку программы через консоль, с использованием отладчика GDB.

## 3. Задание

Отладить код 11 лабораторной работы.

## 4. Оборудование

Процессор: Intel(R) Pentium(R) CPU 4417U @ 2.30GHz 2.30 GHz\
ОП: 3973 Мб\
НМД: 1024 Гб\
Монитор: 1920x1080

## 5. Программное обеспечение

Командная строка Windows.

## 6. Идея, метод, алгоритм решения задачи

Изучить команды отладчика.

## 7. Сценарий выполнения работы

Отладить программу с использованием команд GDB.

## 8. Распечатка протокола
Команда help выведет понятия основных команд:
```
(gdb) help
List of classes of commands:

aliases -- Aliases of other commands
breakpoints -- Making program stop at certain points
data -- Examining data
files -- Specifying and examining files
internals -- Maintenance commands
obscure -- Obscure features
running -- Running the program
stack -- Examining the stack
status -- Status inquiries
support -- Support facilities
tracepoints -- Tracing of program execution without stopping the program
user-defined -- User-defined commands

Type "help" followed by a class name for a list of commands in that class.
Type "help all" for the list of all commands.
Type "help" followed by command name for full documentation.
```
Использование команд start и run практически равнозначно, однако при запуске run остановится на последнем брейкпоинте, в то время, как start на первой смысловой.
```
(gdb) start
Temporary breakpoint 1 at 0x4015c1: file yo.c, line 70.
Starting program: C:\Си Projects/a.exe
[New Thread 10924.0x202c]
[New Thread 10924.0x2638]

Temporary breakpoint 1, main () at yo.c:70
70          int count = 0, d_1 = 0, d_2 = 0, d_3 = 0, d_4 = 0, d_5 = 0, sum = 0, ans = 0, flag = 1, priznak = 0;

```
Команда break ставит "флажок", на котором команда должна остановиться:
```
(gdb) break 77
Breakpoint 6 at 0x401650: file yo.c, line 77.
```
Теперь можно показать использование команды run:
```
(gdb) run
Starting program: C:\Си Projects/a.exe
[New Thread 6280.0x1d64]
[New Thread 6280.0x262c]
234 s

Breakpoint 6, main () at yo.c:77
77                          flag = 1;
```
Команда continue переходит к выполнению программы со следующего брейкпоинта:
```
(gdb) continue
Continuing.

Breakpoint 7, main () at yo.c:79
79                              d_1 = Yura(f);
(gdb) continue
Continuing.

Breakpoint 8, main () at yo.c:89
89                          if (count > 2 && count < 6) {
```
Команда print выводит значение аргумента:
```
(gdb) print count
$4 = 1
```
Команда next:
```
(gdb) next
92                          if (count == 3) {
(gdb) next
95                          if (count > 3 && count < 6) {
(gdb) next 1
98                          if (count == 4) {
```
Команда step аналогична команде next, но при этом у функции показываются значения аргументов и не только.
Команда list распечатывает тело функций, условных операторов, или вообще всю программу. Но по умолчанию лишь следующие 10 строк:
```
(gdb) list
93                              d_3 = Yura(f);
94                          }
95                          if (count > 3 && count < 6) {
96                              d_3 *= 10;
97                          }
98                          if (count == 4) {
99                              d_4 = Yura(f);
100                         }
101                         if (count > 4 && count < 6) {
102                             d_4 *= 10;
```
Команда setvar присваивает значение переменной, передаваемой в аргументе:
```
(gdb) set flag = 0
(gdb) print flag
$3 = 0
```
Команда ptype печатает тип переменной:
```
(gdb) ptype flag
type = int
```
Выйти из отладчика можно командой quit:
```
(gdb) quit
A debugging session is active.

        Inferior 1 [process 8144] will be killed.

Quit anyway? (y or n) y
y

C:\Си Projects>
```
## 9. Дневник отладки
По мере выполнения лабораторной работы ошибок не возникло.

## 10. Замечания автора по существу работы

Замечаний нет.

## 11. Выводы
После выполнения данной работы, я научился пользоваться отладчиком gdb в консоли Windows. Однозначно, этот навык не будет лишним для программиста, но на мой взгляд настоящий профессионал не должен пользоваться отладчиком.

