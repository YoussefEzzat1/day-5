# include <stdio.h>
#include <stdlib.h>
# include <string.h>
	struct Course {
		float credit_Hours ;
		float student_score; 
	};
	struct student {
		char courses_name [2][25];
		float GPA;
	};
void calculate_GPA(float score1, float score2, float credit_hours1, float credit_hours2){
	float GPA =((score1*credit_hours1)+(score2*credit_hours2)) / (credit_hours1 + credit_hours2);
	printf ("Your GPA is: %f\n",GPA);
}
 
 struct Course X[2];
 struct student Admin;
int main(){

	strcpy (Admin.courses_name[0],"Mathematics");
	strcpy (Admin.courses_name[1],"Programming");
	X[0].credit_Hours=3;
	X[1].credit_Hours=4;
	printf("please enter your Score in Mathematics (Out of 4): \n");
	scanf("%f",&X[0].student_score);
	printf("please enter your Score in Programming (Out of 4): \n");
	scanf("%f",&X[1].student_score);
	calculate_GPA(X[0].student_score, X[1].student_score, X[0].credit_Hours, X[1].credit_Hours );
system ("pause");
return 0;
}
