vector<string> generate(int N)
{
	// Your code here
	queue<string> q;
	vector<string> v;
	q.push("1");
	//v.push_back("1");
	//q.push("0");
	//v.push_back("0");
	for(int i=0;i<N;i++)
	{
	    string curr = q.front();
	    q.pop();
	    q.push(curr+"0");
	    q.push(curr+"1");
	    v.push_back(curr);
	}
	
	return v;
}