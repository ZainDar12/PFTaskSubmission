//Q1
#include<stdio.h>
#include <string.h>
int main(){
    int TransactionLimit,Spending1,Spending2,Spending3,Spending4;
    int DailySpendingLimit;
    int Time1,Time2,Time3,Time4;
    char country1[7],country2[7],TCountry1[7],TCountry2[7],TCountry3[7],TCountry4[7];
    char TransactionID1[20];
    char  TransactionID2[20];
    char  TransactionID3[20];
    char TransactionID4[20];
    printf("Hi Welcome to the banking system\n");
    printf("Please enter your daily spending limit:\n");
    scanf("%d",&DailySpendingLimit);
    printf("Please enter the names of the countries you usually transact in:\n");
    scanf("%s %s",country1,country2);// Here we enter the list of countries we normally transact in
    printf("Please enter all your transactions today, in the format:\n");
    printf("<Spending Amount> <Transaction ID> <Time of Transaction in 24hr format e.g:1605 represents 16:05> <Country of Transaction>\n");
    scanf("%d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s",&Spending1,TransactionID1,&Time1,TCountry1,
        &Spending2,TransactionID2,&Time2,TCountry2,&Spending3,TransactionID3,&Time3,TCountry3
        ,&Spending4,TransactionID4,&Time4,TCountry4);//Here we assume that 4 transaction are made at least
    if (Spending1 > DailySpendingLimit) {// now we check which transaction is suspicious and takes us above the exceeding limit
    printf("Transaction 1 with ID %s is Suspicious due to exceeding limit\n", TransactionID1);}
    else if (Spending1 + Spending2 > DailySpendingLimit) {
        printf("Transaction 2 with ID %s is Suspicious due to exceeding limit\n", TransactionID2);}
    else if (Spending1 + Spending2 + Spending3 > DailySpendingLimit) {
    printf("Transaction 3 with ID %s is Suspicious due to exceeeding limit\n", TransactionID3);}
    else if (Spending1 + Spending2 + Spending3 + Spending4 > DailySpendingLimit) {
    printf("Transaction 4 with ID %s is Suspicious due to exceeding limit\n", TransactionID4);}
    else {
    printf("All transactions are within the daily spending limit\n");}
    if (strcmp(TCountry1, country1) != 0 && strcmp(TCountry1, country2) != 0){//Here we check which transaction is in a different ountry and is flagged suspicious
    printf("Transaction 1 with ID %s is Suspicious due to a different country\n", TransactionID1);}
    if (TCountry2 != country1 && TCountry2 != country2) {
    printf("Transaction 2 with ID %s is Suspicious due to a different country\n", TransactionID2);}
    if (TCountry3 != country1 && TCountry3 != country2) {
    printf("Transaction 3 with ID %s is Suspicious due to a different country\n", TransactionID3);}
    if (TCountry4 != country1 && TCountry4 != country2) {
    printf("Transaction 4 with ID %s is Suspicious due to a different country\n", TransactionID4);}
    if (Time2-Time1<100 || Time3-Time2<100 || Time4-Time3<100){// assume 2 tansaction within hours is suspicious
        printf("Transactions are suspicious due to short time interval\n");}
    return 0;    
}
//Q2
#include <stdio.h>
int main(){
    printf("Please enter the x cordinate of the point:\n");
    float x;
    scanf("%f",&x);
    printf("Please enter the y cordinate of the point:\n");
    float y;
    scanf("%f",&y);
    if (x>0 && y>0){
        printf("The point %.2f,%.2f lies in the First Quadrant\n",x,y);}
        else if (x<0 && y>0){
        printf("The point %.2f,%.2f lies in the second quadrant\n",x,y);}
        else if (x<0 && y<0){
            printf("The point %.2f,%.2f lies in the third quadrant\n",x,y);}
        else if (x>0 && y<0){
            printf("The point %.2f,%.2f lies in the fourth quadrant\n",x,y);}
        else if (x==0 && y!=0){
            printf("The point %.2f,%.2f lies on the Y axis\n",x,y);}
        else if (y==0 && x!=0){
            printf("The point %.2f,%.2f lies on the X axis\n",x,y);}
        else{
            printf("The point %.2f,%.2f lies at the origin\n",x,y);
        }
    return 0;
    }
