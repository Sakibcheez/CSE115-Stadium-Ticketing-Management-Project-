#ifndef MENU_H
#define MENU_H

#include<stdio.h>
#include"login.h"

int i,qtn,cat,tottic,gtic=0,btic=0,itic=0,vtic=0,matchno;
// cat = category, tottic = total ticket , gtic = general ticket
// itic = international ticket , vtic = cip ticket



int sum=0;
int total=1;


void homepage()
{
    system("cls");
    int choice;
    FILE *fpointer;
    fpointer=fopen("homepage.txt","r");
    char singleline[10000];

    while(!feof(fpointer))
    {
        fgets(singleline,10000,fpointer);
        puts(singleline);
    }
    fclose(fpointer);

    printf("\n\n\t\tEnter your choice[1-6]: ");
    scanf("%d", &choice);
    system("cls");
    switch(choice)
    {
    case 1:
        tournamentinfo();
        break;
    case 2:
        schedule();
        break;
    case 3:
       ticket();
       break;
    case 4:
      View_info();
       break;
    case 5:
      LoginProcess();
       break;
    case 6:
        printf("System Exit");
        exit(0);
        break;


    default:
        printf("Invalid Choice! System Exit\n");
    }
}
void changecase(char ch[])
{
    int i;
    for(i=0; ch[i]!='\0'; i++)
    {
        if(islower (ch[i]))
        {
            ch[i]=toupper(ch[i]);
        }
    }
}
void tournamentinfo()
{
    printf("\n\tTotal Team  :  6\n");
    printf("\n\tTotal Groups:  2\n");
    printf("\n\tTotal Match :  9\n");
    printf("\n\tTotal Venue :  2\n");
    printf("\n");
    printf("\n\tThe Groups and Teams are: \n");
    printf("\n\tGROUP 'A': Bangladesh, Srilanka, Afganistan \n");
    printf("\n\tGROUP 'B': India, Pakistan, Hongkong \n");

    printf("\n\n\t\tPRESS ANY KEY....");
    fflush(stdin);
    getchar();
    homepage(); // returning to homepage

}
void schedule()
{
    system("cls");
    FILE *fpointer;
    fpointer=fopen("schedule.txt","r");
    char singleline[100000];

    while(!feof(fpointer))
    {
        fgets(singleline,100000,fpointer);
        puts(singleline);
    }
    fclose(fpointer);

    printf("\n\n\t\tPRESS ANY KEY....");
    fflush(stdin);
    getchar();
    homepage();

}
void search()
{

    int i,n;
    printf("Enter match number to get the details for your desirable match : ");
    scanf("%d",&n);
    switch(n)
    {


    case 1:
        printf("\n\t 1st Match: Group A: Bangladesh Vs Srilanka \n");
        printf("\n\tDate :20/11/2023");
        printf("   Time: 12:30pm\n");
        printf("\n\tVenue: Sher-e-Bangla National Cricket Stadium,Dhaka\n ");
        printf("\n");
        break;
    case 2:
        printf("\n\t2nd Match: Group B: Pakistan Vs Hongkong \n");
        printf("\n\tDate :21/11/2023");
        printf("  Time: 12:30pm\n");
        printf("\n\tVenue : Zahur Ahmed Chowdhury Stadium, Chittagong \n");
        printf("\n");
        break;

    case 3:
        printf("\n\t3rd Match: Group A: Bangladesh Vs Afganistan\n");
        printf("\n\tDate :22/11/2023");
        printf("   Time: 12:30pm\n");
        printf("\n\tVenue : Sher-e-Bangla National Cricket Stadium,Dhaka\n");
        printf("\n");
        break;

    case 4:
        printf("\n\t4th Match: Group B: India Vs Hongkong\n");
        printf("\n\tDate :23/11/2023");
        printf("   Time: 12:30pm\n");
        printf("\n\tVenue : Zahur Ahmed Chowdhury Stadium, Chittagong \n");
        printf("\n");
        break;

    case 5:
        printf("\n\t5th Match: Group A: Srilanka Vs Afganistan \n");
        printf("\n\tDate :24/11/2023");
        printf("  Time:12:30pm\n");
        printf("\n\tVenue : Sher-e-Bangla National Cricket Stadium,Dhaka\n");
        printf("\n");
        break;

    case 6:
        printf("\n\t6th Match: Group B: India Vs Pakistan\n");
        printf("\n\tDate :25/11/2023");
        printf("   Time: 12:30pm\n");
        printf("\n\tVenue : Zahur Ahmed Chowdhury Stadium, Chittagong \n");
        printf("\n");
        break;

    case 7:
        printf("\n\t7th Match: Super 4: Grp-A Winner 1 Vs Grp-B Winner 2\n");
        printf("\n\tDate :27/11/2023");
        printf("   Time: 01:30pm\n");
        printf("\n\tVenue : Sher-e-Bangla National Cricket Stadium,Dhaka\n");
        printf("\n");
        break;

    case 8:
        printf("\n\t8th Match:  Super 4: Grp-A Winner 2 Vs Grp-B Winner 1\n");
        printf("\n\tDate :28/11/2023");
        printf("   Time: 01:30pm\n");
        printf("\n\tVenue : Zahur Ahmed Chowdhury Stadium, Chittagong\n");
        printf("\n");
        break;

    case 9:
        printf("\n\t9th Match:  Final : Team X Vs Team Y  \n");
        printf("\n\tDate :30/11/2023");
        printf("   Time: 01:30pm\n");
        printf("\n\tVenue : Sher-e-Bangla National Cricket Stadium,Dhaka\n");
        printf("\n");
        break;
    }
option();
}


