  class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int arr[256] = {0};
       for(int i=0;i<s.length();i++){
           arr[s[i]]++;
       }
       
       for(int i=0;i<s.length();i++){
           if(arr[s[i]] == 1){
               return (char)s[i];
           }
       }
       
       return '$';
    }

};