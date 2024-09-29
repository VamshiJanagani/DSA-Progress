//Input : s = "tree"
//Output : ['e', 'r', 't' ]
//Explanation : The occurrences of each character are as shown below :
//e --> 2
//r --> 1
//t --> 1.
//The r and t have same occurrences , so we arrange them by alphabetic order.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
	static bool comparator(pair<int,char>p1, pair<int,char>p2){
		if(p1.first>p2.first) return true;
		if(p1.first<p2.first) return false;
		return p1.second<p2.second;
	}
    public:
    vector<char> frequencySort(string& s){
        //Declaring a pair
			pair<int,char>freq[26];
			//Now filling the pair with all the alphabets and initial counts as zeros
			for(int i=0;i<26;i++){
				freq[i]={0,i+'a'};
			}
			//Now increasing the counts of string characters.
			for(int i=0;i<s.size();i++){
				freq[s[i]-'a'].first++;
			}
			//Now writing a custom sort function with our comparator
			sort(freq,freq+26,comparator);
			//Now the above function will call the comparator and sorting will be completed, 
			//We should now return an array of those characters
			vector<char> ans;
			for(int i=0;i<26;i++){
				if(freq[i].first>0){
					ans.push_back(freq[i].second);
				}
			}
			return ans;
    }
};


int main(){
    Solution sol;
    string s="tree";
    vector<char>result=sol.frequencySort(s);
    for(char c: result){
        cout<<c<<" ";
    }
    return 0;
}