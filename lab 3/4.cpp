#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int l=0,jj=0,jj1=0;
struct student {
  int roll_no;
  string name;
  int age;
  string address;
};

void print(student s[], int n) {
  for (int a = 0; a < n; a++) {
    if (s[a].age == 14) {
            l=1;
            if(a==n-1){
      cout<< s[a].name;
            }
            else
            {
                cout<< s[a].name<<",";
            }
    }
  }
}
void print2(student s[], int n) {
     //cout<<"Name of student's having even roll number"<<endl;
  for (int a = 0; a < n; a++) {
    if (s[a].roll_no % 2 == 0) {
            jj=1;
            if(a==n-1){
      cout <<s[a].name;
            }
            else
            {
                cout <<s[a].name<<",";
            }

    }
  }
}

void print3(student s[], int n) {
  for (int a = 0; a < n; a++) {
    if (s[a].roll_no < 0) {
            jj1=1;
            if(a==n-1){
      cout << s[a].name<<",";
            }
            else
            {
                cout << s[a].name<<",";
            }
    }
  }
}

int main() {
  int n;
  cout<<"Enter the total student number:";
  cin >> n;
  struct student s[n];
  for (int a = 0; a < n; a++) {
    system("CLS");
    cout << "Enter the student roll number:";
    cin >> s[a].roll_no;
    cout << endl;
    cout << "Enter the student name:";
    cin >> s[a].name;
    // system("CLS");
    cout << endl;
    cout << "Enter the student age:";
    cin >> s[a].age;
    cout << endl;
    cout << "Enter the student address:";
    cin >> s[a].address;
    cout << endl;
  }
  system("CLS");
  cout<<"Students names having age 14:";
  print(s,n);
  if(l==0)
  {
      cout<<"NONE"<<endl;
  }
  cout<<endl<<endl;
  cout<<"Students having even roll number:";
  print2(s,n);
  if(jj==0)
  {
      cout<<"NONE";
  }
  cout<<endl<<endl;
  cout<<"Students having no roll number:";
  print3(s,n);
  if(jj1==0)
  {
      cout<<"NONE";
  }
}
