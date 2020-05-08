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
Program powinien pytać o kierunek konwersji, wczytywać temperaturę `TC` lub `TF`
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
Opracować program, który wczytuje dwie tablice jednowymiarowe `A` , `B` obie
n-elementowe (`n < 100`) zawierające liczby typu double i następnie wyprowadza elementy tablicy `C` zdefiniowane jako:\
`Ci = (sin ( Ai )  +  i) / (cos ( Bi )  –  Ai)`\
gdy mianownik = 0 to ułamek = –1\
Kolejność danych : `n`,` A0`, ... `An-1`, `B0`, ... `Bn-1`   (n : int, pozostałe : double)  

#### Z4_17
Opracować program, który wczytuje tablicę dwuwymiarową liczb typu double o `W` wierszach i `K` kolumnach (`W < 50`, `K < 50`) oraz dwie wartości całkowite `x` oraz `y` (sprawdzić czy `0 ≤ x < K` i `0 ≤ y < K`). Następnie program wyprowadza wszystkie kolumny tablicy o indeksach od `x` do `y`.
</p>
</details>

### Second laboratories
:heavy_check_mark:[Z4_19.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_19.cpp) - position search game\
:heavy_check_mark:[Z4_18.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z4_18.cpp) - values of the maximum element from each column of the loaded rectangular array\
:heavy_check_mark:[Z2_08.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_08.cpp) - number of binary digits\
:heavy_check_mark:[Z2_10.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_10.cpp) - operations, oldest / youngest binary digits\
:heavy_check_mark:[Z2_11.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_11.cpp) - the occurrence of binary pattern 1011\
:heavy_check_mark:[Z2_13.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z2_13.cpp) - converting numbers from decimal/binary to binary/decimal

<details><summary>full content of second tasks</summary>
<p>

#### Z4_19
Opracować program, który losuje położenie znaku `*` w zakresie `X = 10` do `40`,
`Y = 5` do `15`. Następnie program oczyszcza okno konsoli, wyświetla znak `*` w pozycji `[10, 5]` i przesuwa go reagując na  klawisze strzałek. Gdy znak `*` znajdzie się w wylosowanej pozycji gra się kończy. Program nie zezwala na wyprowadzenie znaku `*` poza podany zakres pozycji.

#### Z4_18
Opracować program, który wczytuje  wierszami elementy tablicy prostokątnej `H`
o wymiarach `W x K` (`W , K < 50`) zawierającą liczby typu double i wyprowadza wartość maksymalnego elementu z każdej kolumny tej tablicy.

#### Z2_08
Opracować program, który oblicza i wyprowadza liczbę cyfr  binarnych `1` występujących w wartości zmiennej Liczba typu unsigned int (wartość Liczby wczytać z klawiatury).

#### Z2_10
Opracować program, który realizuje następujące opcje:
- `N`, `n` - wczytanie wartości zmiennej Sekcja typu unsigned long long,
- `L`, `l` - ustalenie i wyprowadzenie pozycji najstarszej cyfry binarnej `1` występującej w wartości zmiennej  Sekcja,
- `R`, `r` - ustalenie i wyprowadzenie pozycji najmłodszej cyfry binarnej `0` występującej w wartości zmiennej  Sekcja,
- `Q`, `q` - koniec programu.\
Opcje `L` i `R` nie mogą zostać wykonane przed wykonaniem opcji `N`.

#### Z2_11
Opracować program, który ustala, czy w ciągu binarnym będącym wartością zmiennej Alfa typu unsigned int na najstarszych pozycjach występuje wzorzec binarny `1011`. (wartość Alfa wczytać z klawiatury).

#### Z2_13
Opracować program, który wczytuje liczby całkowite dodatnie zapisane jako dziesiętne/binarne i wyprowadza ich wartości w postaci binarnej/dziesiętnej. Liczby dziesiętne poprzedzone są literą `D` (np. `D35409`), liczby binarne poprzedzone są literą `B` (np. `B110100010`) - z funkcji scanf, printf można korzystać jedynie do wprowadzania/wyprowadzania tekstów.

</p>
</details>

### Third laboratories
:heavy_check_mark:[Z5_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_05.cpp) - dynamic data reading\
:heavy_check_mark:[Z3_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z3_05.cpp) - word swap in the given text\
:heavy_check_mark:[Z6_09.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z6_09.cpp) - structure of the zodiac sign\
:heavy_check_mark:[Z5_12.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_12.cpp) - structure of goods register and execution of orders

<details><summary>full content of third tasks</summary>
<p>

#### Z5_05
Opracować program, który wczytuje elementy typu double do zadeklarowanej dynamicznie tablicy dwuwymiarowej o `N` wierszach i `M` kolumnach (`N` i `M` wczytywane z klawiatury) oraz oblicza ile kolumn posiada sumę  elementów  większą od wartości `X` (również wczytanej z klawiatury).

