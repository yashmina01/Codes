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
			j++;								//couting the reapeated character
		}

		chars[ansIndex++] = chars[i];			//putting character in array before it's count
		
		int count = j-i;						
		if(count > 1){							//here we are converting counts of character to string and inserting in array
			string cnt = to_string(count);		//as by doing so counts >10 can easily be written as 1 0 array
			for(auto counting: cnt){
				chars[ansIndex++] = counting;
			}
		}
		i=j;									//changing the character
	}
	return ansIndex;

}

int main() {
	string chars; cin>>chars;
	cout<< stringCompress(chars) <<endl;
	return 0;
}