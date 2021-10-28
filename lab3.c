#include <stdio.h>

void printIntersection(int arrayA[5], int arrayB[5])        //find intersection
{
 int i = 0, j = 0;
    while (i < 5 && j < 5) {                            
        if (arrayA[i] < arrayB[j])
            i++;
        else if (arrayB[j] < arrayA[i])
            j++;
        else                                  // if arrayA[i] == arrayB[j]
        {
            printf(" %d ", arrayB[j++]);
            i++;
        }
    }
}

int main(){
  int i, j, arrayA[5], arrayB[5];
    printf("\nEnter array A elements : ");
for (i = 0; i < 5; i++)
 {
    scanf_s("%d", &arrayA[i]);
 }
printf("\nEnter array B elements : ");
for (i = 0; i < 5; i++)
 {
    scanf_s("%d", &arrayB[i]);
 }
printf("\nIntersection of two arrays is : ");
printIntersection(arrayA, arrayB, 5, 5);
}







