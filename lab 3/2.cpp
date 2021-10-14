#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct student {
  string name;
  int id;
  string address;
  float mark;
};

void bubble_sort(struct student s[], int n) {
  int a, b;
  student shafkat;

  for (a=0; a<n;a++) {
    for (b=1;b<n-a;b++) {
      if (s[b-1].mark > s[b].mark) {
        shafkat = s[b-1];
        s[b- 1]=s[b];
        s[b] = shafkat;
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
    cout << "Enter the student name:";
    cin >> s[a].name;
    // system("CLS");
    cout << endl;
    cout << "Enter the student id:";
    cin >> s[a].id;
    cout << endl;
    cout << "Enter the student address:";
    cin >> s[a].address;
    cout << endl;
    cout << "Enter the student mark:";
    cin >> s[a].mark;
    cout << endl;
  }
  system("CLS");
  bubble_sort(s, n);

    for (int a = 0; a < n; a++) {
    cout << a + 1 << endl;
    cout << "Name:" << s[a].name << endl;
    cout << "ID:" << s[a].id << endl;
    cout << "Address:" << s[a].address << endl;
    cout << "Mark:" << s[a].mark << endl;
    cout << endl << endl;
  }
}
