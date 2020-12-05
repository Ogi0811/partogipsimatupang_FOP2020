#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  ifstream input;
  input.open("lab11_employee.txt");

  if(input.fail()){
    cout <<" ERROR; File could not open."<<endl;
    exit(1);
  }

  const int array_size = 8;

  string name[array_size];
  double salary[array_size];

  int i=0;
  double avg_salary=0;
  string line;

  while(getline(input, line)) {
    int nameEndPos = line.find('$')-1;
    name[i] = line.substr(0, nameEndPos);
    int salaryStartPos = line.find('$')+1;
    int salaryEndPos = line.find('\n');
    salary[i] = stod(line.substr(salaryStartPos,salaryEndPos));
    ++i;
  }

  for(int i=0; i< array_size; i++) {
    cout << name[i] <<" = "<<salary[i] <<endl;
  }
  cout <<endl;

//To find lowest
string minname = name[0];
double min = salary[0];
for(int i=0; i<array_size; i++) {
  if(salary[i]<min){
    min=salary[i];
    minname=name[i];
  }
}

//To find Highest
 string maxname = name[0];
 double max = salary[0];
 for(int i=0; i<array_size; i++) {
  if(salary[i]>max){
    max=salary[i];
    maxname=name[i];
  }
 }

//Salaray average
int sum = 0;
double salary_average;
for(int i=0; i<array_size; i++){
  sum+=salary[i];
}
salary_average = sum/array_size;

//To know salary above average 
for(int i=0; i<array_size; i++){
  if(salary[i]>salary_average){
    cout <<"Salary above average is " << name[i]<<endl;
  }
}
cout <<endl;

//To know salary under average
for(int i=0; i<array_size; i++){
  if(salary[i]<salary_average){
    cout <<"Salary under average is " << name[i]<<endl;
  }
}
cout <<endl;

cout << "Lowest is " << minname <<" " <<min <<endl;
cout << "Highest is " << maxname <<" " <<max <<endl;

  input.close();
  return 0;

}