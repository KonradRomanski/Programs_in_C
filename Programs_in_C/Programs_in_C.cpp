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
int Z2_5();
int Z2_7();
int Z4_15();
int Z4_17();

//Lab 2
int Z4_19();
int Z4_18();
int Z2_8();
int Z2_10();
int Z2_11();
int Z2_13();

//Lab 3
int Z5_5();
int Z3_5();
int Z6_9();
int Z5_12();

//Lab 4
int Z7_2();
int Z7_5();
int Z7_1();

int main()
{
    printf("---------------------------------\n");
    printf("|       Running program:        |\n");
    printf("---------------------------------\n");

    //Z1_15();
    //Z2_5();
    //Z2_7();
    //Z4_15();
    //Z4_17();

    //Z4_19();
    //Z2_8();
    //Z2_10();
    //Z2_11();
    //Z2_13();

    //Test_1();

    //Z5_5();
    //Z3_5();
    //Z6_9();
    //Z5_12();

    //Z7_2();
    Z7_5();
    //Z7_1();
}

//pattern for programs files
//#include <stdio.h>
//#include <math.h>
//
//
//int Z2_13()
//{
//
//    return 1;
//}