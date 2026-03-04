#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    float gate_score;

    cout << "--- BARC 2026 Interview Probability Calculator ---" << endl;
    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter your expected GATE Score (out of 1000): ";
    cin >> gate_score;

    cout << "\nHello " << name << "," << endl;

    if (gate_score >= 800) {
        cout << "Probability: 99%. Start practicing for the whiteboard interview!" << endl;
    } else if (gate_score >= 700) {
        cout << "Probability: 75%. High chance of shortlisting. Focus on core subjects." << endl;
    } else {
        cout << "Probability: Unknown. Consider appearing for the BARC Online Exam as well!" << endl;
    }

    return 0;
}
