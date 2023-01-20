#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//main modules
int self();//completed
int signin();//completed
int problem();//all most complete
int login();//completed

//sub modules
int read();//only ogin completed
int home();//completed
int contact();//completed

//sturcture for login
struct login
{
	char n[25];
	char e[25];
	char p[10];
	char m[15];
	char add[30];
	char gen[6];
}a;

//structure for problem
struct prob
{
	char p[50];
	int t;
}b;


//start programming


int self()
{
	
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n                                 		      Ganpat University");
    printf("\n                         			Voice Enabled Management System");
    printf("\n                                               	      For Academic Year  ");
    printf("\n                     				   	  2022-2023      ");
    printf("\n\n                        		           	  Made by    ");
    printf("\n                       			  	     Aanshi K. Patel ");
    printf("\n                             		      	    	   Sem-1        ");
    printf("\n                      	 		             	  ESFP-I                               ");
    printf("\n////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
}
int signin()
{
	char a[5];
	int r,i,count=1;
	printf("\n\n                                                        sign-in Form\n");
	for(i=0;i<3;i++)
	{
		printf("\nUser ID:\t");
    	scanf("%s",&a);
    	printf("\nPassword:\t");
    	scanf("%d",&r);
    	if(r==76034)
		{
    		system("cls");
    		self();
    		home();
		}
		count++;
	}  
}   


int home()
{
	int t;
	printf("\n\n\n                                                          INDEX");
	printf("\n\nPress <1> for login\n");
	printf("\nPress <2> for problem\n");
	printf("\nPress <3> for reading entered detials\n");
	printf("\nPress <4> to contact us\n");
	printf("\nPress <5> for  Exit\n");
	scanf("%d",&t);
	switch(t)
	{
		case 1:
			system("cls");
			login();
			break;
		case 2:
			system("cls");
			problem();
			break;
		case 3:
			system("cls");
			read();
			break;
		case 4:
			system("cls");
			contact();
			break;
		
	}
	if(t==5){
		exit(0);
	}
}



int contact()
{
	self();
	printf("\n\n                                                        CONTACT US\n\n");
    printf("Phone number: 9879633351,7984548502\n");
    printf("Email: prob4545@gmail.com\n");
    home();
}


int login()
{
	
	printf("                                                 	  Personal Information\n\n ");
	printf("\nEnter your Name:\t");
	scanf("%s",&a.n);
	printf("\nEnter Your Email:\t");
	scanf("%s",&a.e);
	printf("\nEnter Your Password:\t");
	scanf("%s",&a.p);
	printf("\nEnter Your Mobile No.:\t");
	scanf("%s",&a.m);
	printf("\nEnter Your Address:\t");
	scanf("%s",&a.add);
	printf("\nEnter Your Gender:\t");
	scanf("%s",&a.gen);
	home();
}


int read()
{
	printf("\nEnter your Name:\t%s\n",a.n);
	printf("\nEnter Your Email:\t%s\n",a.e);
	printf("\nEnter Your Password:\t%s\n",a.p);
	printf("\nEnter Your Mobile No.:\t%d\n",a.m);
	printf("\nEnter Your Address:\t%s\n",a.add);
	printf("\nEnter Your Gender:\t%s\n",a.gen);
	printf("\nEnter Your Problem Here:\t%s\n",b.p);
	printf("\nYour Selected Problem:\t%d\n",b.t);
	home();
}


int problem()
{
	printf("\nPress <1> for writing problem\n");
	printf("\nPress <2> for selecting problem\n");
	int c;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\nEnter Your Problem Here:\t");
			scanf("%s",&b.p);
				home();
			
		case 2:
			printf("\nSelect Your Problem From Below");
			printf("\n\nEnter the number of the Problem\n");
			printf("\n\n1.\tHealth Crisis");
			printf("\n2.\tWorkplace Issues");
			printf("\n3.\tEmptiness and Boredom");
			printf("\n4.\tFriendship Issues");
			printf("\n5.\tFailure");
			printf("\n6.\tFinancial Crisis");
			printf("\n7.\tCareer Pressure");
			printf("\n8.\tUnfair Treatment");
			printf("\n9.\tInner Peace");
			printf("\n10.\tMental Health Issues");
			printf("\n11.\tRelationship, Marriage, and Family");
			printf("\n12.\tSafety and Security");
			printf("\n13.\tHaunting Past\n");
			scanf("%d",&b.t);
			switch(b.t)
			{
				case 1:
					printf("\n1.\tHealth Crisis");
					break;
				case 2:
					printf("\n2.\tWorkplace Issues");
					break;
				case 3:
					printf("\n3.\tEmptiness and Boredom");
					break;
				case 4:
					printf("\n4.\tFriendship Issues");
					break;
				case 5:
					printf("\n5.\tFailure");
					break;
				case 6:
					printf("\n6.\tFinancial Crisis");
					break;
				case 7:
					printf("\n7.\tCareer Pressure");
					break;
				case 8:
					printf("\n8.\tUnfair Treatment");
					break;
				case 9:
					printf("\n9.\tInner Peace");
					break;
				case 10:
					printf("\n10.\tMental Health Issues");
					break;
				case 11:
					printf("\n11.\tRelationship, Marriage, and Family");
					break;
				case 12:
					printf("\n12.\tSafety and Security");
					break;
				case 13:
					printf("\n13.\tHaunting Past\n");
					break;
			}
			home();
			
			
	}

	
}


int main()
{
	self();
	signin();
	
	
	return 0;
}

