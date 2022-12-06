//Given a sorted array of integers, find the number of negative numbers.
int getNegativeNumbersCount(vector<int> &arr)
{
    // add your logic here
	int count = 0;
	
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i] >= 0)
			return count;
		else
			count++;
	}
	
	return count;
}