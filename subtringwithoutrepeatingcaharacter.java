int substring1(string s){
    int n = s.length();
    int a_pointer = 0;
    int b_pointer = 0;
    while(b_pointer<n){
        HashSet<Character> h = new HashSet<>();
        if(h.contains(s.charAt(b_pointer))){
            h.insert(s.charAt(b_pointer));
            b_pointer++;
            max1 = Math.max(max1,h.size());
        }
        else{
            h.remove(s.charAt(a_pointer));
            a_pointer++;
        }
    }
    return max1;
}