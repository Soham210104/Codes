class Solution {
  public:
    int isValid(string s) {
        // code here
        int i = 0,flag = 0;
        string temp = "";
        for(i=0;i<s.length();i++){
            if(s[i] == '.') return 0;
            
            while(s[i] != '.'){
                temp += s[i];
                i++;
            }
            
            int number = stoi(temp);
            temp="";
            if(number>=0 && number<=255){
                flag = 1;
            }
            else{
                return 0;
            }
        }
        
        return flag;
    }
};