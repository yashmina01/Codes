bool isPossible(vector<int> arr,int n, int m, int mid) {

    int studentCount = 1;
    int pageCount = 0;

    for(int i=0;i<n;i++) {

        if(pageCount + arr[i] <= mid) {
            pageCount+=arr[i];
        }
        else 
        {
            studentCount++;

            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }

    int ans = 0;                                               //ans is where we store minimum solution(i.e no of pages)
    int start = 0,end = sum;
    int mid = start + (end-start)/2;

    while(start <= end) {

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}