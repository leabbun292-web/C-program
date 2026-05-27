#include<stdio.h>
#include<string.h>


int main(){
	char name[50];
	float score1,score2,score3,score4,score5,score6,score7;
	float total,average;
	int id;
	char grade;
	char nameUN[50]="Roral University of Phnom penh";

	printf("Enter student name: ");
	fgets(name,sizeof(name),stdin);
    name[strlen(name) -1]= '\0';

	printf("Enter student ID: ");
	scanf("%d",&id);

do{
	printf("Please enter score1:(0-125): ");
	scanf("%f" , &score1);
}while(score1<=0||score1>=126);
do{
	printf("Please enter score2:(0-75): ");
	scanf("%f" , &score2);
}while(score2<=0||score2>=76);
do{
	printf("Please enter score3:(0-75): ");
	scanf("%f" , &score3);
}while(score3<=0||score3>=76);
do{
	printf("Please enter score4:(0-75): ");
	scanf("%f" , &score4);
}while(score4<=0||score4>=76);
do{
	printf("Please enter score5:(0-75): ");
	scanf("%f" , &score5);
}while(score5<=0||score5>=76);
do{
	printf("Please enter score6:(0-50): ");
	scanf("%f" , &score6);
}while(score6<=0||score6>=51);
do{
	printf("Please enter score7:(0-50): ");
	scanf("%f" , &score7);
}while(score7<=0||score7>=51);

total=score1+score2+score3+score4+score5+score6+score7;

average = total/7;


	if(average>=70){
		grade='A';
	}
	else if(average>=60){
		grade='B';
	}
	else if(average>=50){
		grade='C';
	}
	else if(average>=40){
		grade='D';
	}else if(average>=30){
		grade='E';
	}
	else if(average >=29){
			grade='F';
	}



	printf("\n---Student information---\n");
	printf("The university's:%s\n",nameUN);
	printf("Student's name: %s\n",name);
	printf("ID: %d\n",id);
	printf("Score of subject1: %.2f\n",score1);
	printf("Score of subject2: %.2f\n",score2);
	printf("Score of subject3: %.2f\n",score3);
	printf("GRADE: %c\n",grade);
	printf("THE TOTAL SCORE:%.2f\n",total);
	printf("AVERAGE OF SCORE:%.2f\n",average);
	
	return 0;
}
