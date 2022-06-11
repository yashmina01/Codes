
bool isPossible(vector<int> stalls,int n,int k,int mid) {
  int cowsCount = 1;
  int lastPosition = stalls[0];

  for(int i=0;i<n;i++) {
    if(stalls[i] - lastPosition >= mid){
      cowsCount++;

      if(cowsCount == k){
        return true;
      }
      lastPosition = stalls[i];
    }
  }
  return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin() , stalls.end());
  int n = stalls.size();
  int maxi = -1;

  for(int i=0;i<n;i++)
  maxi = max(maxi,stalls[i]);
    
  int ans = 0;                                           
  int start = 0,end = maxi;
  int mid = start + (end-start)/2;

    while(start <= end) {

        if(isPossible(stalls,n,k,mid)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans; 
}
