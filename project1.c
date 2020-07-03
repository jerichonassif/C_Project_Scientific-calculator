#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

void printYourOpertor(){
	printf("1 : + \n");
	printf("2 : - \n");
	printf("3 : * \n");
	printf("4 : / \n");
	printf("5 : sin() \n");
	printf("6 : cos() \n");
	printf("7 : tan() \n");
	printf("8 : pow() \n");
	printf("9 : sqrt() \n");
}

void SUM();
void SUB();
void MUL();
void DIV();
void SIN();
void COS();
void TAN();
void POW();
void SQRT();

int main(int argc, char **argv)
{	
    
    int y;
    printf("choose a number or enter -1 to exit the program\n");
    scanf("%d", &y);

	while(y != -1){
		printYourOpertor();
	    int Operator;
	    scanf("%d",&Operator);
	    
	    switch(Operator){
	    	case 1:
	    		SUM();
	    		break;
	    	case 2:
	    	    SUB();
	    		break;
	    	case 3:
	    		MUL();
	    		break;
	    	case 4:
	    		DIV();
	    		break;
	    	case 5:
	    		SIN();
	    		break;
	    	case 6:
	    		COS();
	    		break;
	    	case 7:
	    		TAN();
	    		break;
	    	case 8:
	    		POW();
	    		break;
	    	case 9:
	    		SQRT();
	    		break;
	    }
	    printf("choose a number or enter -1 to exit the program\n");
    	scanf("%d", &y);
	}
	
   
	return 0;
}

void SUM(){
	int x;
	int y; 
	printf("enter tow number for sum\n");
	scanf("%d %d", &x, &y);
	printf("%d + %d = %d\n", x, y, x+y);
}
void SUB(){
	int x;
	int y; 
	printf("enter tow number for sub\n");
	scanf("%d %d", &x, &y);
	printf("%d - %d = %d\n", x, y, x-y);
}
void MUL(){
	int x;
	int y; 
	printf("enter tow number for mul\n");
	scanf("%d %d", &x, &y);
	printf("%d * %d = %d\n", x, y, x*y);
}
void DIV(){
	int x;
	int y; 
	printf("enter tow number for div\n");
	scanf("%d %d", &x, &y);
	printf("%d / %d = %d\n", x, y, x/y);
}
void SIN(){
	
	printf("enter tow number for sin\n");
	int x; 
	scanf("%f", &x);
	printf("sin x = %.1f\n",sin(x * 3.14 /180));
}
void COS(){
	printf("enter tow number for sin\n");
	int x; 
	scanf("%f", &x);
	printf("sin x = %.1f\n",cos(x * 3.14 /180));
}
void TAN(){
	int x; 
	printf("enter tow number for sin\n");
	scanf("%f", &x);
	printf("sin x = %.1f\n",tan(x * 3.14 /180));
}
void POW(){
	
}
void SQRT(){
	
}