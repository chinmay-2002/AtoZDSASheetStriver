string reverseWords(string s) 
{ 
    // code here 
    reverse(s.begin(), s.end());
    string ans = "";
    int pos = -1;
    string temp;
    while((pos = s.find(' '))!=string::npos){
    	temp = s.substr(0,pos);
        
        reverse(temp.begin(), temp.end());
	    temp = temp + ".";
        ans = ans + temp;
        s.erase(0,pos+1);
    }
    ans = ans + s;
    return ans;
} 