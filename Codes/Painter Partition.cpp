bool isPossible(vector<int> &boards, int n, int k, int mid) {
    
    int painterCount = 1;
    int time = 0;
    
    for(int i=0;i<n;i++) {
        if(time + boards[i] <= mid){
            time +=boards[i];
        }
        else {
            painterCount++;
            if(boards[i] > mid || painterCount > k){
                return false;
            }
            time = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k){	
    int sum = 0,n = boards.size();
    for(int i=0;i<boards.size();i++) {
        sum +=boards[i];           
 }
 
 	int start = 0,end = sum,ans = 0;
 	int mid = start + (end-start)/2;
 	
    while(start <= end) {
        mid = start + (end-start)/2;
        
        if(isPossible(boards,n,k,mid)) {
            ans = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ans;
}