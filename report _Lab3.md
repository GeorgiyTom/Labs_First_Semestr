# Отчет по лабораторной работе N 3 по курсу
# "Фундаментальная информатика"

Студент группы: M80-104Б, Томаев Георгий Альбердович\
Контакты: georgiitomaev132@gmail.com\
Работа выполнена: 19.09.2021\
Преподаватель: Безлуцкая Елизавета Николаевна\

## 1. Тема

Операционная среда ОС UNIX

## 2. Цель работы

Научиться работать с удаленными серверами(машинами) 

## 3. Задание

1. Создать любой файл, скопировать его куда угодно в вашу домашнюю директорию на удаленный сервер (scp), зайти на удаленный сервер, убедиться что файл скопирован (ls), выйти с удаленного сервера (exit)

2. Создать любую непустую директорию, скопировать ее куда угодно в вашу домашнюю директорию на удаленный сервер (scp -r), зайти на удаленный сервер, убедиться что директория скопирована (ls), выйти с удаленного сервера (exit)

3. Скопировать любой файл с удаленного сервера на локальную машину (scp), посмотреть его содержимое

4. Скопировать любой другой файл с удаленного сервера на локальную машину (rsync), узнать кодировку файла (file — это название команды), перекодировать файл в кодировку utf-8 (iconv — это название команды), посмотреть его содержимое (загуглить, как это сделать)

5. Создать непустую директорию, заархивировать ее (tar — это название команды), сжать архив (gzip — это название команды), скопировать его на удаленную машину.

## 4. Оборудование

Процессор: Intel® Pentium(R) CPU 4417U @ 2.30GHz × 4\ 
ОП: 3.7 Гб\
НМД: 1024 Гб\
Монитор: 1920x1080\

## 5. Программное обеспечение

Операционная система семейства: **linux (ubuntu)**, версия **20.04.3 LTS**\
Интерпретатор команд: **bash**, версия **4.4.19**.\
Система программирования: **--**, версия **--**\
Редактор текстов: **emacs**, версия **25.2.2**\
Утилиты операционной системы: **--**\
Прикладные системы и программы: **--**\
Местонахождение и имена файлов программ и данных на домашнем компьютере: **--**\

## 6. Идея, метод, алгоритм решения задачи

Для начала изучим все необходимые для реализации задания команды. Когда мы полностью освоили команды приступаем к реализации.


## 7. Сценарий выполнения работы

Внимательно прописывать команды.

