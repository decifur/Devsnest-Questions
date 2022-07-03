

int binary_search(int start, int end, vector<int> arr, int key){

// Time Complexity : log n

if(end < start){
        return -1;
    }

    int mid;
    mid = (start + end) / 2; 

    if(arr[mid] == key){
        return mid;
    }
    
    if(arr[mid] < key){
        return binary_search(mid+1, end, arr, key);
    }
    
    // for condition : arr[mid] > key
        return binary_search(start, mid-1, arr, key);
    
    return -1;
}


int solve(int n, vector<int> nums, int target){
//CODE HERE 
return binary_search(0, n-1, nums, target);
}
