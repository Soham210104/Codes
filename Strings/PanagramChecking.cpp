class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int arr[26] = {0};
        
        for(char c : s){
            if(isalpha(c)){
                int index = tolower(c) - 'a';
                
                arr[index]++;
            }
        }
        
        for(int i=1;i<=26;i++){
            if(arr[i] == 0){
                return false;
            }
        }
        return true;
    }
};