//Q3
#include <stdio.h>

int main() {
    printf("This program is to check if you are eligible for a driver's license\n");
    printf("Please enter your age:\n");

    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("Have you passed the Eye test? (Y/N)\n");
        char eyeTest;
        scanf(" %c", &eyeTest); 

        if (eyeTest == 'Y' || eyeTest == 'y') {
            printf("Have you passed your written test? (Y/N)\n");
            char writtenTest;
            scanf(" %c", &writtenTest);

            if (writtenTest == 'Y' || writtenTest == 'y') {
                printf("Have you passed your driving test? (Y/N)\n");
                char drivingTest;
                scanf(" %c", &drivingTest);

                if (drivingTest == 'Y' || drivingTest == 'y') {
                    if (age < 60) {
                        printf("You are eligible for a driver's license\n");
                    } else {
                        printf("You need a medical fitness certificate.\n");
                        printf("Do you have one? (Y/N)\n");
                        char medicalCert;
                        scanf(" %c", &medicalCert);

                        if (medicalCert == 'Y' || medicalCert == 'y') {
                            printf("You are eligible for a driver's license\n");
                        } else {
                            printf("You are not eligible for a driver's license\n");
                        }
                    }
                } else {
                    printf("You are not eligible for a driver's license\n");
                }
            } else {
                printf("You are not eligible for a driver's license\n");
            }
        } else {
            printf("You are not eligible for a driver's license\n");
        }
    } else {
        printf("You are not eligible for a driver's license\n");
    }

    return 0;
}
//Q4
#include <stdio.h>
#include <string.h>
int main(){
    int a,b,c,d,e;
    char PairPresence = 'N';
    char ThreeOfaKind = 'N';
    printf("The card rank is as follows:\n");
    printf("1.Ace, 2-10 are card numbers,11.Jack, 12.Queen, 13.King\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a == b || a == c || a == d || a == e || b == c || 
        b == d || b == e || c == d || c == e || d == e){
        PairPresence = 'Y';
        if (a == b && a == c || a == b && a == d || a == b && a == e ||
        a == c && a == d || a == c && a == e || a == d && a == e ||
        b == c && b == d || b == c && b == e || b == d && b == e ||
        c == d && c == e){
        ThreeOfaKind = 'Y';}}
    if (PairPresence == 'Y'&& ThreeOfaKind =='Y'){
        printf("You have a Full House\n");}
    else{
        printf("You do not have a Full House\n");
    }
    return 0;
}
//Q5
#include <stdio.h>
int main(){
    int Num[10] = {0};
    int i,j;
    printf("Please enter a number between 0-9:\n");
    scanf("%d",&i);
    while (i>=0 && i<10){
        for (j=0;j<10;j++){
            if (j == i){
                Num[j] = Num[j]+1;
                printf("Please enter a number between 0-9:\n");
                scanf("%d",&i);
                break;}}
    }
    printf("Number              Number of Occurences\n");
    for(i=0;i<10;i++){
        printf("%d                   %d\n",i,Num[i]);}
    return 0;
}
//Q7
#include <stdio.h>
int main()
{
    int value;
    printf("Please enter values in the range: 1....5\n");
    scanf("%d", &value);
    switch (value)
    {case 1:
        printf("You entered Monday\n");
        break;
    case 2:
        printf("You entered Tuesday\n");
        break;
    case 3:
        printf("You entered Wednesday\n");
        break;
    case 4:
        printf("You entered Thursday\n");
        break;
    case 5:
        printf("You entered Friday\n");
        break;
     case 6:
         printf("You entered Saturday \n");
     case 7:
         printf("You entered Sunday \n");
         break;}
}

