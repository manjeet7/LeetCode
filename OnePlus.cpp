    vector<int> plusOne(vector<int>& a) {
        int n = a.size();
   for(int i=n-1; i>=0; i--){
       if(a[i]<9){
           a[i] += 1;
           return a;
       }
       else{
           a[i]=0;
       }
   }
        if(a.front()==0){
            a.insert(a.begin(),1);
        }
         return a; 
    }