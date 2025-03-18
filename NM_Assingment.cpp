#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);


void print_eqa(string e , double a, double b){

    cout << "The Equation is : " + e << endl;
    cout << "With a range in [ " << a << " , " << b << " ]" << endl;
}

double find_f(double a){

    string equation = "3x-cosx-1";

    double x = (3*a) - cos(a) -1;

    return x;

}

void table(double a , double fa , double b , double fb , double c , double fc , int x){

    cout<< "Iteration : " << x << endl;
    cout << "For a : " << a << "\tf(a) : " << fa << endl;
    cout << "For b : " << b << "\tf(b) : " << fb << endl;
    cout << "For c : " << c << "\tf(c) : " << fc << endl;

    for(int i=0; i<30 ; i++) cout <<"-";

    cout << endl <<endl;


    
}
int main()
{
    string equation = "3x-cosx-1";

    double range_a = 0;
    double range_b = 1;

    print_eqa(equation,range_a,range_b);

    stack<double>a;
    a.push(range_a);
    stack<double>b;
    b.push(range_b);
    stack<double>sc;

    int x = 1;


    while (x <26)
    {
         double fa = find_f(a.top());
         double fb = find_f(b.top());

         double c = (a.top() + b.top()) / 2;
         double fc = find_f(c);

        table(a.top() , fa , b.top() , fb , c , fc , x);

        if(!sc.empty() ){

            double prev = int(sc.top() * 1000);
            double now = int(c * 1000);

            if( prev == now ){
            cout<<endl;
            cout << "Root: " << fixed << setprecision(4) << c << endl;
            return 0;
            }
            
        }
        sc.push(c);

        if(fc < 0){
            a.push(c);
        }
        else
        {
            b.push(c);
        }

        x++;

    }

   cout << "Root: " << fixed << setprecision(4) << sc.top() << endl;
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  13-December-2024  19:37:13
*/ 
 