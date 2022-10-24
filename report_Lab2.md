# Отчет по лабораторной работе N 2 по курсу
# "Фундаментальная информатика"

Студент группы: M80-104Б, Томаев Георгий Альбердович\
Контакты: georgiitomaev132@gmail.ru\
Работа выполнена: 15.09.2021\
Преподаватель: Безлуцкая Елизавета Николаевна

## 1. Тема

Операционная среда ОС UNIX

## 2. Цель работы

Изучение основных команд для работы с файлами в ОС UNIX.

## 3. Задание

Написать сценарий работы с файлами в ОС UNIX и реализовать его.

## 4. Оборудование

Процессор: Intel® Pentium(R) CPU 4417U @ 2.30GHz × 4 ОП: 3.7 Гб НМД: 1024 Гб
Монитор: 1920x1080\

## 5. Программное обеспечение

Операционная система семейства: linux (ubuntu), версия 20.04.3 LTS Интерпретатор команд: bash, версия 4.4.19.
Система программирования: --, версия --
Редактор текстов: emacs, версия 25.2.2
Утилиты операционной системы: --
Прикладные системы и программы: --
Местонахождение и имена файлов программ и данных на домашнем компьютере: --\

## 6. Идея, метод, алгоритм решения задачи
Изучить команды по работе с файлами в ОС UNIX и применить их для реализации сценария.

## 7. Сценарий выполнения работы

1)Создаем несколько директорий.
2)В одной из директорий создаем еще несколько директорий.
3) Теперь запустим  ps чтобы посмотреть все работающие процессы.
4) Запустим  фоновый процесс с помощью ping c5 www.google.com &
5)Создаем файл в какой-то из директорий.
6)Создаем еще один файл в какой то из директорий.
7)Прописываем ls, чтобы убедиться.
8)Поднимаемся на уровень выше.
9)Прописываем ls .
10)При помощи команды echo пытаемся вывести в терминал 'hello world'.
11)C помощью команды 'cat' читаем какой-либо файл.
12)Затем переименовываем файл с помощью команды mv.
13) Используя команду ls и флаг -l просмотрим права на все файлы.
14) Затем меняем права при помощи команды chmod ugo+rwx file?
15) ls -l
16) Используем права суперпользователя (sudo) и добавляем пользователя sudo adduser name
17) C помощью команды sudo chown наделяем пользователя правами на определенный файл.
18) ls -l (проверяем)
19) Копируем с помощью cp этот файл в другую директорию.
20) Переходим в эту директорию и проверяем получилось ли.
21) Теперь удаляем все файлы и директории, чтобы никто их не увидел.

