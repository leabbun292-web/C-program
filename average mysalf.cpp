#include<stdio.h>


int main(){
	float score1,score2,score3,score4,score5,score6,score7;
	float total,average;
	int id;
	char grade;
	char name[50];

	printf("Enter the student's name:");
	fget(name,sizeof(name),stdin);
	name[strlen(name) -1]='\0';
	printf("score1(0-125):");scanf("%f",&score1);
    printf("score2(0-75):");scanf("%f",&score2);
    printf("score3(0-75):");scanf("%f",&score3);
    printf("score4(0-75):");scanf("%f",&score4);
    printf("score5(0-75):");scanf("%f",&score5);
    printf("score6(0-50):");scanf("%f",&score6);
    printf("score7(0-50):");scanf("%f",&score7);
    
    total=score1+score2+score3+score4+score5+score6+score7;
    average=total/7;
    
    
    if(average>=75.00){
    	printf("Pass the exam\n");
    	printf("====A+====\n");
    	
	}
	else if (average>=70.00){
		printf("A");
	} 
	else if(average>=68.00){
		printf("B");
	}
	else if (average>=59.00){
		printf("C");
		
	}
	else if(average>=47.00){
		printf("D");
	}
	else if(average>=37.50){
		printf("E");
	}

	else{
		printf("Fail the exam\n");
		printf("f");
	}
printf("==========Result=========\n");
    printf("score1=%.2f\n",score1);
    printf("score2=%.2f\n",score2);
    printf("score3=%.2f\n",score3);
    printf("score4=%.2f\n",score4);
    printf("score5=%.2f\n",score5);
    printf("score6=%.2f\n",score6);
    printf("score7=%.2f\n",score7);
    printf("==========================\n");
    printf("Total(Full score 525):%.2f\n",total);
    printf("Average(Full 75):%.2f\n",average);
    printf("==============================\n");
	return 0;
}
