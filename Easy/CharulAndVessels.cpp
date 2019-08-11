#include<iostream>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int litres[k+1]={0};
		int vessel[n];
		for(int i=0;i<n;i++)
			cin>>vessel[i];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k+1;j++)
			{
				if(j<vessel[i])
					continue;
				else
				{
					if((litres[j-vessel[i]]==1) || (j-vessel[i])==0)
						litres[j]=1;
				}
			}
			if(litres[k]==1)
			{
				break;
			}
		}
		if(litres[k]==1)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}

	return 0;
}
