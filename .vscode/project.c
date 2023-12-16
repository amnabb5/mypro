#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>


void hiiii(char team1A[50] ,char team2A[50],int* tm1 ,int* tm2){
    int tm11,tm22; 
    printf(" please eneter the result of how match team %s score : \n" ,team1A );
    scanf("%d",&tm11);
    printf(" please eneter the result of how match team %s score : \n" ,team2A);
scanf("%d",&tm22);
if( tm11 > tm22){
   printf(" so %s win this mutch so he  get 3 points \n" ,team1A);
   tm11 = 3;
   tm22 =0;
}
else if( tm11 < tm22){
   printf(" so %s win this mutch so he get 3 points \n " , team2A);
   tm22 =3;
   tm11 =0;
}
else if( tm11==tm22){
   printf(" so %s and %s win this mutch so they get 1 point \n" , team1A , team2A);
   tm11 = 1;
   tm22 =1;
}



*tm1 = tm11;
*tm2 = tm22;
 
 
}

















 int main(void){ 


    // input the numbers of teams
      int NT,h=0 ,tm1,tm2 ,team1b=0,team2b=0,team3b=0,team4b=0,team5b=0 , team6b=0 , team7b=0, team8b=0, team9b=0, team10b=0 , team11b=0 , team12b=0 , team13b=0 , team14b=0 , team15b=0 , team16b=0 , team17b=0 , team18b=0 , team19b=0 ,team20b,cs[10];
      char conv[2000] , user[50] , vd[50] ;
          do {    printf("input the number of teams and he must be between 10 and 20:\n"); 
             scanf("%d",&NT);  
               if (NT>20 || NT<10){   
                     printf("wrong\n");  
                           }  
                 } while(NT>20 || NT<10); 



// torn of 10 teams

           if (NT==10){    char teamA [50];    char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [10];    printf("input the name of your teams one by one:\n");  
             fgets(teamA,50,stdin); 
                fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);        int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);   int team9 [50];    int team10 [50];  

        printf(" Hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf(" omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1* \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the fist with %s and %s the 2nd between %s and %s so let's start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the fist with %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist with %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist with %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist with %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;





// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;

for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
int n=10;


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<10 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<10 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
     
            
          

































}
            else if (NT==11){  char teamA [50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    printf("input the name of your teams one by one:\n");   fgets(teamA,50,stdin);   fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team11A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50]; 
            
                printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf(" omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen  \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first with %s and %s the 2nd between %s and %s so let's start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* first match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first with %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first with %s and %s the 2nd between %s and %s so let's start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;






































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so sir %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;









for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
int cs[11];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
int n=11;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<11 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<11 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            

            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
               }  



              else if (NT==12){ char teamA[50];    char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    printf("input the name of your teams one by one:\n");  fgets(teamA,50,stdin);   fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    int team9 [50];    fgets(team12A,50,stdin);    int team10 [50];    int team11 [50];    int team12 [50]; 
                         printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf(" omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your asesst into this tourn :) \n");
   printf(" we will start this torn withe alote of games i hope it will be compataiv this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so lets start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" mister %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;






































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;








for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}

int cs[12];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
int n=12;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<12 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<12 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            
            
            
                
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
              
                 }  


















































           
               else if (NT==13){ char teamA[50];   char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    printf("input the name of your teams one by one:\n");fgets(teamA,50,stdin);  fgets(teamA,50,stdin);   fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team13A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];  
               
            printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf(" omg wow, at least you have good health, keep it up\n");
printf("btw i am 'messi' your assistant into this tournament :)  \n");
   printf("we will start this tournament with a lote of games ,I hope it will be competitive this seasen\n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);





































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the First  withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;








for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
int cs[13];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
int n=13;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<13 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<13 ; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team13A ,l,team13b);
}}

    h=0;            
            
          
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
                 }  


















































           
                 else if (NT==14){ char teamA[50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    printf("input the name of your teams one by one:\n"); fgets(teamA,50,stdin);    fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];     int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];
                 
                            
            printf(" Hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf(" omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf("we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;




































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;







for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
int cs[14];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
int n=14;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<14 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<14 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                     }   


















































           
                  else if (NT==15){  char teamA[50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    printf("input the name of your teams one by one:\n"); fgets(teamA,50,stdin);    fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team15A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50]; 
                         
                            
            printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;


































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;






for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
int cs[15];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
int n=15;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<15 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<15 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team15A ,l,team15b);
}}

    h=0;              
             
                  
                             
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                     } 


















































           
                     else if (NT==16){  char teamA[50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    char team16A [50];    printf("input the name of your teams one by one:\n");fgets(teamA,50,stdin);     fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    fgets(team16A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team16A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50];    int team16 [50];  
                         printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[3] = tm1;
team6[8] = 0;


































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[7] = tm1;
team6[8] = 0;





for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team16b= team16[i]+ team16b;
  
}
int cs[16];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
cs[15] = team16b;
int n=16;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<16 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place withe %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<16; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team15A ,l,team15b);
}}

    h=0;              
                               for( int i=0 ; i<16 ; i++ ){
   l =i+1;
if(cs[i] == team16b  && h==0){
   h++;
   printf(" team %s come in %d place withe %d point \n" , team16A ,l,team16b);
}}

    h=0;              
          
                     
                               
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                       }  


















































            
                         else if (NT==17){ char teamA[50];   char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    char team16A [50];    char team17A [50];    printf("input the name of your teams one by one:\n");  fgets(teamA,50,stdin);   fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    fgets(team16A,50,stdin);    fgets(team17A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team17A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50];    int team16 [50];    int team17 [50]; 
                                     printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 32 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 33 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 34 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 35 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[3] = tm1;
team6[8] = 0;
































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[7] = tm1;
team6[8] = 0;




for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team16b= team16[i]+ team16b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team17b= team17[i]+ team17b;
  
}
int cs[17];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
cs[15] = team16b;
cs[16] = team17b;
int n=17;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<17 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<17; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team15A ,l,team15b);
}}

    h=0;              
                               for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team16b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team16A ,l,team16b);
}}

    h=0;              
                                  for( int i=0 ; i<17 ; i++ ){
   l =i+1;
if(cs[i] == team17b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team17A ,l,team17b);
}}

    h=0;        
         
                                           
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                         
                            }  


















































           
                           else if (NT==18){  char teamA[50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    char team16A [50];    char team17A [50];    char team18A [50];    printf("input the name of your teams one by one:\n");  fgets(teamA,50,stdin);   fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    fgets(team16A,50,stdin);    fgets(team17A,50,stdin);    fgets(team18A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team18A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50];    int team16 [50];    int team17 [50];    int team18 [50]; 
                                            printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 32 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 33 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 34 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 35 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[3] = tm1;
team6[8] = 0;































// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[7] = tm1;
team6[8] = 0;



for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team16b= team16[i]+ team16b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team17b= team17[i]+ team17b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team18b= team18[i]+ team18b;
  
}
int cs[18];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
cs[15] = team16b;
cs[16] = team17b;
cs[17] = team18b;
int n=18;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<18 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<18; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team15A ,l,team15b);
}}

    h=0;              
                               for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team16b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team16A ,l,team16b);
}}

    h=0;              
                                  for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team17b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team17A ,l,team17b);
}}

    h=0;        
         
                                    for( int i=0 ; i<18 ; i++ ){
   l =i+1;
if(cs[i] == team18b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team18A ,l,team18b);
}}

    h=0;                                            
                         
                         
                         
                         
                
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
                              }  


















































           
                             else if (NT==19){   char teamA[50]; char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    char team16A [50];    char team17A [50];    char team18A [50];    char team19A [50];    printf("input the name of your teams one by one:\n"); fgets(teamA,50,stdin);    fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    fgets(team16A,50,stdin);    fgets(team17A,50,stdin);    fgets(team18A,50,stdin);    fgets(team19A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    int team9 [50];    fgets(team19A,50,stdin);    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50];    int team16 [50];    int team17 [50];    int team18 [50];    int team19 [50]; 
                                                  printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 32 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 33 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 34 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 35 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 44 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team8A, &tm1 ,&tm2);

