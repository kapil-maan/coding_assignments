// Ques 1. Create a function that takes a string and returns a map representing the frequency of each character. Handle uppercase and lowercase letters as different characters.
// Input: "HelloWorld"
// Output: {'H': 1, 'e': 1, 'l': 3, 'o': 2, 'W': 1, 'r': 1, 'd': 1}

// Input: "C++STL"
// Output: {'C': 1, '+': 2, 'S': 1, 'T': 1, 'L': 1}


#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> characterFrequency(const string& str) {
    map<char, int> frequencyMap;
    for (char c : str) {
        frequencyMap[c]++;
    }
    return frequencyMap;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin,str);

    map<char, int> freqMap = characterFrequency(str);

    cout << "Character frequencies:" << endl;
    cout<<"{";
    for (const auto& pair : freqMap) {
        cout <<"'"<< pair.first <<"' "<< ": " << pair.second <<", " ;
    }
    cout<<"}";

    return 0;
}


// Ques 2. Write a program that takes a map> where the key is a student's name and the value is their scores. Calculate the average score for each student and print the result.
// Input: {{"Alice", {80, 90, 100}}, {"Bob", {70, 75, 80}}, {"Charlie", {60}}}
// Output: {"Alice": 90, "Bob": 75, "Charlie": 60}


#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

map<string, int> calculateAverages(const map<string, vector<int>>& studentScores) {
    map<string, int> averageScores;
    for (const auto& pair : studentScores) {
        const string& name = pair.first;
        const vector<int>& scores = pair.second;

        int total = 0;
        for (int score : scores) {
            total += score;
        }
        int average = scores.empty() ? 0 : total / scores.size();
        averageScores[name] = average;
    }
    return averageScores;
}

int main() {
    int n, m;
    cout << "Enter the number of students: ";
    cin >> n;

    map<string, vector<int>> studentScores;
    for (int i = 0; i < n; ++i) {
        string name;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the number of scores for " << name << ": ";
        cin >> m;

        vector<int> scores(m);
        cout << "Enter the scores: ";
        for (int j = 0; j < m; ++j) {
            cin >> scores[j];
        }
        studentScores[name] = scores;
    }

    map<string, int> averages = calculateAverages(studentScores);

    cout << "Average scores:" << endl;
    for (const auto& pair : averages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}



// Ques 3. Write a function to merge two set objects into one, where the result contains all unique elements in sorted order.
// Input: set1 = {1, 3, 5}, set2 = {2, 3, 4, 6}
// Output: {1, 2, 3, 4, 5, 6}

// Input: set1 = {7, 8}, set2 = {8, 9, 10}
// Output: {7, 8, 9, 10}


#include <iostream>
#include <set>
using namespace std;

set<int> mergeSets(const set<int>& set1, const set<int>& set2) {
    set<int> resultSet;
    resultSet.insert(set1.begin(), set1.end());
    resultSet.insert(set2.begin(), set2.end());
    return resultSet;
}

int main() {
    int n, m;
    cout << "Enter the number of elements in set1: ";
    cin >> n;
    set<int> set1;
    cout << "Enter the elements of set1: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        set1.insert(element);
    }

    cout << "Enter the number of elements in set2: ";
    cin >> m;
    set<int> set2;
    cout << "Enter the elements of set2: ";
    for (int i = 0; i < m; ++i) {
        int element;
        cin >> element;
        set2.insert(element);
    }

    set<int> resultSet = mergeSets(set1, set2);

    cout << "Merged set: ";
    for (int elem : resultSet) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
