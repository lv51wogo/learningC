//
// Created by Lara von Kries on 2019-01-27.
//

#include <stdio.h>
#include <string.h>


int print_big(int x);

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



    /* Uebung 2*/
    char first_name[] = "John";
    char last_name[] = "Doe";
    char name[100];



    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Erledigt!\n");
    }

    /*Uebung 3 */

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;

    int i;

    for(i=0;i<10;i++){
        factorial *= array[i];
    }

    printf("10! ist %d.\n", factorial);

    /* Uebung 4*/
    int zahlen[]={1,7,4,5,9,3,5,11,6,3,4};
    int j = 0;

    while( j < 10){


         if(zahlen[j]< 5){
             j++;
             continue;

         }

         if(zahlen[j] > 10){
             break;
         }

         printf("%d\n", zahlen[j]);
            j++;
    }

    int smarray[] ={1,11,2,22,3,33};
        int q;
        for(int q = 0; q < 6; q ++){
            print_big(smarray[q]);
        }

    return 0;
}

    int print_big(int x){

        if(x > 10){

            printf("%d ist groß\n", x);
         }
        return x;
    }

