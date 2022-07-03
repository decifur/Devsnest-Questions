// Question: https://devsnest.in/algo-challenges/frequency-in-sorted-array
// Time Complexity: Log n


int binary_search(int start, int end, vector<int> arr, int key){

if(end < start){
        return 0;
    }

    int mid;
    mid = (start + end) / 2; 

    if(arr[mid] == key){
       int i = mid + 1;
        int count = 0;
        while(arr[i] == key){
            count++;
            i++;
        }
        int j = mid - 1;
        while(arr[j] == key){
            count++;
            j--;
        }
   
        return count + 1;
    }
    
    if(arr[mid] < key){
        return binary_search(mid+1, end, arr, key);
    }
    
    // for condition : arr[mid] > key
        return binary_search(start, mid-1, arr, key);
}


int solve(int n, vector<int> nums, int target){
//CODE HERE 
return binary_search(0, n-1, nums, target);
}

