// There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed.
//  The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). 
//  In each step, a certain number of people are skipped and the next person is executed. 
//  The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), 
//  until only the last person remains, who is given freedom.
// Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle.
//  The task is to choose the place in the initial circle so that you are the last one remaining and so survive.


class Solution {
  public:
    //JOSEPHUS PROBLEM
    
    void rec(int i,int k,vector<int>& arr)
    {
        if(arr.size() == 1)
        {
            return;
        }
            i = (i+(k-1))%arr.size();
            arr.erase(arr.begin()+i);
            
            rec(i,k,arr);
    }
    int safePos(int n, int k)
    {
        // code here
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i] = i+1;
        }
        
        rec(0,k,arr);
        
        return arr[0];
    }
};
