#include <bits/stdc++.h>
using namespace std;

int stringCompress(string chars){

	int i=0;
	int ansIndex = 0;
	int n = chars.size();

	while(i < n){
		int j = i+1;

		while(j < n && chars[i] == chars[j])
		{
			j++;
		}
		chars[ansIndex++] = chars[i];
		
		int count = j-i;
		if(count > 1){
			string cnt = to_string(count);
			for(auto counting: cnt){
				chars[ansIndex++] = counting;
			}
		}
		i=j;
	}
	return ansIndex;

}

int main() {
	string chars; cin>>chars;
	cout<< stringCompress(chars) <<endl;
	return 0;
}