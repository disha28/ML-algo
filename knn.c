#include<stdio.h>
#include<math.h>

struct point
{
int val; //category
double x,y;  //coordinates
double dis;  //distance
};
int main()
{
int n=17,freq1,freq2,i,k=3,j;
struct point arr[n];
struct point p,s;
// points

arr[0].x = 1; 
arr[0].y = 12; 
arr[0].val = 0; 
  
arr[1].x = 2; 
arr[1].y = 5; 
arr[1].val = 0; 
  
arr[2].x = 5; 
arr[2].y = 3; 
arr[2].val = 1; 
  
arr[3].x = 3; 
arr[3].y = 2; 
arr[3].val = 1; 
  
arr[4].x = 3; 
arr[4].y = 6; 
arr[4].val = 0; 
  
arr[5].x = 1.5; 
arr[5].y = 9; 
arr[5].val = 1; 
  
arr[6].x = 7; 
arr[6].y = 2; 
arr[6].val = 1; 
  
arr[7].x = 6; 
arr[7].y = 1; 
arr[7].val = 1; 
  
arr[8].x = 3.8; 
arr[8].y = 3; 
arr[8].val = 1; 

arr[9].x = 3; 
arr[9].y = 10; 
arr[9].val = 0; 
  
arr[10].x = 5.6; 
arr[10].y = 4; 
arr[10].val = 1; 
  
arr[11].x = 4; 
arr[11].y = 2; 
arr[11].val = 1; 
  
arr[12].x = 3.5; 
arr[12].y = 8; 
arr[12].val = 0; 
  
arr[13].x = 2; 
arr[13].y = 11; 
arr[13].val = 0; 
  
arr[14].x = 2; 
arr[14].y = 5; 
arr[14].val = 1; 
  
arr[15].x = 2; 
arr[15].y = 9; 
arr[15].val = 0; 
  
arr[16].x = 1; 
arr[16].y = 7; 
arr[16].val = 0; 
  
/*Testing Point*/ 
printf("enter the coordinates of the point you want to classify");
scanf("%lf",&p.x);
scanf("%lf",&p.y);
 

// euclidean distance

for(i=0;i<17;i++)
{
arr[i].dis=sqrt(pow((arr[i].x-p.x),2)+pow((arr[i].y-p.y),2));
}

//sorting

for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(arr[j].dis>arr[j+1].dis)
{
p.dis=arr[j].dis;  //value swapped
s.val=arr[j].val;  //category swapped
arr[j].dis=arr[j+1].dis;
arr[j].val=arr[j+1].val;
arr[j+1].dis=p.dis;
arr[j+1].val=s.val;
}
}
}
freq1=0;
freq2=0;
 
for(i=0;i<k;i++)
{
if(arr[i].val==0)
{
freq1++;
}
else if (arr[i].val == 1) 
freq2++;
}

if(freq1>freq2)
printf("Belongs to 0's group");
else
printf("Belongs to 1's group");
}











