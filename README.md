# Programs in C
This repository contains programs made in **C language**

<img src="https://online.crbtech.in/wp-content/uploads/2019/03/C-programming-768x398.png" alt="C logo" width="384" height="199" alt="C Programming image" title="Image of C programming">

## List of files
### First laboratories
:heavy_check_mark:[Z1_15.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z1_15.cpp) - calculating expression value\
:heavy_check_mark:[Z2_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_05.cpp) - temperature conversion (F and C)\
:heavy_check_mark:[Z2_07.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_07.cpp) - calculating the values of mathematical functions\
:heavy_check_mark:[Z4_15.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_15.cpp) - value of the expression in the array\
:heavy_check_mark:[Z4_17.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_17.cpp) - two-dimensional array and trimming it
<details><summary>full content of first tasks</summary>
<p>

#### Z1_15
Opracować program obliczania wartości wyrażenia\
`T = (ln(x - 5) + 1) / (sqrt(y - 3))`\
dla zmiennych x, y typu double. Jeżeli wartości T nie można obliczyć wyprowadzić tekst "Brak rozwiązania.".

#### Z2_05
Opracować program zamiany temperatury wyrażonej w stopniach Celsjusza na stopnie Fahrenheita i odwrotnie.\
`TC =  5/9  ( TF  – 32)`; `TF =  9/5 TC + 32`\
Program powinien pytać o kierunek konwersji, wczytywać temperaturę TC lub TF
i wyprowadzać wartość przeliczoną wraz z jednostką.

#### Z2_07
Opracować program, który oblicza wartość wskazanej funkcji matematycznej. Program ten w pętli:\
•	wczytuje nową wartość zmiennej x typu double,\
•	pyta o numer funkcji, oblicza i wyprowadza jej wartość (o ile to możliwe):
- 0 - `sin(x)`
- 1 - `tg(x)`
- 2 - `arcsin(x)`
- 3 - `sqrt(x)`
- 4 - `ln(x)`
- 5 - `recip(x)`
- 6 -  `sqr(x)`
- inna wartość - koniec programu

#### Z4_15
Opracować program, który wczytuje dwie tablice jednowymiarowe A , B obie
n-elementowe (n < 100) zawierające liczby typu double i następnie wyprowadza elementy tablicy C zdefiniowane jako:\
`Ci = (sin ( Ai )  +  i) / (cos ( Bi )  –  Ai)`\
gdy mianownik = 0 to ułamek = –1\
Kolejność danych : n, A0, ... An-1, B0, ... Bn-1   (n : int, pozostałe : double)  

#### Z4_17
Opracować program, który wczytuje tablicę dwuwymiarową liczb typu double o W wierszach i K kolumnach (W < 50, K < 50) oraz dwie wartości całkowite x oraz y (sprawdzić czy 0 ≤ x < K i 0 ≤ y < K). Następnie program wyprowadza wszystkie kolumny tablicy o indeksach od x do y.
</p>
</details>

### Second laboratories
:heavy_check_mark:[Z4_19.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_19.cpp) - position search game\
:heavy_check_mark:[Z4_18.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_18.cpp) - values of the maximum element from each column of the loaded rectangular array\
:heavy_check_mark:[Z2_08.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_08.cpp) - number of binary digits\
:heavy_check_mark:[Z2_10.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_10.cpp) - operations, oldest / youngest binary digits\
:heavy_check_mark:[Z2_11.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_11.cpp) - the occurrence of binary pattern 1011\
:heavy_check_mark:[Z2_13.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_13.cpp) - converting numbers from decimal/binary to binary/decimal

### Third laboratories
:heavy_check_mark:[Z5_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_05.cpp) - dynamic data reading\
:heavy_check_mark:[Z3_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z3_05.cpp) - word swap in the given text\
:heavy_check_mark:[Z6_09.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z6_09.cpp) - structure of the zodiac sign\
:heavy_check_mark:[Z5_12.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_12.cpp) - structure of goods register and execution of orders

### Forth laboratories
:heavy_check_mark:[Z7_02.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_02.cpp) - reading numbers from a file and saving them\
:heavy_check_mark:[Z7_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_05.cpp) - counting coins from a file\
:heavy_exclamation_mark:[Z7_01.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_01.cpp)

### Legend
:heavy_check_mark: - Exercise accomplished\
:heavy_multiplication_x: - Exercise in progress\
:heavy_exclamation_mark: - Exercise untouched

### Additional info
Exercises were taken from website [Learning materials](http://www.cs.put.poznan.pl/jkniat/MatDydakt.html)\
The picture was taken from [this](https://online.crbtech.in/wp-content/uploads/2019/03/C-programming-768x398.png) website

<p align="center">Made by ©Konrad Romański</p>
