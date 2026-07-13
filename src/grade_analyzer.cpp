#include "grade_analyzer.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    return score1 + score2 + score3;
}

double calculateAverage(double total, int count) {
    if (count <= 0) return 0.0;
    return (total / count); // skanakala: added parentheses
}

char determineLetterGrade(double average) {
    if (average >= A_MINIMUM) return 'A';
    if (average >= B_MINIMUM) return 'B';
    if (average >= C_MINIMUM) return 'C';
    if (average >= D_MINIMUM) return 'D';
    return 'F';
}

bool isPassing(double average) {
    return average >= PASSING_MINIMUM;
}

bool isValidScore(double score) {
    return (score >= 0.0) && (score <= 100.0) ; // skanakala: added parentheses 
}

void printGradeReport(double total, double average, char letterGrade, bool passingStatus) {
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;
    cout << "Status: " << (passingStatus ? "Passing" : "Failing") << endl;
}
