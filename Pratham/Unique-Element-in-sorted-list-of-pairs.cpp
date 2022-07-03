// Question: https://devsnest.in/algo-challenges/Unique-element-in-sorted-list-of-pairs
// Time Complexity:  log n

int DEBUG = 0;
int DEBUG_CASE = -1;


int binary_search(int start, int end, vector < int > arr) {

// remove debug code to optimize 
 if(DEBUG == 1){
     cout<<"start="<<start<<", end="<<end<<endl;
     cout<<"s-el="<<arr[start]<<", e-el="<<arr[end]<<endl;
     
 }

  int mid = (start + end) / 2;

  if(start == end){
      // only three element left, one is always single like me
      return arr[start];
  }

  if (mid % 2 == 0) {
    if (arr[mid] == arr[mid - 1]) {
      // single element will be in left 
      return binary_search(start, mid - 2, arr);
    }

    if (arr[mid] == arr[mid + 1]) {
      // single element will be in right
      return binary_search(mid + 2, end, arr);
    }

  } else {
    if (arr[mid] == arr[mid - 1]) {
      // single element will be in right 
      return binary_search(mid + 1, end, arr);
    }

    if (arr[mid] == arr[mid + 1]) {
      // single element will be in left
        return binary_search(start, mid - 1, arr);
    }

  }

  // middle element does not match left or right
  

 if(DEBUG == 1){
    cout<<"else";
 }
  return arr[mid];
}

int solve(int n, vector < int > nums) {
  //CODE HERE 

  if(n == DEBUG_CASE){
      DEBUG = 1;
  }
  return binary_search(0, n - 1, nums);

}