#### Z3_05
Opracować program makrogenerator, który wczytuje źródłowy tekst wielowyrazowy, zakończony tekstem `@` oraz ciąg par wyrazów do_usunięcia  – do_wstawienia, również zakończony tekstem `@`. Następnie w tekście źródłowym każdy wyraz znajdujący się w zestawie do_usunięcia zostaje zastąpiony odpowiadającym mu wyrazem z zestawu do_wstawienia.
Przykład.\
__Tekst źródłowy__:
```
Na Starym Rynku rozdaja samochody @
```
__Pary wyrazów__:
```
rozdaja kradana
samochody rowery
@
```
__Wynik__:
```
Na Starym Rynku kradna rowery
```

#### Z6_09
Opracować program ustalający znak zodiaku danej osoby. Po wczytaniu numeru dnia
 i numeru miesiąca urodzenia program przegląda tablicę struktur zawierającą nazwy znaków zodiaku i numery dni, w których kolejny znak rozpoczyna się w danym miesiącu

| numer | dane  | miesiąc  |
|:-----:|:-----:|:--------:|
|   0   | nazwa | styczeń  |
|       | dzień |          |
|  ...  |  ...  |   ...    |
|  11   | nazwa | grudzien |
|       | dzien |          |

#### Z5_12
Napisać program, który umożliwia przetwarzanie prostego rejestru towarów.\
Tablica towarów:

| numer |    dane     |
|:-----:|:-----------:|
|   0   | NazwaTowaru |
|       | LiczbaSztuk |
|       | Cena1Sztuki |
|  ...  |     ...     |
|  49   | NazwaTowaru |
|       | LiczbaSztuk |
|       | Cena1Sztuki |

</p>
</details>

### Forth laboratories
:heavy_check_mark:[Z7_02.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_02.cpp) - reading numbers from a file and saving them\
:heavy_check_mark:[Z7_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_05.cpp) - counting coins from a file\
:heavy_check_mark:[Z7_01.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_01.cpp) - saving, reading data structures from file, adding new data structure and showing them

<details><summary>full content of forth tasks</summary>
<p>

#### Z7_02
Plik wejściowy zawiera ciąg liczb całkowitych oddzielonych spacjami. Opracować program, który z takiego pliku wejściowego (zapytać o nazwę) przepisuje do pliku wyjściowego (też zapytać o nazwę) tylko te liczby całkowite, które są większe od `137`.

#### Z7_05
Automat do rozpoznawania monet generuje plik tekstowy, który zawiera ciąg znaków opisujących poszczególne monety (bez żadnych znaków rozdzielających):

| moneta | znak |
|:------:|:----:|
|  1 gr  |  c   |
|  2 gr  |  t   |
|  5 gr  |  f   |
| 10 gr  |  d   |
| 20 gr  |  q   |
| 50 gr  |  h   |
|  1 zł  |  K   |
|  2 zł  |  D   |
|  5 zł  |  F   |

#### Z7_01
Opracować program prowadzący spis pracowników firmy (max.. 50 pracowników). Każdy pracownik opisany jest za pomocą struktury zawierającej nazwisko i pensję. Program realizuje następujące polecenia:
- `R` : wczytanie liczby pracowników i tablicy struktur opisujących pracowników z pliku dyskowego (zapytać o nazwę pliku),
- `N` : nowy pracownik - wczytać dane opisujące pracownika i wprowadzić do kolejnej pozycji tabeli struktur,
- `W` : wyświetlanie informacji o wszystkich pracownikach,
- `Z` : zapis liczby pracowników i tabeli pracowników do pliku dyskowego (zapytać o nazwę pliku),
- `K` : koniec programu.

Dla realizacji poszczególnych opcji zdefiniować funkcje.  

</p>
</details>

### Fifth laboratories
:heavy_check_mark:[Z6_05.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z6_05.cpp) - dynamic array creation, function table\
:heavy_check_mark:[Z7_11.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_11.cpp) - letters statistics, charts\
:heavy_check_mark:[Z7_08.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_08.cpp) - data structures, files, function table

<details><summary>full content of fifth tasks</summary>
<p>

#### Z6_05
Opracować program, który po wczytaniu wartości `n` tworzy dynamicznie tablicę jednowymiarową `T[n]` i wczytuje jej elementy. Następnie program umożliwia wykonanie 3 funkcji:
- `0` : znajduje maksymalny element tablicy `T`,
- `1` : znajduje minimalny element tablicy `T`,
- `2`: oblicza średnią arytmetyczną elementów z tablicy `T`.

Wprowadzenie innego numeru operacji kończy program. Zastosować tablicę wskaźników funkcji.

#### Z7_11
Opracować program, który wyznacza histogram występowania liter a – z w pliku dyskowym [Eden.txt](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Eden.txt). Wyniki wyświetlić w postaci tabeli liczbowej i wykresu wstęgowego.

Przykładowe wyniki:
```

a :  34768 => 23.7%
..............................
z :      235 => 1.2%

a | *****************
.........................
z | **

```

#### Z7_08
W pliku [Pomiary.txt](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Pomiary.txt) zapisane są: liczba serii pomiarów i kolejne serie pomiarów. Pojedyncza seria opisana jest za pomocą następującej struktury:

