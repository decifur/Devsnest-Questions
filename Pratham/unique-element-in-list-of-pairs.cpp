// Question : https://devsnest.in/algo-challenges/unique-element-in-list-of-pairs
// Time Complexity : O(n)

int solve(int n, vector<int> nums){
   
 int xo = 0;   

     for(int i=0; i < n; i++){

         cout<<xo<<" ^ "<<nums[i];
        xo = xo ^ nums[i];
        cout<<" = "<<xo<<endl;
    }

 return xo;
}
