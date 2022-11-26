#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    cout << a << " + "<<b<<" = "<<a+b<<"\n";
    cout << a << " - "<<b<<" = "<<a-b<<"\n";
    if(a==INT_MAX && a!=1){
    cout << "OVERFLOW!! ON *\n";
    }else {
    cout << a << " * "<<b<<" = "<<a*b<<"\n";
    }
    if(b==0){
    cout << "Cant Divide By Zero";
    return 0;
    }
    else 
    cout << a << " / "<<b<<" = "<<(double)a/b<<"\n";

    
    int t;cin>>t;
    int tm = t;
    double sum = 0;
    while (t--)
    {
        string std_name;int id;double grade;
        cout << "What Is Student 1 name: ";cin>>std_name;
        cout << "His Id: ";cin>>id;
        cout << "His Math Exam Grade: ";cin>>grade;
        sum+=grade;
        cout << "Students Grades In Math\n";
        cout << std_name << "(id "<< id << ") got : "<<grade<<"\n";
    }
    cout << "average is "<<sum/tm << "\n";
    
    
    int sumOdd = 0;
    int sumEven = 0;
    int n;
    for (int i = 1; i <= 8; i++)
    {
        cin >> n;
        if(i%2==0)
        sumEven+=n;
        else 
        sumOdd+=n;
    }
    cout << sumEven << " " << sumOdd<<"\n";
    
    int a,b,t;
    cin >> a>>b;
    t = a;
    a = b;
    b= t;
    cout << a << " " << b;

    int a,b,c,t;
    cin>>a>>b>>c;
    t = a;
    a = b;
    b = c;
    c =t;
    cout << a <<" "<< b << " " <<c;
    int a,b;cin>>a>>b;
    int eq1 = a * a;
    int eq_1 = 2*a+1;

    int is1 = (b+1)/2;
    int is_1 = 1 - is1;

    cout << is1 * eq1 + is_1 * eq_1;
    int n;cin>>n;
    cout << n*(n+1)/2 << "\n";
    
    
    
    
    
    return 0;
}


