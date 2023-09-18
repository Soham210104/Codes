// Given a string str and a pattern pat. You need to check whether the pattern is present or not in the given string. 


bool searchPattern(string str, string pat)
{
  int M = str.length();
  int N = pat.length();
    for(int i=0;i<=M-N;i++)
    {
        int j;
        for(j=0;j<N;j++)
        {
            if(str[i+j] != pat[j])
            {
                break;
            }
        }
         if(j==N)
            {
                return true;
            }
    }
    return false;
}