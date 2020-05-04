// Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

/*
Funkcja vchar usuwa z bufora klawiatury znaki rozdzielające (CR, LF, SP, TAB, ...)
i przekazuje jako wynik kod pierwszego napotkanego znaku widocznego.
*/
char vchar()
{
    char cc;
    while ((cc = getchar()) <= ' ');
    return cc;
}

//Lab 1
int Z1_15();
int Z2_05();
int Z2_07();
int Z4_15();
int Z4_17();

//Lab 2
int Z4_19();
int Z4_18();
int Z2_08();
int Z2_10();
int Z2_11();
int Z2_13();

//Lab 3
int Z5_05();
int Z3_05();
int Z6_09();
int Z5_12();

//Lab 4
int Z7_02();
int Z7_05();
int Z7_01();

//Lab 5
int Z6_05();
int Z7_11();
int Z7_08();

int main()
{
    printf("---------------------------------\n");
    printf("|       Running program:        |\n");
    printf("---------------------------------\n");

    //Z1_15();
    //Z2_05();
    //Z2_07();
    //Z4_15();
    //Z4_17();

    //Z4_19();
    //Z4_18();
    //Z2_08();
    //Z2_10();
    //Z2_11();
    //Z2_13();

    //Z5_05();
    //Z3_05();
    //Z6_09();
    //Z5_12();

    //Z7_02();
    //Z7_05();
    //Z7_01();

    Z6_05();
    //Z7_11();
    //Z7_08();
}

//pattern for programs files
//#include <stdio.h>
//#include <math.h>
//
//
//int Z()
//{
//
//    return 1;
//}