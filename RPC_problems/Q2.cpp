//search range
vector<int> searchRange(vector<int> &arr, int key) 
{
    // add your logic here
  vector<int> search;
	int s = -1,e = -1;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == key && s == -1)
			s = i;
		if(arr[i] == key)
			e = i;
	}
	search = {s,e};
	return search;
}