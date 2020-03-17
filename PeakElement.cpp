class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        int curr = a[0];
        int i=1;
            for( i=1; i<=n-1; i++){
       	      if(curr<a[i]){
                  curr=a[i];
              }
                else{
                    return i-1;
                }
	   }
        return i-1;
    }
};