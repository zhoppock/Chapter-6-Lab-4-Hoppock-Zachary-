// Hoppock, Zachary
// gradeAverage.cpp
// November 21, 2020
// Input three grades for a student and calculate the average of those grades to give a letter grade
// Version #1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string grade_option = "Y";
  const int SCORES = 3;
  while (grade_option == "Y")
  {
    string name = "";
    string first_name;
    string last_name;
    cout << "Input student's first name: ";
    cin >> first_name;
    cout << "Input student's last name: ";
    cin >> last_name;
    name = first_name + " " + last_name;

    double student_scores[SCORES];
    for (int i = 0; i < SCORES; i++)
    {
      cout << "Enter score #" << i+1 << " for " << name << ": ";
      cin >> student_scores[i];
    }

    double sum = 0;
    double average = 0;
    for (int i = 0; i < SCORES; i++)
    {
      sum = sum + student_scores[i];
    }
    average = sum / SCORES;
    string grade;
    if (average >= 90 && average <= 100)
      grade = "A";
    if (average >= 80 && average < 90)
      grade = "B";
    if (average >= 70 && average < 80)
      grade = "C";
    if (average >= 60 && average < 70)
      grade = "D";
    if (average < 60)
      grade = "F";
    cout << name << " has an average of " << fixed << setprecision(2) << average << " which gives the letter grade of " << grade << endl;

    cout << endl << "Input another student's grades? (Y/N): ";
    cin >> grade_option;
  }
  return 0;
}