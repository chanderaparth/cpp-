#include<iostream>
#include<string.h>
using namespace std;

class student
{
        int rollno, no_of_subjects;
        char stud_name[20];
        int *marks;
    public:
        student(int rno,char *name, int nos)       
        {

                strcpy(stud_name, name);
                no_of_subjects=nos;
                marks=new int[no_of_subjects];   
        }
        void accept();
        void display();
};
void student::accept()
{
        for(int i=0; i<no_of_subjects; i++)
        {
                cout<<"Enter Marks for Subject "<<i+1<<"  :  "<<endl;
                cin>>marks[i];
        }
}
void student::display()
{
        cout<<"\n\n Name                :  "<<stud_name;
        for(int i=0; i<no_of_subjects; i++)
        {
                cout<<"Marks of Subject "<<i+1<<"  :  "<<marks[i]<<endl;
        }
}
int main()
{
        int rollno, no_of_subjects;
        char stud_name[20];
        int cnt, i;
        cout<<"\n Enter No. of Students You Want? : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
                cout<<"Enter Roll No           :   "<<endl;
                cin>>rollno;
                cout<<"Enter Name              :   "<<endl;
                cin>>stud_name;
                cout<<"Enter No. of Subjects   :   "<<endl;
                cin>>no_of_subjects;
                student st(rollno, stud_name, no_of_subjects);
                st.accept();
                st.display();
        }
        return 0;
}