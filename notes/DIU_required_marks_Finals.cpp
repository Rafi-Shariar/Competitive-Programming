#include<bits/stdc++.h>
using namespace std;
int main(){

    printf("Find how many Numbers you will need in the Final Exam\n");
    printf("To achive your desired CGPA in that Course !\n");
    printf("Created by RAFI SHARIAR\n\n");


    int n;
    cout<<"Number of courses : ";
    cin>>n;
    cout<<endl;
   


    for (int i = 1; i <= n; i++)
    {
         cin.ignore();
        double marks=0.0;


        cout<<"Name of the course : ";
        string s; getline(cin,s);
        cout<<endl;


        cout<<"Marks distribution : "<<endl;
        cout<<"Attendance : 7 ,  Assingment : 5 , Presentation : 8  , Quize : 15  ,  Midterm : 25"<<endl<<endl;


        cout<<"Class Attendance : ";
        double at; cin>>at;
        marks+=at;
        cout<<endl;


        cout<<"Assingment : ";
        double ass; cin>>ass;
        marks += ass;
        cout<<endl;


        cout<<"Presentation : ";
        double pre; cin>>pre;
        marks += pre;
        cout<<endl;


        cout<<"Quiz avarage : ";
        double quiz; cin>>quiz;
        marks += quiz;
        cout<<endl;


        cout<<"Midterm Exam : ";
        double mid; cin>>mid;
        marks += mid;
        cout<<endl<<endl;


        cout<<"MINIMUM MARKS REQUIRED AT FINAL for "<<s<<" "<<endl<<endl;


        double aplus = 82.00 - marks;
        if(aplus<0) aplus = 0.0;
        printf("Minimum requirment for CGPA 4.00 ---> %.1lf\n",aplus);


         double a = 77.00 - marks;
        if(a<0) a = 0.0;
        printf("Minimum requirment for CGPA 3.75 ---> %.1lf\n",a);




         double amin = 72.00 - marks;
        if(amin<0) amin = 0.0;
        printf("Minimum requirment for CGPA 3.50 ---> %.1lf\n",amin);




         double bplus = 67.00 - marks;
        if(bplus<0) bplus = 0.0;
        printf("Minimum requirment for CGPA 3.25 ---> %.1lf\n",bplus);




         double b = 62.00 - marks;
        if(b<0) b = 0.0;
        printf("Minimum requirment for CGPA 3.00 ---> %.1lf\n",b);




         double bmin = 57.00 - marks;
        if(bmin<0) bmin = 0.0;
        printf("Minimum requirment for CGPA 2.75 ---> %.1lf\n",bmin);




        double c = 52.00 - marks;
        if(c<0) c = 0.0;
        printf("Minimum requirment for CGPA 2.50 ---> %.1lf\n",c);


         cout<<"\nBEST OF LUCK :)"<<endl;


        cout<<endl<<endl;
    }


   
   
 return 0;


 //rafi shariar


}

