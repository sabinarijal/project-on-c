#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct login                          
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};
void quiz(char username[30]);
void login (void);
void registration (void);

int main (void)
{
    int option;

    printf("Press '1' to Register\nPress '2' to Login\n\n");
    scanf("%d",&option);

    getchar();           
    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
}

void login (void)
{
    char username[30],password[20];
    FILE *log;

    log = fopen("login.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
     struct login l;

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    gets(username);
    
    printf("\nPassword: ");
    printf("\n");
   gets(password);
    



    while(fread(&l,sizeof(l),1,log))
        {
        	
        	
        if((strcmp(username,l.username)==0) && (strcmp(password,l.password)==0))

            {   
                printf("\nSuccessful Login\n");
                quiz(username);
        }
        else 
            {
                printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
            }
        }

    fclose(log);

    return;
}
void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    struct login l;

    printf("\nEnter First Name:\n");
    scanf("%s",l.fname);
    fflush(stdin);
    printf("\nEnter Surname:\n");
    scanf("%c",l.lname);
    fflush(stdin);
    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
    getch();
    getchar();
    system("CLS");
    login();
}

void quiz
(char username[30]) {
	char choice;
	float score;
	int count, r, r1,r2,r3,r4, i,n;
	
	mainhome:
	system("cls");
	system("color 3f");
	printf ("\t\t\t Quiz Game\n");
	printf("\t\t\t\t\n");
	printf("\t\t press S to start the game\n");
	printf("\t\t press R to reset the game\n");
	printf("\t\t press Q to quit the game\n");
	printf ("\t\t\t\t\n");
	choice=toupper(getch());
	if (choice=='R'){
	
	goto mainhome;
	}
	else if (choice== 'Q')
	exit(1);
	else if (choice=='S')
	{
	system("cls");
	printf("User with username: %s is playing\n",username);
	printf("\n\t\t\t\t  Welcome To The Game\n\n");
	printf("\t\t\t\tPress Y to start the game\n\n");
	printf("\t\t\tpress any other key to return to the main menu\n");
	 
	if (toupper(getch())=='Y'){
	goto home;
	}
	else
	{
	goto mainhome;
	system ("cls");
	}
	
	
	home:	
	system ("cls");
	printf("choose one of the following categories\n\n");
	printf("A.Science\t\tB.Sports\t\tC.Technology\t\tD.History\n\n");
	printf("press A for Science\n");
	printf("press B for Sports\n");
	printf("press C for Technology\n");
	printf("press D for History\n");
	choice=toupper(getch());
	if (choice=='A')
	{
	goto home1;
	}
	else if (choice=='B')
	{
	goto home2;	
	}
	else if (choice=='C')
	{
	goto home3;
	}
	else if (choice=='D')
	{
	goto home4;
	}
	
	
	
	
	home1:
	system ("cls");
	count=0;
	for(i=1; i<=15; i++)
	{ 
	
	r=i;
	switch(r)
	{
	case 1:
	 
    printf("\n\n\nAt what temperature are Farenheit and Celsius equal to each other?\n"); 
    printf("\n\nA.20.\t\tB.30\n\nC.-40\t\tD.-20"); 
    if (toupper(getch())=='C') 
    {printf("\n\nCorrect!!!");count++;
    getch(); 
    break;} 
    
    else 
    printf("\n\nWrong!!! The correct answer is C"); 
    getch();
    break;
    
    case 2:	
    system("cls");
    printf("\n\n\n\nWhat type of sugar does the brain need for energy?\n"); 
    printf("\n\nA.Fructose\t\tB.Glucose\n\nC.Sucrose\tD.Lactose"); 
    if (toupper(getch())=='B') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is B"); 
    getch(); 
    break;
    
    case 3:	
    system("cls");
    printf("\n\n\n\nHow many types of Kidney Stones are formed in Human Body?\n"); 
    printf("\n\nA.4\t\tB.2\n\nC.3\t\t\tD.1"); 
    if (toupper(getch())=='A') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is A"); 
    getch(); 
    break;
    
    case 4:
    system("cls");
    printf("\n\n\n\nWhich animal has the highest blood pressure?\n"); 
    printf("\n\nA.Elephant\t\tB.Tiger\n\nC.Giraffe\t\tD.Horse"); 
    if (toupper(getch())=='C') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is C"); 
    getch(); 
    break;
    
    case 5:
    system("cls");
    printf("\n\n\n\nWhich compound of mercury is used as antiseptic?\n"); 
    printf("\n\nA.Mercuric sulphide\t\tB.Mercuric oxide\n\nC.Mercuric chloride\t\tD.Mercuric iodide"); 
    if (toupper(getch())=='C') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is C"); 
    getch(); 
    break;	
    
    case 6:
    system("cls");
    printf("\n\n\n\nWhere on the human body would you find the papillae?\n"); 
    printf("\n\nA.Ears\t\tB.Tounge\n\nC.Nose\t\tD.fingers"); 
    if (toupper(getch())=='B') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is B"); 
    getch(); 
    break;	
    
    case 7:
    system("cls");
    printf("\n\n\n\nWhich frozen gas forms dry ice?\n"); 
    printf("\n\nA.Carbon monooxide\t\tB.Oxygen\n\nC.Nitrogern\t\tD.Carbon dioxide"); 
    if (toupper(getch())=='D') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is D"); 
    getch(); 
    break;	
    
   case 7:
    system("cls");
    printf("\n\n\n\Which quantum number gives the shape of the orbital?\n"); 
    printf("\n\nA.Magnetic \t\tB.Azimuthal\n\nC.\t\tD."); 
    if (toupper(getch())=='D') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is D"); 
    getch(); 
    break;	
	}
	}
	
	
      
	}
	
    home2:
    system("cls");
	count=0;
	for(i=1; i<=5; i++)
	{
	r1=i;
	switch(r1)
	{
	case 1:
	printf("What country is responsible for creating the Olympic Games?\n"); 
    printf("\n\nA.Greece\t\tB.USA\n\nC.Japan\t\t\tD.Germany"); 
    if (toupper(getch())=='A') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is A"); 
    getch(); 
    break;
    
    
    
    
    
    
    
    
    
    
    
	}	
	} 
	
	home3:
    system("cls");
    count=0;
    for(i=1; i<=5; i++)
    {
    r2=i;
    switch (r2)
    {
    case 1:
    
    printf("Which of these products is not made by the Apple Corporation?\n");
    printf("\n\nA.iPhone\t\tB.IMAX\n\nC.iMac\t\t\tD.iPod"); 
    if (toupper(getch())=='B') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is B"); 
    getch(); 
    break;
    
    
    
    
    
	}
    
	}
	
	home4:
	system("cls");
	count=0;
	for(i=1; i<=5; i++)
	{
	r3=i;
	switch(r3)
	{
	case 1:
	printf("Who was the first human to journey into space?\n"); 
    printf("\n\nA.Loren Acton\t\tB.Scott Altman\n\nC.Richard R. Arnold\tD.Yuri Gagarin"); 
    if (toupper(getch())=='D') 
    {printf("\n\nCorrect!!!");count++; 
    getch(); 
    break; } 
    else 
    printf("\n\nWrong!!! The correct answer is D"); 
    getch(); 
    break;
    
	}
	}
	

}
