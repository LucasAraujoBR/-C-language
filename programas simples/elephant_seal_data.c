#include <stdio.h>
int main ()
{
int i, j, k,n;
float sum;
int mat [n][n];
//enter the number of elephant seals
printf("Enter the number of elephant seals\n");
 scanf("%d",&n);
printf("==== calculating the average weight of elephant seals ====\n");
//entry of values ​​for matrix
for (i=0; i<n; i++) {
for (j=0; j<n; j++) {
printf ("Enter the position value %d, %d: ", i+1, j+1);
scanf ("%d", &mat[i][j]);
}
}
//matrix printing
for (i=0; i<n; i++) {
for (j=0; j<n; j++){
printf ("|%d|", mat[i][j]);
printf (" ");
}
printf ("\n");
}
//sum of matrix values
for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
           sum += mat[i][j];
        }
    }
    //printing the average weight of the matrix data
    printf("\nAverage weight: %.2f", sum / n);
    printf("\nThank you for your preference");
return 0;
}
