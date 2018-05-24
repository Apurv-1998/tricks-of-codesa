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





(!4) VERY IMPORTANT:-



CODE   

#include <stdio.h>
 
int main()
{
int t,n,i;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         int j=i-1,count=1;
        while((j>=0)&&(a[i]>=a[j]))
        {
            count=count+b[j];
            j=j-b[j];
        }
        b[i]=count;
        printf("%d ",count);
    }
   printf("\n"); 
}
}



PROBLEM


Various signal towers are present in a city.Towers are aligned in a straight horizontal line(from left to right) and each tower transmits a signal in the right to left direction.Tower A shall block the signal of Tower B if Tower A is present to the left of Tower B and Tower A is taller than Tower B. So,the range of a signal of a given tower can be defined as :

{(the number of contiguous towers just to the left of the given tower whose height is less than or equal to the height of the given tower) + 1}.

You need to find the range of each tower.


(15) IMPORTANT STRING QUESTION: -


PROBLEM:-

You are given two string S and T. Find the maximal length of some prefix of the string S which occurs in strings T as subsequence.


CODE:-


#include<stdio.h>

#define p 1000000

#include<string.h>

int main()

{
  
char s1[p],s2[p];
  
int g=0,i,j;
  
scanf("%s",s1);
  
scanf("%s",s2);
  
for(i=0;s2[i]!='\0'&&s1[g]!='\0';i++)
  
{
      
if(s2[i]==s1[g])
        
g++;
  
}
  
printf("%d\n",g);

}





(16) TRICK TO CHECK WETHER A GRAPH IS A TREE OR NOT




#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long sum=0;
    int i,x;
    for(i=0;i<N;i++)
    {
        scanf("%d",&x);
        sum+=x;
    }
    if(2*(N-1)==sum)
    printf("Yes\n");
    else
    printf("No\n");
}







(17) QSORT FUNCTION:-



SYNTAX:-


#include <stdlib.h>

       void qsort(void *base, size_t nmemb, size_t size,
                  int (*compar)(const void *, const void *));

       void qsort_r(void *base, size_t nmemb, size_t size,
                  int (*compar)(const void *, const void *, void *),
                  void *arg);

DESCRIPTION:-


The qsort() function sorts an array with nmemb elements of size size.
       The base argument points to the start of the array.

       The contents of the array are sorted in ascending order according to
       a comparison function pointed to by compar, which is called with two
       arguments that point to the objects being compared.

       The comparison function must return an integer less than, equal to,
       or greater than zero if the first argument is considered to be
       respectively less than, equal to, or greater than the second.  If two
       members compare as equal, their order in the sorted array is
       undefined.

       The qsort_r() function is identical to qsort() except that the
       comparison function compar takes a third argument.  A pointer is
       passed to the comparison function via arg.  In this way, the
       comparison function does not need to use global variables to pass
       through arbitrary arguments, and is therefore reentrant and safe to
       use in threads.



RETURN VALUE:-

The qsort() and qsort_r() functions return no value.


QUESTION:-

Monk's birthday is coming this weekend! He wants to plan a Birthday party and is preparing an invite list with his friend Puchi. He asks Puchi to tell him names to add to the list.
Puchi is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Monk hates redundancy and hence, enlists the names only once. 
Find the final invite-list, that contain names without any repetition.


Code:-

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
    int t;
    int n;
    int i, j;
    static char ar[10000][1000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%s", ar[i]);
        }
        qsort (ar, n, 1000, (int(*)(const void*,const void*)) strcmp);
        for(i = 0; i < n; i++)
        {
            if(i == 0 || strcmp(ar[i], ar[i-1]) != 0)
            printf("%s\n", ar[i]);
        }
    }
    return 0;
}