## 8. Распечатка протокола
```|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ mkdir dir1 ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd dir1 ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/dir1$ touch openme.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/dir1$ cat >> openme.txt
Never gonna give you up
No matter how you treat me
Never gonna give you up
So don't you think of leavin' ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/dir1$ scp -P 8016 openme.txt tomaev@194.58.90.16:~/data/42e5elie/
tomaev@194.58.90.16's password: 
openme.txt                                                                                                                                                               100% 1345   112.0KB/s   00:00    | |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/dir1$ cd .. ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ssh -p 8016 tomaev@194.58.90.16
tomaev@194.58.90.16's password: 
Last login: Sun Sep 19 14:22:33 2021 from 217.9.93.133 ||
||tomaev@c156d43dc6ef:~$ ls
data |
||tomaev@c156d43dc6ef:~$ cd data |
||tomaev@c156d43dc6ef:~/data$ cd 42e5elie |
||tomaev@c156d43dc6ef:~/data/42e5elie$ ls 
bhhwg.txt      cdotp.txt      cilyt.txt.txt  dzggu.txt.txt  fteag.data     gcjfv.data  jsyzv.data  khysr.txt.txt  lotvh.txt.txt  vaqtj.txt.txt  ygmye.txt
bhhwg.txt.txt  cdotp.txt.txt  crxym.data     frohw.txt      fvzen.txt      gokkx.data  kbuaz.data  ktvtz.data     openme.txt     vqldg.data     ygmye.txt.txt
bhlfx.data     cilyt.txt      dzggu.txt      frohw.txt.txt  fvzen.txt.txt  iwmhl.data  khysr.txt   lotvh.txt      vaqtj.txt      ygett.data |
||tomaev@c156d43dc6ef:~/data/42e5elie$ cat openme.txt
Never gonna give you up
No matter how you treat me
Never gonna give you up
So don't you think of leavin' |
||tomaev@c156d43dc6ef:~/data/42e5elie$ exit
logout
Connection to 194.58.90.16 closed. |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ mkdir test ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd test ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ touch testing.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ ls 
testing.txt | |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ cd .. ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ scp -r -P 8016 ~/test tomaev@194.58.90.16:~/data/
tomaev@194.58.90.16's password: 
testing.txt                                                                                                                                                              100%    0     0.0KB/s   00:00 | |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ssh -p 8016 tomaev@194.58.90.16
tomaev@194.58.90.16's password: 
Last login: Sun Sep 19 14:39:39 2021 from 217.9.93.133 ||
||tomaev@c156d43dc6ef:~$ ls
data |
||tomaev@c156d43dc6ef:~$ cd data |
||tomaev@c156d43dc6ef:~/data$ ls
42e5elie  4n94l854  gm6erpn3  h2slos0c  lg30pgm3  lgjuzhpv  rrz94ha7  test  tl7vzut2  yla70qgn  ze79dct0 |
||tomaev@c156d43dc6ef:~/data$ exit
logout
Connection to 194.58.90.16 closed. |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ scp -r -P 8016 tomaev@194.58.90.16:~/data/42e5elie/frohw.txt ~/dir1/
tomaev@194.58.90.16's password: 
frohw.txt                                                                                                                                                                100%  360KB 537.2KB/s   00:00  | |  
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd dir1 ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/dir1$ cat frohw.txt
Ptcm3lBcOTGDmMbLp6LdbX90cPtCJqDBuBTbpGdzChV00eTwPrKhSRh...h ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ rsync -e "ssh -p 8016" tomaev@194.58.90.16:~/data/42e5elie/ygmye.txt ~/test/
tomaev@194.58.90.16's password: ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ls
 dir1   polzovatel1   polzovatel2   polzovatel3   polzovatel4   snap   test   Видео   Документы   Загрузки   Изображения   Музыка   Общедоступные  'Рабочий стол'   Шаблоны ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ test ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd test ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ ls
testing.txt  ygmye.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ file ygmye.txt
ygmye.txt: ASCII text, with very long lines, with no line terminators ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ iconv -f ASCII -t UTF-8 ygmye.txt -o ygmye2.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ ls 
testing.txt  ygmye2.txt  ygmye.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/test$ cat ygmye2.txt
KH8qE6ctXxKva9R16mqZCXOHYPhWYCT6v8Jmj7QVbZ6VsIIQiL3wk4Ed3dJYhpEa6E8ztgbBvGgYoNMOanWvYo1EX4Em4JkILkvwfXkqTlflI2OAF2LqD3mickIkiYFs1lqsz6zrBWNAH7zHg0AOSqcDVMTLsivb8lmsaruTeaVSjVePQ3KEabeozl6EvVABLyj2vE334X7mRCt35cUaYo1NHc...k ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ mkdir zip ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd zip ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/zip$ touch one.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/zip$ touch two.txt three.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/zip$ ls
one.txt  three.txt  two.txt ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ tar cf taring.tar zip ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ls 
 dir1   polzovatel1   polzovatel2   polzovatel3   polzovatel4   snap   taring.tar   test   zip   Видео   Документы   Загрузки   Изображения   Музыка   Общедоступные  'Рабочий стол'   Шаблоны ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ gzip taring.tar ||
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ls -l 
итого 68
drwxr-xr-x 2 georgiy georgiy 4096 сен 19 17:33  dir1
drwxrwxr-x 6 georgiy georgiy 4096 сен 15 18:54  polzovatel1
drwxrwxr-x 2 georgiy georgiy 4096 сен 15 18:53  polzovatel2
drwxrwxr-x 2 georgiy georgiy 4096 сен 15 18:53  polzovatel3
drwxrwxr-x 2 georgiy georgiy 4096 сен 15 18:53  polzovatel4
drwxr-xr-x 3 georgiy georgiy 4096 сен 19 17:03  snap
-rw-rw-r-- 1 georgiy georgiy  236 сен 19 20:21  taring.tar.gz
drwxrwxr-x 2 georgiy georgiy 4096 сен 19 20:10  test
drwxrwxr-x 2 georgiy georgiy 4096 сен 19 20:21  zip
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Видео
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Документы
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Загрузки
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Изображения
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Музыка
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Общедоступные
drwxr-xr-x 2 georgiy georgiy 4096 сен 15 19:19 'Рабочий стол'
drwxr-xr-x 2 georgiy georgiy 4096 сен 14 19:56  Шаблоны | |
|georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ssh -p 8016 tomaev@194.58.90.16
tomaev@194.58.90.16's password: 
Last login: Sun Sep 19 16:15:22 2021 from 217.9.93.133 ||
||tomaev@c156d43dc6ef:~$ ls
data |
||tomaev@c156d43dc6ef:~$ cd data |
||tomaev@c156d43dc6ef:~/data$ ls
42e5elie  4n94l854  gm6erpn3  h2slos0c  lg30pgm3  lgjuzhpv  rrz94ha7  taring.tar.gz  test  tl7vzut2  yla70qgn  ze79dct0 |
||tomaev@c156d43dc6ef:~/data$ exit
logout
Connection to 194.58.90.16 closed.|
```

## 9. Дневник отладки

Наиболее частая ошибка, с которой мне пришлось столкнуться, была связана с командой rsync:

+---+---------------+------------+-----------+--------------------------+-------------------------+-------------+
| № | |Лаб. или дом. | Дата       | Время     | Событие                  | Действие по исправлению | Примечание  |
+===+===============+============+===========+==========================+=========================+=============+

+-------------------+------------+-----------+--------------------------+-------------------------+-------------+

## 10. Замечания автора по существу работы

Нет замечаний.

## 11. Выводы

Работа понравилась тем, что можно почувствовать себя хакером) 

