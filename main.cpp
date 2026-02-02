#include <iostream>
#include <iomanip>
using namespace std;

int calculateSum(const int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += scores[i];
    return sum;
}

double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}

void addBonus(int scores[], int size, int bonus) {
    for (int i = 0; i < size; i++) scores[i] += bonus;
}

int findMinimum(const int* scores, int size) {
    int minScore = scores[0];
    for (int i = 1; i < size; i++) if (scores[i] < minScore) minScore = scores[i];
    return minScore;
}

int countHighPerformers(const int scores[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) if (scores[i] >= 80) count++;
    return count;
}

int main() {
    int ary[10] = {75, 88, 62, 95, 50, 82, 70, 91, 45, 78};
    int size = 10;

    cout << "Original scores: ";
    for (int i = 0; i < size; i++) cout << ary[i] << " ";
    cout << endl;

    int sum = calculateSum(ary, size);
    double avg = calculateAverage(sum, size);
    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(2) << avg << endl;

    addBonus(ary, size, 10);
    cout << "Scores after +10 bonus: ";
    for (int i = 0; i < size; i++) cout << ary[i] << " ";
    cout << endl;

    int minScore = findMinimum(ary, size);
    cout << "Minimum score: " << minScore << endl;

    int highPerformers = countHighPerformers(ary, size);
    cout << "High performers (>=80): " << highPerformers << endl;

    return 0;
}
