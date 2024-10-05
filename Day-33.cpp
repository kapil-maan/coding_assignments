// Ques 1. Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer. Note :- Take all the required input from user.



// method by heap map & vector

#include <iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

    string frequencySort(string s){
        unordered_map<char,int> freq;

        for(char c:s){
            freq[c]++;
        }

        vector<pair<int,char>> arr;

        for(auto it:freq){
            arr.push_back({it.second,it.first}) ;
        }

        sort(arr.rbegin(),arr.rend()) ;

        string ans;

        for(auto it:arr){
            ans+= string(it.first,it.second) ;
        }

        return ans;
    }

int main(){
    cout<<"Enter the string :- ";
    string s;
    cin>>s;

    string ans = frequencySort(s);

    cout<<"Decreasing order sorted string based on frequency :- "<<ans <<endl;;
     
    return 0;
}




// metjod 2:- by using multimap


#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

string frequencySort(string s){
    unordered_map<char,int> freq;

    for(char c:s){
        freq[c]++;
    }

    multimap<int,char,greater<int>> sortedMap ;

    for(auto it: freq){
        sortedMap.insert({it.second,it.first});
    }

    string ans;

    for(auto it:sortedMap){
        ans+= string(it.first,it.second);
    }

    return ans;
}

int main(){
    cout<<"Enter the string :- ";
    string s;
    cin>>s;

    string ans = frequencySort(s);

    cout<<"Decreasing order sorted string based on frequency :- "<<ans <<endl;;
     
    return 0;
}



// method 3:- by using buckets

#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

string frequencySort(string s){
    unordered_map<char,int> freq;

    for(char c:s){
        freq[c]++;
    }

    int maxFreq=0;
    for(auto it:freq){
        if(maxFreq<it.second){
            maxFreq=it.second;
        }
    }

    vector<vector<char>> bucket(maxFreq +1);

    for(auto it:freq){
        bucket[it.second].push_back(it.first);
    }

    string ans;

    for(int i=maxFreq; i>=1 ;i--){
        for(char c:bucket[i])
        ans += string(i,c);
    }

    return ans;
}


int main(){
    cout<<"Enter the string :- ";
    string s;
    cin>>s;

    string ans = frequencySort(s);

    cout<<"Decreasing order sorted string based on frequency :- "<<ans <<endl;;
     
    return 0;
}

