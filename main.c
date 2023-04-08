#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    printf( "Введіть кулькість секунд: ");
    scanf("%d",&seconds);

    minutes = seconds / 60;
    seconds = seconds % 60;

    hours = minutes / 60;
    minutes = minutes / 60;

    printf("Години: %d, хвилини: %d, секунди: %d\n", hours, minutes, seconds);
}