int taka(int cat) // tciket price function
{
    int price;

    if(cat==1)
    {
        price=500;
    }
    if(cat==2)
    {
        price=1000;
    }
    if(cat==3)
    {
        price=2500;
    }
    return price;

}
void ticket() // ticket purchase function
{
    printf("1st Match: Group A: Bangladesh Vs Srilanka\n");
    printf("2nd Match: Group B: Pakistan Vs Hongkong \n");
    printf("3rd Match: Group A: Bangladesh Vs Afganistan \n");
    printf("4th Match: Group B: India Vs Hongkong\n");
    printf("5th Match: Group A: Srilanka Vs Afganistan \n");
    printf("6th Match: Group B: India Vs Pakistan\n");
    printf("7th Match: Super 4: Grp-A Winner 1 Vs Grp-B Winner 2\n");
    printf("8th Match: Super 4: Grp-A Winner 2 Vs Grp-B Winner 1 \n");
    printf("9th Match: Final  : Team X Vs Team Y \n\n\n\n");

    search();
}
void option()
{
    printf("-----------------------Enter match no to purchase ticket: \n");
    scanf("%d",&matchno);
    printf("\n\tTicket Category's are: \n");
    printf("\n\t1.General\n");
    printf("\n\t2.International Citizen\n");
    printf("\n\t3.V.I.P\n");
    while(1)
    {

        printf("\n\tSelect ticket category(press 0 to exit): ");
        scanf("%d",&cat);
        if(cat==0)
        {
            break;
        }

        printf("\n\tEnter number of ticket you want to buy: ");
        scanf("%d",&qtn);
        if(cat==1)
        {
            gtic+=qtn;
        }
        if(cat==2)
        {
            itic+=qtn;
        }
        if(cat==3)
        {
            vtic+=qtn;

        }

        tottic+=qtn;
        total=qtn*taka(cat);
        sum+=total;

    }

    printf("\n\tTotal price  :%d taka\n",sum);

    printf("\n\tTotal ticket : %d\n",tottic);

    if(gtic>0)
    {
        printf("Number of general ticket purchased :%d\n",gtic);
    }
    if(itic>0)
    {
        printf("Number of International Citizen category ticket purchased :%d\n",itic);
    }
    if(vtic>0)
    {
        printf("Number of V.I.P category ticket purchased : %d\n",vtic);
    }
    printf("\n\n\t\tPRESS ANY KEY for payment Menu: ");
    fflush(stdin);
    getchar();
    payment();
}
void payment()
{
    int choice ;
    printf("\n\n\t*PAYMENT'S SYSTEMS ARE :\t\n\n");
    printf("\n\t 1.Online Banking\t\n");
    printf("\n\t 2.Credit Card\t\n");
    printf("\n\t 3.Debid Card\t\n");
    printf("Press how you wanted to pay the bill :\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
    {
        int pay;
        char s[200];
        char b11[200];
        char n[200];
        int m;
        int a;
        printf("Enter Bank Name :");
        fflush(stdin);
        gets(s);
        printf("Enter Branch : ");
        fflush(stdin);
        gets(b11);
        printf("Enter Your name :");
        fflush(stdin);
        gets(n);
        printf("Enter Your Phone Number :");
        scanf("%d",&m);
        printf("Enter Account Number : ");
        scanf("%d",&a);
        printf("Enter amount : ");
        scanf("%d",&pay);
        fflush(stdin);

        if(pay==sum)
        {
            printf("Payment successful ");
        }
        else
        {
            printf("Enter correct amount ");
        }

        FILE*fp1;
        fp1=fopen("database.txt","a+");
        if(fp1==NULL)
        {
            printf("File isn't created.So,create a file first ");
            exit(1);
        }
        // printf("\nFile opened successfully .\n"); // optional
        fprintf(fp1,"\n\tMatchNo.: %d\n\tName:%s\n\tTicket quantity: %d\n\tTicket price: %d taka\n\tGeneral Ticket: %d\n\tInternartional Ticket: %d\n\tV.I.P Ticket :%d\n\tPhone Number : %d\n\tAccount Number: %d\n\tBank Name: %s\n\tBranch Name: %s\n",matchno,n,tottic,sum,gtic,itic,vtic,m,a,s,b11);
        fclose(fp1);
        break ;

    }
    case 2 :
    {
        char n1[200];
        int a1;
        int pay;
        int m1;

        printf("Enter Name:");
        fflush(stdin);
        gets(n1);
        printf("Enter Credit Card number : ");
        scanf("%d",&a1);
        printf("Enter Your Phone Number :");
        scanf("%d", &m1);
        printf("Enter amount : ");
        scanf("%d",&pay);

        if(pay==sum)
        {
            printf("Payment successful ");
        }
        else
        {
            printf("Enter correct amount ");
        }
        FILE*fp2;
        fp2=fopen("database.txt","a+");
        if(fp2==NULL)
        {
            printf("File isn't created.So,create a file first ");
            exit(1);
        }

        fprintf(fp2,"\n\tMatchNo.: %d\n\tName:%s\n\tTicket quantity: %d\n\tTicket price: %d taka\n\tGeneral Ticket: %d\n\tInternartional Ticket: %d\n\tV.I.P Ticket: %d\n\tPhone Number : %d\n\tCredit Card Number : %d\n",matchno,n1,tottic,sum,gtic,itic,vtic,m1,a1);
        fclose(fp2);

        break;

    }
    case 3 :
    {
        int pay;
        char n2[200];
        int a2;
        int m2;

        printf("Enter Name:");
        fflush(stdin);
        gets(n2);
        printf("Enter Debit Card number : ");
        scanf("%d",&a2);
        printf("Enter Your Phone Number :");
        scanf("%d", &m2);
        printf("Enter amount : ");
        scanf("%d",&pay);
        if(pay==sum)
        {
            printf("Payment successful ");
        }
        else
        {
            printf("Enter correct amount ");
        }
        FILE*fp3;
        fp3=fopen("database.txt","a+");
        if(fp3==NULL)
        {
            printf("File isn't created.So,create a file first ");
            exit(1);
        }
       // printf("\nFile opened successfully .\n");  //optional
        fprintf(fp3,"\n\tMatchNo.: %d\n\tName:%s\n\tTicket quantity: %d\n\tTicket price: %d taka\n\tGeneral Ticket: %d\n\tInternartional Ticket: %d\n\tV.I.P Ticket: %d\n\tPhone Number : %d\n\tDebit Card Number : %d\n",matchno,n2,tottic,sum,gtic,itic,vtic,m2,a2);
        fclose(fp3);
        break;
    }
    }

    printf("\n\n\t\tPRESS ANY KEY for to Go Homepage: ");
    fflush(stdin);
    getchar();
    system("cls");
    homepage();
}
void View_info(void)
{


    FILE *ptr;

    ptr = fopen("database.txt","r");

    if(ptr == NULL)
	{
        printf("Failed to open the file \n");
        return ;
    	}

    char ch[500];

    while(fgets(ch,500,ptr))
	{
        printf("%s",ch);
        usleep(100000);
    	}

	    fclose(ptr);

    printf("\n\n\t\tPRESS ANY KEY GO  HOMEPAGE....");
    fflush(stdin);
    getchar();
    homepage();
}



#endif