## 8. Распечатка протокола
```georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ mkdir polzovatel{1..4}
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ls
 polzovatel1   polzovatel2   polzovatel3   polzovatel4   Видео   Документы   Загрузки   Изображения   Музыка   Общедоступные  'Рабочий стол'   Шаблоны
 georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ps -A
    PID TTY          TIME CMD
      1 ?        00:00:02 systemd
      2 ?        00:00:00 kthreadd
      3 ?        00:00:00 rcu_gp
      4 ?        00:00:00 rcu_par_gp
      5 ?        00:00:00 kworker/0:0-events
      6 ?        00:00:00 kworker/0:0H-events_highpri
      9 ?        00:00:00 mm_percpu_wq
     10 ?        00:00:00 rcu_tasks_rude_
     11 ?        00:00:00 rcu_tasks_trace
     12 ?        00:00:00 ksoftirqd/0
     13 ?        00:00:00 rcu_sched
     14 ?        00:00:00 migration/0
     15 ?        00:00:00 idle_inject/0
     16 ?        00:00:00 cpuhp/0
     17 ?        00:00:00 cpuhp/1
     18 ?        00:00:00 idle_inject/1
     19 ?        00:00:00 migration/1
     20 ?        00:00:00 ksoftirqd/1
     22 ?        00:00:00 kworker/1:0H-events_highpri
     23 ?        00:00:00 cpuhp/2
     24 ?        00:00:00 idle_inject/2
     25 ?        00:00:00 migration/2
     26 ?        00:00:00 ksoftirqd/2
     28 ?        00:00:00 kworker/2:0H-events_highpri
     29 ?        00:00:00 cpuhp/3
     30 ?        00:00:00 idle_inject/3
     31 ?        00:00:00 migration/3
     32 ?        00:00:00 ksoftirqd/3
     34 ?        00:00:00 kworker/3:0H-events_highpri
     35 ?        00:00:00 kdevtmpfs
     36 ?        00:00:00 netns
     37 ?        00:00:00 inet_frag_wq
     38 ?        00:00:00 kauditd
     41 ?        00:00:00 khungtaskd
     42 ?        00:00:00 oom_reaper
     43 ?        00:00:00 writeback
     44 ?        00:00:00 kcompactd0
     45 ?        00:00:00 ksmd
     46 ?        00:00:00 khugepaged
     93 ?        00:00:00 kintegrityd
     94 ?        00:00:00 kblockd
     95 ?        00:00:00 blkcg_punt_bio
     96 ?        00:00:00 tpm_dev_wq
     97 ?        00:00:00 ata_sff
     98 ?        00:00:00 md
     99 ?        00:00:00 edac-poller
    100 ?        00:00:00 devfreq_wq
    101 ?        00:00:00 watchdogd
    103 ?        00:00:00 kworker/2:1H-kblockd
    105 ?        00:00:00 kswapd0
    106 ?        00:00:00 ecryptfs-kthrea
    108 ?        00:00:00 kthrotld
    109 ?        00:00:00 irq/122-aerdrv
    110 ?        00:00:00 irq/123-aerdrv
    111 ?        00:00:00 acpi_thermal_pm
    112 ?        00:00:00 vfio-irqfd-clea
    116 ?        00:00:00 ipv6_addrconf
    118 ?        00:00:00 kworker/1:1H-kblockd
    126 ?        00:00:00 kstrp
    129 ?        00:00:00 zswap-shrink
    130 ?        00:00:00 kworker/u9:0-hci0
    137 ?        00:00:00 charger_manager
    161 ?        00:00:00 kworker/3:1H-kblockd
    177 ?        00:00:00 kworker/0:1H-kblockd
    187 ?        00:00:00 scsi_eh_0
    188 ?        00:00:00 scsi_tmf_0
    189 ?        00:00:00 scsi_eh_1
    190 ?        00:00:00 scsi_tmf_1
    192 ?        00:00:00 sdhci
    193 ?        00:00:00 irq/23-mmc0
    194 ?        00:00:01 kworker/1:2-events
    195 ?        00:00:00 kworker/3:3-mm_percpu_wq
    200 ?        00:00:00 irq/109-ELAN120
    220 ?        00:00:00 jbd2/sda5-8
    221 ?        00:00:00 ext4-rsv-conver
    260 ?        00:00:00 systemd-journal
    284 ?        00:00:00 systemd-udevd
    292 ?        00:00:00 loop0
    294 ?        00:00:00 loop1
    295 ?        00:00:00 loop2
    307 ?        00:00:00 loop3
    324 ?        00:00:00 loop4
    329 ?        00:00:00 asus_wireless_w
    337 ?        00:00:00 irq/126-mei_me
    343 ?        00:00:00 led_workqueue
    346 ?        00:00:00 cfg80211
    356 ?        00:00:00 cryptd
    364 ?        00:00:00 card0-crtc0
    368 ?        00:00:00 card0-crtc1
    372 ?        00:00:00 card0-crtc2
    436 ?        00:00:00 nv_queue
    437 ?        00:00:00 nv_queue
    474 ?        00:00:00 nvidia-modeset/
    475 ?        00:00:00 nvidia-modeset/
    594 ?        00:00:01 systemd-resolve
    596 ?        00:00:01 systemd-timesyn
    635 ?        00:00:00 UVM global queu
    636 ?        00:00:00 UVM deferred re
    637 ?        00:00:00 UVM Tools Event
    655 ?        00:00:00 accounts-daemon
    656 ?        00:00:01 acpid
    659 ?        00:00:00 avahi-daemon
    660 ?        00:00:00 bluetoothd
    663 ?        00:00:00 cron
    665 ?        00:00:00 cupsd
    667 ?        00:00:01 dbus-daemon
    668 ?        00:00:08 NetworkManager
    673 ?        00:00:00 irqbalance
    674 ?        00:00:00 networkd-dispat
    680 ?        00:00:00 nvidia-persiste
    683 ?        00:00:00 polkitd
    687 ?        00:00:00 rsyslogd
    693 ?        00:00:00 switcheroo-cont
    698 ?        00:00:00 systemd-logind
    699 ?        00:00:02 thermald
    700 ?        00:00:01 udisksd
    701 ?        00:00:00 wpa_supplicant
    718 ?        00:00:00 avahi-daemon
    750 ?        00:00:00 cups-browsed
    775 ?        00:00:00 ModemManager
    787 ?        00:00:00 gdm3
    812 ?        00:00:00 unattended-upgr
    813 ?        00:00:00 gdm-session-wor
    822 ?        00:00:00 whoopsie
    823 ?        00:00:00 kerneloops
    825 ?        00:00:00 kerneloops
    833 ?        00:00:00 systemd
    834 ?        00:00:00 (sd-pam)
    839 ?        00:02:55 pulseaudio
    841 ?        00:00:00 tracker-miner-f
    844 ?        00:00:00 gnome-keyring-d
    849 ?        00:00:00 upowerd
    851 ?        00:00:00 dbus-daemon
    854 ?        00:00:00 rtkit-daemon
    855 tty2     00:00:00 gdm-x-session
    860 tty2     00:03:07 Xorg
    863 ?        00:00:00 gvfsd
    875 ?        00:00:00 gvfsd-fuse
    894 ?        00:00:00 gvfs-udisks2-vo
    912 ?        00:00:00 gvfs-gphoto2-vo
    918 ?        00:00:00 gvfs-mtp-volume
    922 ?        00:00:00 gvfs-goa-volume
    927 ?        00:00:00 goa-daemon
    936 ?        00:00:00 goa-identity-se
    943 ?        00:00:00 gvfs-afc-volume
    949 ?        00:00:30 irq/129-nvidia
    950 ?        00:00:00 nvidia
    951 ?        00:00:12 nv_queue
    961 ?        00:00:00 krfcommd
   1075 tty2     00:00:00 gnome-session-b
   1142 ?        00:00:00 ssh-agent
   1161 ?        00:00:00 at-spi-bus-laun
   1166 ?        00:00:00 dbus-daemon
   1170 ?        00:00:00 gnome-session-c
   1177 ?        00:00:00 gnome-session-b
   1191 ?        00:02:46 gnome-shell
   1210 ?        00:00:00 ibus-daemon
   1214 ?        00:00:00 ibus-dconf
   1215 ?        00:00:02 ibus-extension-
   1217 ?        00:00:00 ibus-x11
   1221 ?        00:00:00 ibus-portal
   1232 ?        00:00:01 at-spi2-registr
   1236 ?        00:00:00 xdg-permission-
   1239 ?        00:00:00 gnome-shell-cal
   1247 ?        00:00:00 evolution-sourc
   1256 ?        00:00:00 evolution-calen
   1268 ?        00:00:00 dconf-service
   1275 ?        00:00:00 evolution-addre
   1294 ?        00:00:00 gjs
   1302 ?        00:00:00 gvfsd-trash
   1313 ?        00:00:00 gsd-a11y-settin
   1314 ?        00:00:00 gsd-color
   1318 ?        00:00:00 gsd-datetime
   1319 ?        00:00:00 gsd-housekeepin
   1320 ?        00:00:00 gsd-keyboard
   1327 ?        00:00:00 gsd-media-keys
   1328 ?        00:00:00 gsd-power
   1329 ?        00:00:00 gsd-print-notif
   1330 ?        00:00:00 gsd-rfkill
   1332 ?        00:00:00 gsd-screensaver
   1333 ?        00:00:00 gsd-sharing
   1337 ?        00:00:00 gsd-smartcard
   1346 ?        00:00:00 gsd-sound
   1352 ?        00:00:00 gsd-usb-protect
   1353 ?        00:00:00 gsd-wacom
   1356 ?        00:00:00 gsd-wwan
   1357 ?        00:00:00 gsd-xsettings
   1366 ?        00:00:00 gsd-printer
   1383 ?        00:00:00 gsd-disk-utilit
   1396 ?        00:00:00 evolution-alarm
   1424 ?        00:00:00 colord
   1442 ?        00:00:00 ibus-engine-sim
   1495 ?        00:00:00 oosplash
   1511 ?        00:00:02 soffice.bin
   1569 ?        00:00:00 gvfsd-metadata
   1574 ?        00:00:00 update-notifier
   1901 ?        00:00:00 kworker/u9:2-hci0
   1904 ?        00:00:00 obexd
   2231 ?        00:00:00 loop5
   2244 ?        00:00:01 fwupd
   2266 ?        00:00:02 snapd
   2289 ?        00:00:00 gpg-agent
   2682 ?        00:00:00 kworker/2:2-events
   2685 ?        00:05:04 firefox
   2749 ?        00:00:03 Privileged Cont
   2797 ?        00:00:03 WebExtensions
   2845 ?        00:00:42 Web Content
   2910 ?        00:00:01 RDD Process
   2913 ?        00:00:00 sd_dummy
   2927 ?        00:00:00 sd_espeak-ng
   2933 ?        00:00:00 speech-dispatch
   3131 ?        00:00:00 kworker/2:1-events
   3135 ?        00:00:00 kworker/u8:1-events_power_efficient
   3175 ?        00:00:19 gnome-terminal-
   3183 pts/0    00:00:00 bash
   3206 ?        00:00:47 Web Content
   3253 ?        00:00:18 Web Content
   3316 ?        00:00:42 Web Content
   3344 ?        00:01:54 Web Content
   3716 ?        00:00:00 Web Content
   3800 ?        00:00:00 kworker/3:0-events
   3947 ?        00:00:00 kworker/u8:0-events_unbound
   3975 ?        00:00:00 kworker/1:0-cgroup_destroy
   4009 ?        00:00:00 kworker/u8:2-events_power_efficient
   4033 ?        00:00:00 kworker/0:1-events
   4129 pts/0    00:00:00 ps
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ping c5 www.google.com &
[1] 8251
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ cd polzovatel1
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1$ mkdir mnpolzovatel{1..4}
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1$ ls
mnpolzovatel1  mnpolzovatel2  mnpolzovatel3  mnpolzovatel4
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1$ cd mnpolzovatel1
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ touch file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ touch file2.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls
file2.txt  file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cp file.txt mnpolzovatel2
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ echo "hello world" file.txt
hello world file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cat >> file.txt
Hello world!
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cat file.txt
Hello world!
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cat file.txt >> file2.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cat file2.txt
Hello world!
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ mv file2.txt file3.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls
file3.txt  file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls -l
итого 8
-rw-rw-r-- 1 georgiy georgiy 13 сен 15 18:37 file3.txt
-rw-rw-r-- 1 georgiy georgiy 13 сен 15 18:36 file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls -l >>file3.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ chmod ugo+rwx file3.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls -l
итого 8
-rwxrwxrwx 1 georgiy georgiy 141 сен 15 18:39 file3.txt
-rw-rw-r-- 1 georgiy georgiy  13 сен 15 18:36 file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ sudo adduser fray
[sudo] пароль для georgiy: 
Добавляется пользователь «fray» ...
Добавляется новая группа «fray» (1002) ...
Добавляется новый пользователь «fray» (1002) в группу «fray» ...
Создаётся домашний каталог «/home/fray» ...
Копирование файлов из «/etc/skel» ...
Новый пароль : 
Повторите ввод нового пароля : 
Пароль не указан
Новый пароль : 
Повторите ввод нового пароля : 
passwd: пароль успешно обновлён
Изменение информации о пользователе fray
Введите новое значение или нажмите ENTER для выбора значения по умолчанию
	Полное имя []: fray gibson
	Номер комнаты []: 807
	Рабочий телефон []: 345125
	Домашний телефон []: 326
	Другое []: i love pizza
Данная информация корректна? [Y/n] Y
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ sudo chown fray file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ ls -l
итого 8
-rwxrwxrwx 1 georgiy georgiy 141 сен 15 18:39 file3.txt
-rw-rw-r-- 1 fray    georgiy  13 сен 15 18:36 file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cp file.txt ~/polzovatel1/mnpolzovatel2
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel1$ cd ..
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1$ cd mnpolzovatel2
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel2$ ls
file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel2$ rm file.txt
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1/mnpolzovatel2$ cd ..
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~/polzovatel1$ cd ..
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ rm -r polzovatel{1..4}
georgiy@georgiy-VivoBook-15-ASUS-Laptop-X540UBR:~$ ls
 Видео   Документы   Загрузки   Изображения   Музыка   Общедоступные  'Рабочий стол'   Шаблоны```
## 9. Дневник отладки

*Должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.*

+---+---------------+------------+-----------+--------------------------+-------------------------+-------------+
| № | Лаб. или дом. | Дата       | Время     | Событие                  | Действие по исправлению | Примечание  |
+===+===============+============+===========+==========================+=========================+=============+
|0  | Дом           | 01.09.2021 | 21:30     | Выполнил `sudo rm -rf /` | Неисправимо             | Мне грустно |
+-------------------+------------+-----------+--------------------------+-------------------------+-------------+

## 10. Замечания автора по существу работы
Нет замечаний.

## 11. Выводы

Изучил многие команды OC UNIX.

