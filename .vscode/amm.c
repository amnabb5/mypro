#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>
int main(){
int N,a,b,c,count,l,N2,H,i1;
//ask for the number of alement in the array
printf("enter your number of elements in the array : ");
scanf("%d" ,&N);
//creat the array for N number
N2 = N*2;
int T[N2];
//fill the array
printf(" enter your valeus in the array \n");
for(int i=0 ; i<N ;i++){
 scanf("%d" , &T[i]);
 
}

count = N+1;








//chek for the doubel number
for(int i=0 ; i<N ;i++){
H = T[i];
printf(" result1  \n"  );

for(  i1=i+1 ; i1< count ;){
if( T[i1] == T[i]){
printf(" result 2 \n"  );

l=i1+1;
a =T[i1];
b = T[l];
c=a;
  a=b;
  b=c;
  T[i1]=a;
  T[l]=b;
  count++;
}


}



}



 printf(" result  \n"  );



for(int i=0 ; i<N ;i++){
 printf(" result %d \n" , T[i]);
 
 
}
















}