#include <iostream>
#include <string>
using namespace std;

int main() {
  struct student_struct {
    string name;
    float eng;
    float math;
    float pe;
    float avg;

    void find_avg() {
      this->avg = (eng + math + pe) / 3;
    }
    void input() { 
      cin >> this->name >> this->eng >> this->math >> this->pe; }
    void output() {
      cout << name <<" "<<avg << " ";
    }
  };
  int n;
  cin>>n;
  student_struct a[n];
  float m_avg = 0;
  for (int i = 0; i < n; i++) {
    a[i].input();
    a[i].find_avg();

    if (m_avg < a[i].avg) {
      m_avg = a[i].avg;
    }
  }
  cout << m_avg << endl;

  for (int i = 0; i < n; i++) {
    a[i].output();
    float differ = m_avg - a[i].avg;
    cout << differ<<endl;
  }
}