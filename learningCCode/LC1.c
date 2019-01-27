//
// Created by Lara von Kries on 2019-01-27.
//

#include <stdio.h>




int main(){

    /* hello */
    printf("Hello, World \n");

    /*datentypen */

    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = a + b + c;

    printf("Die Summe von a,b und c ist %f. \n", sum );

    /* Arrays */

    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    printf("Die 7te Nummer des Arrays ist %d \n", numbers[6]);


    /* Übung 1 */

    int average;
    int grades[3];

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;

    printf("Der Durchschnitt der 3 Grade betraegt: %d \n", average);

    return 0;
}