team19[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 45 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team2A, &tm1 ,&tm2);

team19[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 46 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team7A, &tm1 ,&tm2);

team19[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 47 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team19A ,team6A, &tm1 ,&tm2);

team19[3] = tm1;
team6[8] = 0;






























// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 44 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team8A, &tm1 ,&tm2);

team19[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 45 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team2A, &tm1 ,&tm2);

team19[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 46 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team7A, &tm1 ,&tm2);

team19[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 47 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team19A ,team6A, &tm1 ,&tm2);

team19[7] = tm1;
team6[8] = 0;

for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team16b= team16[i]+ team16b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team17b= team17[i]+ team17b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team18b= team18[i]+ team18b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team19b= team19[i]+ team19b;
  
}
int cs[19];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
cs[15] = team16b;
cs[16] = team17b;
cs[17] = team18b;
cs[18] = team19b;
int n=19;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<19 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team15A ,l,team15b);
}}

    h=0;              
                               for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team16b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team16A ,l,team16b);
}}

    h=0;              
                                  for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team17b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team17A ,l,team17b);
}}

    h=0;        
         
                                    for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team18b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team18A ,l,team18b);
}}

    h=0;                                            
                                          for( int i=0 ; i<19 ; i++ ){
   l =i+1;
if(cs[i] == team19b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team19A ,l,team19b);
}}

    h=0;                       
                
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                                } 


















































           
                                else{  char teamA[50];  char team1A [50];    char team2A [50];    char team3A [50];    char team4A [50];    char team5A [50];    char team6A [50];    char team7A [50];    char team8A [50];    char team9A [50];    char team10A [50];    char team11A [50];    char team12A [50];    char team13A [50];    char team14A [50];    char team15A [50];    char team16A [50];    char team17A [50];    char team18A [50];    char team19A [50];    char team20A [50];    printf("input the name of your teams one by one:\n"); fgets(teamA,50,stdin);    fgets(team1A,50,stdin);    fgets(team2A,50,stdin);    fgets(team3A,50,stdin);    fgets(team4A,50,stdin);    fgets(team5A,50,stdin);    fgets(team6A,50,stdin);    fgets(team7A,50,stdin);    fgets(team8A,50,stdin);    fgets(team9A,50,stdin);    fgets(team10A,50,stdin);    fgets(team11A,50,stdin);    fgets(team12A,50,stdin);    fgets(team13A,50,stdin);    fgets(team14A,50,stdin);    fgets(team15A,50,stdin);    fgets(team16A,50,stdin);    fgets(team17A,50,stdin);    fgets(team18A,50,stdin);    fgets(team19A,50,stdin);    fgets(team20A,50,stdin);    int team1 [50];    int team2 [50];    int team3 [50];    int team4 [50];    int team5 [50];    int team6 [50];    int team7 [50];    int team8 [50];    fgets(team20A,50,stdin);    int team9 [50];    int team10 [50];    int team11 [50];    int team12 [50];    int team13 [50];    int team14 [50];    int team15 [50];    int team16 [50];    int team17 [50];    int team18 [50];    int team19 [50];    int team20 [50]; 
                                                                     printf(" hello user :)  \n");
       
        printf(" are you filing good today ? tell me about your day : ^_^ ") ;
         fgets(conv,2000,stdin);
        printf("omg wow, at least you have good health, keep it up \n");
printf("btw i am 'messi' your assistant into this tournament :) \n");
   printf(" we will start this tournament with a lote of games ,I hope it will be competitive this seasen \n ");
   printf(" press enter key to start : \n");
   fgets(vd,50,stdin);
  printf(" so let's start ^o^ \n");


  //DAY 1     ******************************************************************************************************************

printf(" * DAY 1 * \n");
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  'enter your name' ");
 fgets(user,50,stdin);
printf(" sir %s great honor to see you \n" ,user);







printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);
 
