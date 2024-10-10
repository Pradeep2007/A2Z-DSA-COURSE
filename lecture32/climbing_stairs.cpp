// #include <iostream>
// using namespace std;
// int stairs(int n){
//     if (n<0)
//     {
//         return 0;
//     }
//     if (n==0)
//     {
//         return 1;
//     }
//     return stairs(n-1)+stairs(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<stairs(n);
//     return 0;
// }
#include<stdio.h>
#include<stdbool.h>

int main(){
int n;
printf("Enter the size oif array: ");
scanf("%d",&n);

int a[n][n];
printf("Enter the values:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}

bool check =true;

int fsum=0;
for(int i=0;i<n;i++){
fsum+=a[0][i];
}

int sum=0;
for(int i=0;i<n;i++){
sum=0;
for(int j=0;j<n;j++){
sum+=a[i][j];
}
if(sum!=fsum) check= false;
}

for(int i=0;i<n;i++){
sum=0;
for(int j=0;j<n;j++){
sum+=a[j][i];
}
if(sum!=fsum) check= false;
}

sum=0;
for(int i=0;i<n;i++){
sum+=a[i][i];
}

if(sum!=fsum) check= false;

sum=0;
for(int i=0;i<n;i++){
sum+=a[i][n-i-1];
}
if(sum!=fsum) check= false;

if(check){
printf("The given square is a magic square");
}
else{
printf("The given square is not a magic square");
}

return 0;
}
