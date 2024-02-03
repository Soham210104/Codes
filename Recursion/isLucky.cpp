class Solution{
public:
    bool Lucky(int n,int counter)
    {
        if(counter>n) return true;
        if(n%counter == 0) return false;
        
        return Lucky(n-n/counter,counter+1);
    }
    bool isLucky(int n) 
    {
        // code here
        int counter = 2;
        return Lucky(n,counter);
    }
};