team1[0] = tm1;
team2[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team3[0] = tm1;
team4[0] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);

team1[1] = tm1;
team3[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);
 
team4[1] = tm1;
team5[0] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);
 
team1[2] = tm1;
team4[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);

team2[1] = tm1;
team5[1] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* First  match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[3] = tm1;
team5[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[2] = tm1;
team3[2] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[3] = tm1;
team4[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);
 
team3[3] = tm1;
team5[3] = tm2;













//DAY 6     ******************************************************************************************************************

printf(" * DAY 6* \n");


printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* First match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[0] = tm1;
team7[0] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team9A, &tm1 ,&tm2);

team8[0] = tm1;
team9[0] = tm2;





//day7      ******************************************************************************************************************
printf(" * DAY 7* \n");
printf(" so today we have 2 matches the first withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* First  match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);

team6[1] = tm1;
team8[1] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team9[1] = tm1;
team10[0] = tm2;

//day8    ******************************************************************************************************************
printf(" * DAY 8* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[2] = tm1;
team9[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[1] = tm1;
team10[1] = tm2;

//day9    ******************************************************************************************************************
printf(" * DAY 9* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd between %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);
 
team6[3] = tm1;
team10[2] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[2] = tm1;
team8[2] = tm2;

//day10    ******************************************************************************************************************
printf(" * DAY 10* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[3] = tm1;
team9[3] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);

team8[3] = tm1;
team10[3] = tm2;

//day11    ******************************************************************************************************************
printf(" * DAY 11 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[0] = tm1;
team1[8] = 0;
//day12    ******************************************************************************************************************
printf(" * DAY 12 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[1] = tm1;
team2[8] = 0;
//day13    ******************************************************************************************************************
printf(" * DAY 13 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[2] = tm1;
team3[8] = 0;
//day14    ******************************************************************************************************************
printf(" * DAY 14 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team4A, &tm1 ,&tm2);

team11[3] = tm1;
team4[8] = 0;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[0] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[1] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[2] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[3] = tm1;
team8[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[2] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 32 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 33 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 34 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 35 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[3] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[1] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 44 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team8A, &tm1 ,&tm2);

team19[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 45 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team2A, &tm1 ,&tm2);

team19[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 46 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team7A, &tm1 ,&tm2);

team19[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 47 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team19A ,team6A, &tm1 ,&tm2);

team19[3] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 48 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team8A, &tm1 ,&tm2);

team20[0] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 49 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team2A, &tm1 ,&tm2);

team20[1] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 50 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team7A, &tm1 ,&tm2);

team20[2] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 51 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team20A ,team6A, &tm1 ,&tm2);

team20[3] = tm1;
team6[8] = 0;






























// final round ***********************************************************************
printf(" ********** The final round  ********** \n");
printf("* this is the last chance for each team in this tournament * \n");
printf(" so mister %s Who do you think will win this tournament? \n",user);

fgets(vd,50,stdin); 
  


printf(" so team %s we will see\n",vd);
printf(" **********************************************************************************************************\n");

//day 1
printf(" commenatator : Ladies and gentleman, thank you so much for attending especially our guest of honor  %s , we heard he was %s  last week we hope he doing better \n" ,user , conv);
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team2A ,team3A ,team4A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team2A, &tm1 ,&tm2);

team1[4] = tm1;
team2[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);
 
team3[4] = tm1;
team4[4] = tm2;





//day2      ******************************************************************************************************************
printf(" * DAY 2 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team3A ,team4A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team3A, &tm1 ,&tm2);
 
team1[5] = tm1;
team3[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team4A ,team5A, &tm1 ,&tm2);

team4[5] = tm1;
team5[4] = tm2;

//day3    ******************************************************************************************************************
printf(" * DAY 3* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team4A ,team2A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team4A, &tm1 ,&tm2);

team1[6] = tm1;
team4[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team5A, &tm1 ,&tm2);
 
team2[5] = tm1;
team5[5] = tm2;

//day4    ******************************************************************************************************************
printf(" * DAY 4* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team1A ,team5A ,team2A ,team3A);
//match 1
printf("* firts match *\n");

 hiiii(team1A ,team5A, &tm1 ,&tm2);
 
team1[7] = tm1;
team5[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team2A ,team3A, &tm1 ,&tm2);

team2[6] = tm1;
team3[6] = tm2;

//day5    ******************************************************************************************************************
printf(" * DAY 5* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team2A ,team4A ,team3A ,team5A);
//match 1
printf("* firts match *\n");

 hiiii(team2A ,team4A, &tm1 ,&tm2);

team2[7] = tm1;
team4[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team5A, &tm1 ,&tm2);

team3[7] = tm1;
team5[7] = tm2;


//day6    ******************************************************************************************************************
printf(" * DAY 6* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team1A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team1A, &tm1 ,&tm2);

team11[4] = tm1;
team1[8] = 0;










//DAY 7     ******************************************************************************************************************

printf(" * DAY 7* \n");


printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team7A ,team8A ,team9A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team7A, &tm1 ,&tm2);
 
team6[4] = tm1;
team7[4] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team3A ,team4A, &tm1 ,&tm2);

team8[4] = tm1;
team9[4] = tm2;


//day8    ******************************************************************************************************************
printf(" * DAY 8 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[5] = tm1;
team2[8] = 0;



//day9      ******************************************************************************************************************
printf(" * DAY 9 * \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team8A ,team9A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team8A, &tm1 ,&tm2);
 
team6[5] = tm1;
team8[5] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team9A ,team10A, &tm1 ,&tm2);

team9[5] = tm1;
team10[4] = tm2;
//day10    ******************************************************************************************************************
printf(" * DAY 10 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team2A, &tm1 ,&tm2);

team11[6] = tm1;
team2[8] = 0;


//day11    ******************************************************************************************************************
printf(" * DAY 11* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team9A ,team7A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team9A, &tm1 ,&tm2);

team6[6] = tm1;
team9[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team10A, &tm1 ,&tm2);

team7[5] = tm1;
team10[5] = tm2;

//day12    ******************************************************************************************************************
printf(" * DAY 12* \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team11A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team11A ,team3A, &tm1 ,&tm2);

team11[7] = tm1;
team3[8] = 0;

//day13   ******************************************************************************************************************
printf(" * DAY 13* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team6A ,team10A ,team7A ,team8A);
//match 1
printf("* firts match *\n");

 hiiii(team6A ,team10A, &tm1 ,&tm2);

team6[7] = tm1;
team10[6] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team7A ,team8A, &tm1 ,&tm2);

team7[6] = tm1;
team8[6] = tm2;

//day14    ******************************************************************************************************************
printf(" * DAY 14* \n");
printf(" so today we have 2 matches the fist withe %s and %s the 2nd betwen %s and %s so let start \n",team7A ,team9A ,team8A ,team10A);
//match 1
printf("* firts match *\n");

 hiiii(team7A ,team9A, &tm1 ,&tm2);

team7[7] = tm1;
team9[7] = tm2;
//match 2

printf("* 2nd match *\n");

hiiii(team8A ,team10A, &tm1 ,&tm2);
 
team8[7] = tm1;
team10[7] = tm2;
//day15    ******************************************************************************************************************
printf(" * DAY 15 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team3A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team3A, &tm1 ,&tm2);

team12[4] = tm1;
team3[8] = 0;
//day16    ******************************************************************************************************************
printf(" * DAY 16 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team4A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team4A, &tm1 ,&tm2);

team12[5] = tm1;
team4[8] = 0;
//day17    ******************************************************************************************************************
printf(" * DAY 17 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team5A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team5A, &tm1 ,&tm2);

team12[6] = tm1;
team5[8] = 0;
//day18    ******************************************************************************************************************
printf(" * DAY 18 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team12A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team12A ,team8A, &tm1 ,&tm2);

team12[7] = tm1;
team8[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 19 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team8A, &tm1 ,&tm2);

team13[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 20 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team2A, &tm1 ,&tm2);

team13[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 21 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team7A, &tm1 ,&tm2);

team13[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 23 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team13A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team13A ,team6A, &tm1 ,&tm2);

team13[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 24 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team8A, &tm1 ,&tm2);

team14[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 25 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team2A, &tm1 ,&tm2);

team14[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 26 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team7A, &tm1 ,&tm2);

team14[6] = tm1;
team7[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 27 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team14A ,team6A );
//match 1
printf("* firts match *\n");

 hiiii(team14A ,team6A, &tm1 ,&tm2);

team14[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team8A, &tm1 ,&tm2);

team15[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team2A, &tm1 ,&tm2);

team15[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team15A ,team7A, &tm1 ,&tm2);

team15[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team15A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team15A ,team6A, &tm1 ,&tm2);

team15[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 28 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team8A, &tm1 ,&tm2);

team16[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 29 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team2A, &tm1 ,&tm2);

team16[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 30 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team16A ,team7A, &tm1 ,&tm2);

team16[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 31 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team16A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team16A ,team6A, &tm1 ,&tm2);

team16[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 36 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team8A, &tm1 ,&tm2);

team17[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 37 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team2A, &tm1 ,&tm2);

team17[5] = tm1;
team2[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 38 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team17A ,team7A, &tm1 ,&tm2);

team17[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 39 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team17A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team17A ,team6A, &tm1 ,&tm2);

team17[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 40 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team8A, &tm1 ,&tm2);

team18[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 41 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team2A, &tm1 ,&tm2);

team18[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 42 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team18A ,team7A, &tm1 ,&tm2);

team18[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 43 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team18A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team18A ,team6A, &tm1 ,&tm2);

team18[7] = tm1;
team6[8] = 0;

//day19    ******************************************************************************************************************
printf(" * DAY 44 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team8A, &tm1 ,&tm2);

team19[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 45 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team2A, &tm1 ,&tm2);

team19[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 46 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team19A ,team7A, &tm1 ,&tm2);

team19[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 47 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team19A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team19A ,team6A, &tm1 ,&tm2);

team19[7] = tm1;
team6[8] = 0;
//day19    ******************************************************************************************************************
printf(" * DAY 48 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team8A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team8A, &tm1 ,&tm2);

team20[4] = tm1;
team8[8] = 0;
//day10    ******************************************************************************************************************
printf(" * DAY 49 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team2A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team2A, &tm1 ,&tm2);

team20[5] = tm1;
team2[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 50 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team7A );
//match 1
printf("* firts match *\n");

 hiiii(team20A ,team7A, &tm1 ,&tm2);

team20[6] = tm1;
team7[8] = 0;

//day10    ******************************************************************************************************************
printf(" * DAY 51 * \n");
printf(" so today we have 1 matches withe %s and %s so let start \n",team20A ,team6A );
//match 1
printf("* First match *\n");

 hiiii(team20A ,team6A, &tm1 ,&tm2);

team20[7] = tm1;
team6[8] = 0;

for( int i=0 ; i<=7 ; i++ ){
  team1b= team1[i] + team1b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team2b= team2[i]+ team2b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team3b= team3[i]+ team3b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team4b= team4[i]+ team4b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team5b= team5[i]+ team5b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team6b= team6[i]+ team6b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team7b= team7[i]+ team7b;
  
}

for( int i=0 ; i<=7 ; i++ ){
  team8b= team8[i]+ team8b;
 
}


for( int i=0 ; i<=7 ; i++ ){
  team9b= team9[i]+ team9b;
 
}

for( int i=0 ; i<=7 ; i++ ){
  team10b= team10[i]+ team10b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team11b= team11[i]+ team11b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team12b= team12[i]+ team12b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team13b= team13[i]+ team13b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team14b= team14[i]+ team14b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team15b= team15[i]+ team15b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team16b= team16[i]+ team16b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team17b= team17[i]+ team17b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team18b= team18[i]+ team18b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team19b= team19[i]+ team19b;
  
}
for( int i=0 ; i<=7 ; i++ ){
  team20b= team20[i]+ team20b;
  
}
int cs[20];
cs[0] = team1b;
cs[1] = team2b;
cs[2] = team3b;
cs[3] = team4b;
cs[4] = team5b;
cs[5] = team6b;
cs[6] = team7b;
cs[7] = team8b;
cs[8] = team9b;
cs[9] = team10b;
cs[10] = team11b;
cs[11] = team12b;
cs[12] = team13b;
cs[13] = team14b;
cs[14] = team15b;
cs[15] = team16b;
cs[16] = team17b;
cs[17] = team18b;
cs[19] = team20b;
int n=20;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (cs[j] < cs[j + 1]) {
                // Swap cs[j] and cs[j + 1]
                int temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;
            }
        }
    }
int l;
for( int i=0 ; i<20 ; i++ ){
printf("%d\n" ,cs[i]);
}
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team1b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team1A ,l,team1b);
}}

h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team2b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team2A ,l,team2b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team3b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team3A ,l,team3b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team4b && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team4A ,l,team4b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team5b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team5A ,l,team5b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team6b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team6A ,l,team6b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team7b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team7A ,l,team7b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team8b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team8A ,l,team8b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team9b  && h==0){
   h++;
   printf(" team %s came in %d place with %d point \n" , team9A ,l,team9b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team10b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team10A ,l,team10b);
}}
h=0;
for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team11b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team11A ,l,team11b);
}}

    h=0;        
       for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team12b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team12A ,l,team12b);
}}

    h=0;         
            for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team13b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team13A ,l,team13b);
}}

    h=0;            
                  for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team14b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team14A ,l,team14b);
}}

    h=0;         
                       for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team15b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team15A ,l,team15b);
}}

    h=0;              
                               for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team16b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team16A ,l,team16b);
}}

    h=0;              
                                  for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team17b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team17A ,l,team17b);
}}

    h=0;        
         
                                    for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team18b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team18A ,l,team18b);
}}

    h=0;                                            
                                          for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team19b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team19A ,l,team19b);
}}

    h=0;    
                                              for( int i=0 ; i<20 ; i++ ){
   l =i+1;
if(cs[i] == team20b  && h==0){
   h++;
   printf(" team %s come in %d place with %d point \n" , team20A ,l,team20b);
}}

    h=0;                      
                

                                }





















































             
       return 0; 
       }