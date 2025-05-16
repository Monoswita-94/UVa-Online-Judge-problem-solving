#include<stdio.h>
int main(){
    int n;
while (scanf("%d", &n) == 1 && n != 0){
int i,j,matrix[i][j];
int rowcorr = 0;
 int colcorr = 0;
for (i = 0; i < n; i++){
int rowsum = 0;
for (j = 0; j < n; j++){
scanf("%d", &matrix[i][j]);
rowsum += matrix[i][j];
}
if ((rowsum %= 2) != 0){
int row = i;
rowcorr++;
}
}
for (j = 0; j < n; j++){
int colsum = 0;
for (i = 0; i < n; i++)
colsum += matrix[i][j];
if ((colsum %= 2) != 0){
int col = j;
colcorr++;
}
}
if (rowcorr == 0 && colcorr == 0)
printf("OK\n");
else if (rowcorr == 1 && colcorr == 1)
printf("Change bit(i,j)\n");
else
printf("Corrupt\n");
}
}