|        numer serii        |
|:-------------------------:|
|         pomiar_1          |
|         pomiar_2          |
|         pomiar_3          |
|         pomiar_4          |
| kod sposobu przetwarzania |

Numer serii to dowolna liczba typu int, pomiary to liczby double, kod sposobu przetwarzania to liczba typu int o wartości `0 - 2`. Opracować program, który wczytuje kolejne struktury i w zależności od wartości podanego kodu przetwarza pomiary:

| kod |                    opis                    |
|:---:|:------------------------------------------:|
|  0  | obliczenie średniej arytmetycznej pomiarów |
|  1  |  wybranie pomiaru o wartości największej   |
|  2  |  wybranie pomiaru o wartości najmniejszej  |

Jako efekt przetwarzania należy wpisać do pliku [Wyniki.txt](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Wyniki.txt) liczbę serii a następnie ciąg następujących struktur:

|       numer serii        |
|:-------------------------:|
|     wyliczona wartość     |
| kod sposobu przetwarzania |

Dla każdego z trzech sposobów przetwarzania danych pomiarowych zdefiniować funkcję
i zastosować tablicę wskaźników funkcji.


</p>
</details>

### Sixth laboratories
:heavy_exclamation_mark:[Z5_07.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_07.cpp)\
:heavy_exclamation_mark:[Z5_13.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z5_13.cpp)\
:heavy_exclamation_mark:[Z7_16.cpp](https://github.com/TheSoulsHunter/Programs_in_C/blob/master/Programs_in_C/Z7_16.cpp)

<details><summary>full content of sixth tasks</summary>
<p>

#### Z5_07
Opracować program, który umożliwia przetwarzanie tablicy dwuwymiarowej (macierzy) posiadającej 5 kolumn i zawierającej liczby typu double. Program realizuje następujące opcje:
- `1` - wczytanie liczby wierszy tablicy  `ile_w`  (`< 10`) oraz wartości elementów tablicy (wyprowadzać zaproszenie w postaci `Tab[wie][kol] =`  ),
- `2` - wczytanie wartości `X` i obliczenie w każdym wierszu sumy elementów większych od `X`,
- `3` - wczytanie wartości `N` i obliczenie w każdej kolumnie iloczynu `N` początkowych elementów,
- `4` - obliczenie liczby wierszy, w których początkowy element jest większy od ostatniego,
- `5` - obliczenie liczby kolumn, w których występuje przynajmniej jedna wartość `0`,
- `0` - koniec programu.

Dla realizacji opcji `1` do `5` zdefiniować funkcje i zastosować tablicę wskaźników funkcji.

#### Z5_13
Napisać program, który umożliwia przetwarzanie prostego rejestru pracowników

| TablicaPracowników |
|:------------------:|
|      Imie[16]      |
|    Nazwisko[64]    |
|       Pesel        |
|      Imie[16]      |
|    Nazwisko[64]    |
|       Pesel        |
|        ...         |
|      Imie[16]      |
|    Nazwisko[64]    |
|       Pesel        |

Pesel przechowywać jako liczbę typu long long. Program realizuje polecenia:
- `A` – nowy pracownik (dopisywany w następne wolne miejsce) ,
- `B` – wyświetl wszystkich pracowników,
- `C` – sprawdź, czy pracownik o podanym Peselu znajduje się w tabeli i wyświetl jego Nazwisko,
- `D` – usuń pracownika o podanym nazwisku (o ile istnieje w tabeli),
- `E` – zapisanie danych do pliku,
- `F` – odczytanie danych z pliku,
- inna – koniec programu.

`TablicaPracowników` ma mieć długość `100` elementów. Do pliku dyskowego należy zapisywać (i następnie odczytywać) najpierw liczbę ważnych pozycji tabeli, a następnie same te pozycje. Dla realizacji poszczególnych opcji zdefiniować funkcje i zastosować tablicę wskaźników funkcji.

#### Z7_16
Opracować program, który wczytuje rozmiary  `W` i `K` tablicy dwuwymiarowej, tworzy dynamicznie taką tablicę dla liczb unsigned int  i wczytuje jej elementy wierszami. Następnie program wyprowadza na monitor element z wierszy `1` do `W-1` tych kolumn, których element z wiersza o indeksie `0` zawiera:
- na najstarszych pozycja bitowych ciąg `1011` oraz
- na najmłodszych pozycja bitowych ciąg `0010`.

Dla sprawdzenia, czy ciąg binarny spełnia podane warunki zdefiniować funkcję wykorzystującą operatory bitowe.



</p>
</details>

### Summary

Completed: :two::one: **/** :two::four:

### Legend
:heavy_check_mark: - Exercise accomplished\
:heavy_multiplication_x: - Exercise in progress\
:heavy_exclamation_mark: - Exercise untouched

### Additional info
Exercises were taken from website [Learning materials](http://www.cs.put.poznan.pl/jkniat/MatDydakt.html)\
The picture was taken from [this](https://online.crbtech.in/wp-content/uploads/2019/03/C-programming-768x398.png) website

<p align="center">Made by ©Konrad Romański</p>
