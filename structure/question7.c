// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
struct marks {
    int roll_no;
    char name[10];
    float chem_marks;
    float maths_marks;
    float phy_marks;
}m[2];
void main() {
    int i;
    for(int i=0;i<2;i++) {
        printf("enter student details\n");
        scanf("%d %f %f %f",&m[i].roll_no,&m[i].chem_marks,&m[i].maths_marks,&m[i].phy_marks);
        fflush(stdin);
        gets(m[i].name);
    }
    for(int i=0;i<2;i++) {
        printf("%d %s %f %f %f\n",m[i].roll_no,m[i].name,m[i].chem_marks,m[i].maths_marks,m[i].phy_marks);
        float percentage=((m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300)*100;
        printf("percentage is %f\n",percentage);
}
}