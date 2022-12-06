//Primes upto N

bool is_prime(int n)
{
	int flag=0;

	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{

			flag++;
			break;
		}
	}
	if(flag!=0)
		return false;
	else 
		return true;
}

vector<int> primesUptoN(int n) {
    vector<int> result;
	if(n==0||n==1)
	{
		return result;
	}
	else
	{	
		for(int i=2;i<=n;i++)
		{
			if(is_prime(i)==true)
			{
				result.push_back(i);
			}
		}
	}
	return result;
}