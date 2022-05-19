#include <bits/stdc++.h>
using namespace std;

bool checkEqual (vector<int> count1 , vector<int> count2){

	for(int i=0;i<26;i++){
		if(count1[i] != count2[i])
		return 0;
	}
	return 1;
}

bool checkInclusion(string s1 , string s2){
	
	//counting characters of string s1 and storing in array
	vector <int> count1(26);
	for(int i=0;i<s1.size();i++){
		int number = s1[i] - 'a';
		count1[number]++;
	}

	int i=0;
	vector <int> count2(26);
	int windowSize = s1.length();
	//running our first window
	while(i < windowSize && i < s2.length()){
		int index  = s2[i] - 'a';
		count2[index]++;
		i++;
	}

	if( checkEqual (count1 , count2 ))
	return 1;

	//window ko aage process ,like adding forward element and deleting backward element
	while(i < s2.length()){
		char newChar = s2[i];
		int index1 = newChar - 'a';
		count2[index1]++;

		char oldChar = s2[i - windowSize];
		int index2 = oldChar - 'a';
		count2[index2]--;

		i++;
		if( checkEqual (count1 , count2 ))
		return 1;
	}
	return 0;
}


int main() {
	string s1,s2; cin>>s1>>s2;

	if( checkInclusion(s1,s2) )
	cout<<"True"<<endl;
	else cout<<"False"<<endl;

	return 0;
}