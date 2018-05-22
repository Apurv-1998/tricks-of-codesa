1) when the number of test cases is unknown\

then use
while(scanf("%d",&n)!=EOF);

it will help;


2) for example we have an array 1 2 1 3 4

now our transaction target is 4 so we have to print the trasaction id where it is completed as in the the above case we 
have to print 3;
initialise sum = sum+a[i];
and x is the required target here 4

so take a counter 
			e=-1;
			while(sum<=x){
				g++;
				e = i+1;
			}

3) While traversing in a binary (bit manipulation)


eg: -			if(n%2==0){
				g++;
				n = n/2;
			}
had it been octal then it would have been n = n/8;

4) For a multi dimensional array the approach should be:-
	#include<stdio.h>
 
int main()
{
    int R, C;
    
    scanf("%d %d", &R, &C);
    
    int grid[R][C];
    
    int i, j, k;
    
    for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            scanf("%d ",&grid[i][j]);
        }
    }
    
    int Q;
    scanf("%d", &Q);
    int x1, x2, y1, y2;
    long int sum;
    
    for(i=0; i<Q; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sum = 0;
        for(j=x1-1; j<x2; j++)
        {
            for(k=y1-1; k<y2; k++)
            {
               sum += grid[j][k];
            }
        }
        printf("%ld\n", sum);
    }
}

(5) to print the last three digits:-
	printf("%03d",number);

(6) trick to find number of trialing zeroes: -

		// Function to return trailing 
		// 0s in factorial of n
		int findTrailingZeros(int n)
		{
    			// Initialize result
    			int count = 0;
 
    			// Keep dividing n by powers of 
    			// 5 and update count
    			for (int i = 5; n / i >= 1; i *= 5)
        		count += n / i;
 
   			 return count;
		}


(7) when u dont know the number of elements to be taken in the array then use malloc:-

#include <stdio.h>
 
int main(){
      long long int A,B;
      scanf("%lld %lld",&A,&B);
      char *s=malloc(1000000000);
      long long int c=0;
      scanf("%s",s);
      while(*s != '\0')
      {
          if(*s=='1')
          {
          c=(c+A)%B;
          }
          A=(A*A)%B;
          s++;
      }
      printf("%lld",c);
}


(8) Function to find GCD of an array: -


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}


(9) Palindromic numbers:-


#include <stdio.h>
 
int main()
{
	int t,a,b,x,i,l,p,q,z;
	char s[10];
 
	scanf("%d",&t);
 
	for(;t>0;t--)
	{
	    z=0;
	    
		scanf("%d",&a);
		scanf("%d",&b);
 
		for(i=a;i<=b;i++)
		{
			sprintf(s,"%d",i);
			l = strlen(s);
 
			p=0;
			q=l-1;
			x=0;
			do{
				if(s[p]==s[q])
				{
					p++;
					q--;
					continue;
				}
				else
				{
					x=1;
					break;
				}
			}while(p<=q);
 
			if(x==0)
				z++;
			
		}
 
		printf("%d\n",z);
	}
 
	return 0;
}

(11)length of code of Soft Sort algorithm :-


#include<stdio.h>
int main()
{
    long t,i;
    scanf("%ld",&t);
    long fact[1000001];
    fact[0]=1;
    for(i=1;i<1000001;i++)
    fact[i]=(i*fact[i-1])%1000000007;
    while(t--)
    {
        long n;
        scanf("%ld",&n);
        long ans=((3*fact[n])+3)%1000000007;
        printf("%ld\n",ans);
    }
}

(12) function to convert decimal to binary: -

// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[1000];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}


(13) IMPORTANT PROBLEM USE OF FLAG COUNTER: -


Fredo is playing a game. The rules of the game are:
Initially, you are given A units of ammo. There are N obstacles placed on a path. When you hit an obstacle, you gain three units ammo and lose one unit of ammo. When you don't hit an obstacle, you lose one unit ammo. If at any instance, you are left with 0 ammo units, the game ends there.

Fredo has an array A[i] containing N elements corresponding to the N obstacles. If Fredo will hit obstacle A[i]=1 , then  else A[i]=0.
Fredo asks you to tell him if he will be able to reach the end of the path. If yes, then also tell him the remaining number of ammo units.
If he is not able to reach the end of the path, tell him the obstacle index at which his game would end.

Note: If Fredo reaches the last obstacle, he is said to reach the end of the path.



CODE:-



#include<stdio.h>
#define p 100000
int main()
{
  long long int a[p],n,m,i,j,t,k;
  scanf("%lld",&t);
  for(k=1;k<=t;k++)
  {
    long int flag = 1;
    scanf("%lld %lld",&m,&n);
    for(i=0;i<n;i++)
    {
      scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]==0)
      m = m-1;
     else
      m = m+2;
     
    
    if(m==0)
     {
       if(i == n-1)
        break;
       printf("No %lld\n",i+1);
       flag = 0;
       break; 
     }
     
    }
    if(flag == 1)
     {
       printf("Yes %lld\n",m);
     }
  }
}


(11) IMP. PROGRAM RELATED TO MULTI DIMENSIONAL ARRAYS AND MULTI DIMENSIONAL STRINGS:-


Walter White is on a tour to sell meth. There are N cities.

Each city has a id between 1 and N (both inclusive).

You are given cost matrix.

In cost matrix, the jth element in the ith row denotes the cost of travelling between cities with  i and j.

cost[i][j]=cost[j][i] and cost[i][i]=0 

Given the path taken by Walter, print the cost of travelling.

Walter is at city with  1 right now.



CODE:-

#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][11];
    for(int i=0;i<n;++i) scanf("%s",a[i]);
 
    long long int c[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            scanf("%lld",&c[i][j]);
 
            
        }
    }    
    int p;
    scanf("%d",&p);
    long long int ans=0;
    int prev=0;
    char temp[11];
    for(int i=0;i<p;++i)
    {
        scanf("%s",temp);
        for(int j=0;j<n;++j)
        {
            if(strcmp(temp,a[j])==0)
            {
                ans+= c[prev][j];
                prev = j;
                break;
                
            }
        }
    }
    printf("%lld",ans);
    
}


(12) VERY IMP LOGICAL QUESTION:-


A notice on the notice board read:

“Is there an end to it?

While the number remains greater than one, if 2 divides the number completely, divide the number by 2; while the number remains greater than 1, if the number is not divisible by 2 , multiply the successor of the number by 3 and increment this by three. "

David starts off with a number a wonders if there is an end to it?




LOGIC THE SERIES WILL END ONLY IF THE NUMBER IS EVEN ELSE IT WILL NOT




CODE:-


#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n==1)
    printf("Yes");
    else if(n==0)
    printf("No");
    else
    {
        if(n%2==0)
        printf("Yes");
        else
         printf("No");
    }return 0;
}



(13) IMPORTANT QUESTION (NOT ABLE TO UNDERSTAND THE LOGIC): -



Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that a!=b  and 
a is maximum and b is second maximum in that subarray.



CODE: -

void main(){
    long int n,i,j,count=0,status = 0;;
    scanf("%ld",&n);
    long int a[n],key;
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[j]>a[i]){
                count++;
                break;
            }
 
        }
        for(j=i;j>=0;j--){
            if(a[j]>a[i]){
                count++;
                break;
            }
            
        }
    }
    printf("%d",count);
  
}


