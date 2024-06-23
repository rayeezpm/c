#include<stdio.h>
int main(){

    // if
    // if else
//    if elseif  else
// switch

// syntax
// if(condition){
//     stmt;
// }

// syntax if..else
// if(condition){
// stmt;
// }
// else{
//     stmt;
// }


// syntax if...elseif..else

// if(condition){
//     stmt;
// }
// elseif(condition){
//     stmt;
// }
// else{
//     stmt;
// }

int mark=50;
if(mark<30){
    printf("the mark secured is below average");
}
else if(mark<50){
    printf("the mark secures is average");
}
else if(mark<70){
    printf("good");
}
else{
    printf("excellent");
}
return 0;
}