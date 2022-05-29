#include <bits/stdc++.h>
using namespace std;

int main(){

int r,c; cin>>r>>c;
vector <vector<int> > matrix;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>matrix[r][c];
    }
}

cout<<"Enter Element To Search In 2D Matrix : "<<endl;
int target; cin>>target;

int row = matrix.size();
    int col = matrix[0].size();
        
    int start = 0;
    int end = row*col-1;
        
    int mid = start + (end-start)/2;
        
        while(start <= end){
            
        int element = matrix[mid/col][mid%col];
            
            if(element == target)
                return true;
            
            else if(element < target)
                start = mid + 1;
        
            else 
                end = mid - 1;
            
            mid = start + (end-start)/2;
        }
        return false;
}