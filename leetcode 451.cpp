/*
MY SOLUTION FOR LEETCODE 451
TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: 123;
*/









class Solution {
public:
typedef pair<char,int> p;
//to bypass of typing this ewww sentence to many times
static bool comp(p a, p b){
    return a.second>b.second;
}
//here we have sorted the vector 
string converttostring(char ch, int frequency){
    string temp="";
    while(frequency){
        temp+=ch;
        frequency--;
    }
    return temp;
}
    string frequencySort(string s) {
        vector<p>frequency(123);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int freq=frequency[ch].second;
            frequency[ch]={ch,freq+1};
        }
        //sort on the basis of int because we need frequency of highest element
        sort(frequency.begin(),frequency.end(),comp);
        //done with the sorting
        string result="";
        //now we'll build the string from here
        for(int i=0;i<123;i++){
            char ch=frequency[i].first;
            int freq=frequency[i].second;
            result+=converttostring(ch,freq);
        }
        return result;
    }
};