#include<cstdio>
#include<cstring>
//D<<20
//��Ȼn���Ϊ[1<<D]-1
//��ʼA[1<<D]Ϊ0������֮���Ϊ1�������ֱ�Ϊ0
//�����뵽��A[t]=!A[t]
const int depthm=20;
int s[1<<depthm];
int main()
{
	int d,n;
	while(~scanf("%d%d",&d,&n))
	{
		int k,t=(1<<d)-1;
		for(int i=0;i<n;i++)
		{
			k=1;
			while(1)
			{
				s[k]=!s[k];
				k=s[k]?k*2:k*2+1;
				if(k>t)break;
			}
		}
		printf("%d\n",k/2);
		
	}
	
	return 0;
}
