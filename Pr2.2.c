#include <stdio.h>

int main() {
    float units, total, surcharge;

    printf("Enter the electricity unit charges: ");
    scanf("%f", &units);
    
    if(units <= 50){
        total = units * 0.50;
    }else if(units <= 150){
        total = 25 + (units - 50) * 0.75;
    }else if(units <= 250){
        total = 25 + 75 + (units - 150) * 1.20;
    }else{
        total = 25 + 75 + 120 + (units - 250) * 1.50;
    }

    surcharge = 0.20 * total;

    total += surcharge;

    printf("\nTotal Electricity Bill: Rs. %.2f\n", total);
}

