// Ques 1. Write a program to sort the elements of a vector based on their frequency. If two numbers have the same frequency, sort them in ascending order.
// Input: vec = {4, 5, 6, 5, 4, 3}
// Output: {3, 6, 4, 4, 5, 5}

// Input: vec = {9, 9, 8, 7, 7, 7}
// Output: {8, 9, 9, 7, 7, 7}


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> sortByFrequency(const vector<int>& vec) {
    map<int, int> frequencyMap;
    for (int num : vec) {
        frequencyMap[num]++;
    }

    vector<pair<int, int>> freqVec(frequencyMap.begin(), frequencyMap.end());
    
    // Custom sort function to sort by frequency, then by value
    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    vector<int> result;
    for (size_t i = 0; i < freqVec.size(); ++i) {
        for (int j = 0; j < freqVec[i].second; ++j) {
            result.push_back(freqVec[i].first);
        }
    }

    return result;
}

int main() {
    vector<int> vec1 = {4, 5, 6, 5, 4, 3};
    vector<int> sortedVec1 = sortByFrequency(vec1);
    cout << "Output: ";
    for (int num : sortedVec1) {
        cout << num << " ";
    }
    cout << endl; // Output: {3, 6, 4, 4, 5, 5}

    vector<int> vec2 = {9, 9, 8, 7, 7, 7};
    vector<int> sortedVec2 = sortByFrequency(vec2);
    cout << "Output: ";
    for (int num : sortedVec2) {
        cout << num << " ";
    }
    cout << endl; // Output: {8, 9, 9, 7, 7, 7}

    return 0;
}


// Ques 2. Write a program to find the union and intersection of two arrays using set.
// Input: arr1 = {1, 2, 3}, arr2 = {2, 3, 4}
// Output: Union = {1, 2, 3, 4}, Intersection = {2, 3}

// Input: arr1 = {5, 6, 7}, arr2 = {8, 9}
// Output: Union = {5, 6, 7, 8, 9}, Intersection = {}


#include <iostream>
#include <set>
#include <vector>
#include <tuple> // For tuple
using namespace std;

pair<set<int>, set<int>> findUnionIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> set1(arr1.begin(), arr1.end());
    set<int> set2(arr2.begin(), arr2.end());
    
    set<int> unionSet(set1);
    unionSet.insert(set2.begin(), set2.end());

    set<int> intersectionSet;
    for (int num : set1) {
        if (set2.find(num) != set2.end()) {
            intersectionSet.insert(num);
        }
    }
    return make_pair(unionSet, intersectionSet);
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 3, 4};

    auto result1 = findUnionIntersection(arr1, arr2);
    set<int> unionSet1 = result1.first;
    set<int> intersectionSet1 = result1.second;

    cout << "Union: ";
    for (int num : unionSet1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionSet1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr3 = {5, 6, 7};
    vector<int> arr4 = {8, 9};

    auto result2 = findUnionIntersection(arr3, arr4);
    set<int> unionSet2 = result2.first;
    set<int> intersectionSet2 = result2.second;

    cout << "Union: ";
    for (int num : unionSet2) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionSet2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



// Ques 3. Given a map, sort it in descending order of values using an iterator and store the result in a vector>.
// Input: map = {{"Alice", 50}, {"Bob", 70}, {"Charlie", 60}}
// Output: {{"Bob", 70}, {"Charlie", 60}, {"Alice", 50}}

// Input: map = {{"X", 100}, {"Y", 80}}
// Output: {{"X", 100}, {"Y", 80}}


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<string, int>> sortMapByValue(const map<string, int>& inputMap) {
    vector<pair<string, int>> sortedVec(inputMap.begin(), inputMap.end());

    // Custom sort function to sort by value in descending order
    sort(sortedVec.begin(), sortedVec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    return sortedVec;
}

int main() {
    map<string, int> map1 = {{"Alice", 50}, {"Bob", 70}, {"Charlie", 60}};
    vector<pair<string, int>> sortedVec1 = sortMapByValue(map1);
    cout << "Sorted map: ";
    for (auto &entry : sortedVec1) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    map<string, int> map2 = {{"X", 100}, {"Y", 80}};
    vector<pair<string, int>> sortedVec2 = sortMapByValue(map2);
    cout << "Sorted map: ";
    for (auto &entry : sortedVec2) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    return 0;
}
