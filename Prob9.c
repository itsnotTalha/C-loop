/******************************************* 
Write a program (WAP) that will find the grade of N students. For each student, it will
take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class
test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the
tables shown below, the program will output his grade.
Attendance (A) 5%
Assignments (HW) 10%
Class Tests (CT) 15%
Midterm (MT) 30%
Final (TF) 40%
Marks Letter Grade Marks Letter Grade Marks Letter Grade
90-100 A    70-73 C+    Less than 55 F
86-89 A-    66-69 C
82-85 B+    62-65 C              
78-81 B     58-61 D+
74-77 B-    55-57 D 
********************************************/
#include<stdio.h>
int main(){
   int N;
   float att,ass,ct,mid,final,avg;
   printf("Number of student: ");
   scanf("%d",&N);
   for(int i=0;i<N;i++){
    printf("Mark for student #%d\n",i+1);
    printf("Attendance: ");
    scanf("%f",&att);
    printf("Assignment: ");
    scanf("%f",&ass);
    printf("Class test: ");
    scanf("%f",&ct);
    printf("Mid term: ");
    scanf("%f",&mid);
    printf("Final: ");
    scanf("%f",&final);
    avg=(att / 5.0 * 0.05 * 100) +
        (ass / 10.0 * 0.10 * 100) +
        (ct / 15.0 * 0.15 * 100) +
        (mid / 50.0 * 0.30 * 100) +
        (final / 100.0 * 0.40 * 100);

    printf("Student %d: ",i+1);

    if (avg >= 90) printf("A");
    else if (avg >= 86) printf("A-");
    else if (avg >= 82) printf("B+");
    else if (avg >= 78) printf("B");
    else if (avg >= 74) printf("B-");
    else if (avg >= 70) printf("C+");
    else if (avg >= 66) printf("C");
    else if (avg >= 62) printf("C-");
    else if (avg >= 58) printf("D+");
    else if (avg >= 55) printf("D");
    else printf("F");
    puts("");
   }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/