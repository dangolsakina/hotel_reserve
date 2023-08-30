#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>
//#include<graphics.h>

int main()
{
	FILE *p;
	int q1,q2,q3;
	char add;
	int choice,bf,l,d;
	p=fopen("D:\\reservation.txt","a+");
	if(p=NULL){
		printf("\n error! File not found");
		exit(0);
	}
//	printf("               KATHMANDU HOTEL");
	printf("\n                    Food Menu");
	printf("\n         *******************************");
	printf("\n\n\t1.Breakfast");
	printf("\n\t2.Lunch");
	printf("\n\t3.Dinner");
	flag:
    printf("\n\tEnter your choice: ");
    scanf("%d",&choice);
    if(choice>3||choice<=0)
    {
    	printf("\n\tPlease enter valid number between 1-3");
    	goto flag;
	}
	switch(choice)
	{
		case 1:
		    //settextsty
			//outtext(150,150,"KATHMANDU HOTEL");
			printf("\n                            KATHMANDU HOTEL ");
			printf("\n\n                             Breakfast");
		    printf("\n                        ********************");
			printf("\n\n\t1.PLAIN PANCAKES............................RS 100");
			printf("\n\t2.TOMATO SOUP.................................RS 150");
			printf("\n\t3.SANDWICH....................................RS 200");
			printf("\n\t4.BOILED EGG..................................RS 100");
			printf("\n\t5.MIX VEG SOUP................................RS 110");
			printf("\n\t6.TEA/COFEE...................................RS 130");
			printf("\n\t7.FRUIT SALAD.................................RS 250");
			printf("\n\t8.BREAD JAM...................................RS 70");
			printf("\n\t9.SWEET CORN..................................RS140");
			printf("\n\t10.SAUSAGE....................................RS100");
			fast:
			printf("\n\n\tEnter id of the food you want to have for breakfast: ");
			scanf("%d",&bf);
		/*	printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q1);
		//	scanf("%d",&d);
			
			fprintf(p,"%d",bf);
			fprintf(p,"%d",q1);*/
			if(bf<=0||bf>10)
			{
				printf("\n\tPlease enter between 1-10");
				goto fast;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q1);
		//	scanf("%d",&d);
			
			fprintf(p,"%d",bf);
			fprintf(p,"%d",q1);
			fflush(stdin);
			printf("\n\t Do you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto fast;
			}
			else
			{
				exit (0);
			}
			
			break;
		case 2:
		    printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Lunch");
			printf("\n                           ***********************");
			printf("\n\t11.SANDWICHES OR WRAPS.............................RS200");
		    printf("\n\t12.KATHI ROLLS.....................................RS200");
		    printf("\n\t13.MOONG DAL CHILLA................................RS200");
		    printf("\n\t14.POHA TIKKA......................................RS200");
		    printf("\n\t15.BIRYANI.........................................RS200");
		    printf("\n\t16.STUFFFED PARATHAS...............................RS200");
		    printf("\n\t17.SIJI PANCAKE....................................RS200");
		    printf("\n\t18.VEG BURGER......................................RS200");
		    printf("\n\t19.MUFFINS.........................................RS200");
		    printf("\n\t20.PIZZA...........................................RS200");
		    lun:
			printf("\n\n\tEnter id of the food you want to have for breakfast: ");
			scanf("%d",&l);
		/*	printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q2);
			
			fprintf(p,"%d",l);
			fprintf(p,"%d",q2);*/
            if(l<=10||l>20)
			{
				printf("\n\tPlease enter between 11-20");
				goto lun;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q2);
			
			fprintf(p,"%d",l);
			fprintf(p,"%d",q2);
			fflush(stdin);
			printf("\n\tDo you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto lun;
			}
			else
			{
				exit(0);
			}
			break;
		    
		case 3:
			 printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Dinner");
			printf("\n                           ***********************");
		    printf("\n\t21.PULAU.........................................RS200");
		    printf("\n\t22.DAL MAKHANI...................................RS200");
		    printf("\n\t23.RAJMA PANEER CURRY............................RS200");
		    printf("\n\t24.CHICKEN RICE..................................RS200");
		    printf("\n\t25.THAKALI KHANA VEG.............................RS200");
		    printf("\n\t26.THAKALI NON-VEG...............................RS200");
		    printf("\n\t27.NAN ROTI WITH CURRY...........................RS200");
		    printf("\n\t28.PASTA.........................................RS200");
		    printf("\n\t29.MIX FRUIT JUICE...............................RS200");
		    printf("\n\t30.PANEER ROTI...................................RS200");
		    din:
			printf("\n\n\tEnter id of the food you want to have for breakfast: ");
			scanf("%d",&d);
			/*printf("\n\n\tEnte quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q3);			
			fprintf(p,"%d",d);
			fprintf(p,"%d",q3);*/
			if(d<=20||d>30)
			{
				printf("\n\tPlease enter between 21-30");
				goto din;
			}
			printf("\n\n\tEnte quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&q3);			
			fprintf(p,"%d",d);
			fprintf(p,"%d",q3);
			fflush(stdin);
			printf("\n\tDo you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto din;
			}
			else
			{
				exit(0);
			}
		    break;
				
	}

return 0;

}
