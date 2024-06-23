#include<stdio.h>

int main(){

    // switch(condition){
    //     case 1:
    //     stmt;
    //     break;
    //     case 2:
    //     stmt;
    //     break;
    //     case 3:
    //     stmt;
    //     break;



    //     default:
    //     stmt;
    //     break;
    // }


  int day =5;
    switch (day)
    {
    case 1:
    printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
    
    default:
    printf("invalid day");
        break;
    }
}