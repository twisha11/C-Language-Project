#include<stdio.h>
#include<stdlib.h>
//function declearation
void cycle();
void bike();
void car();
void riksha();
int showdetail();
int detail();
void delete();

//variable declearation
int nbike=0,ncycle=0,ncar=0,nriksha=0,amount=0,count=0,n;

//main function
int main()
{   
   //1 means condition is true , loop infinate working till user enter 7 for exit program.
    while(1)
    {           
        switch(showdetail())
     {
        case 1:
               cycle();
               break;
        case 2:
               bike();
               break;
        case 3:
               car();
               break;
        case 4:
               riksha();
               break;
        case 5:
               detail();
               break;
        case 6:
               delete();
               break;
        case 7:
               exit(0);
       default:
               printf("enter vaid number");
     }
    }
  return 0;
}

//shoedetail fun is presenting menu for user
int showdetail()
{
 printf("1.parking cycle\n");
 printf("2.parking bike\n");
 printf("3.parking car\n");
 printf("4.parking riksha\n");
 printf("5.parking detail :\n");
 printf("6.if you want to delete data\n");
 printf("7.exit\n");
 printf("enter number:\n");
 scanf("%d",&n);
 return n;
}

//this fun is call when total data have to show
int detail()
{
 printf("parking cycle:%d\n",ncycle);
 printf("parking bike:%d\n",nbike);
 printf("parking car:%d\n",ncar);
 printf("parking riksha%d\n",nriksha);
 printf("parking detail :%d\n",count);
 printf("total amount:%d\n",amount);
 printf("\n");
}

//store cycle data
void cycle()
{
    ncycle++;
    amount=amount+20;//cycle parking RS.20
    count++;
    printf("succesfully add cycle");
}

//store bike data
void bike()
{
    nbike++;
    amount=amount+50;//bike parking RS.50
    count++;
    printf("succesfully add bike");
}

//store car data
void car()
{
    ncar++;
    amount=amount+100;//car parking RS.100
    count++;
    printf("succesfully add car");
}

//store riksha data
void riksha()
{
    nriksha++;
    amount=amount+80;//riksha parking RS.80
    count++;
    printf("succesfully add riksha");
}

//delete entered data
void delete()
{
    //all data goes to zero
    nbike=0;
    ncycle=0;
    ncar=0;
    nriksha=0;
    amount=0;
    count=0;
}