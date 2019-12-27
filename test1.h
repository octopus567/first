#include<stdio.h> 
#define M 11
#define MAX 2000 
 
void select(int num,int s[],int f[]){
 
	int preStart=0;
	int preFinal=MAX;//保证是无限大即可 
	int i;
	int temp;
	int OK=1;
	int sel[M];//用来储存相容的活动编号 
	int selNum=0;
	
		
	while(OK){
		OK=0;
		for(i=0;i<M;i++){
				
			if(f[i]<preFinal&&s[i]>=preStart){//寻找开始时间合适地情况下结束时间最早者 
				preFinal=f[i];
				temp=i;
				OK=1;
				printf("%d-------------->%d\n",s[i],f[i]); 
			}	
		}
		
		if(preFinal!=MAX){  //变量的重新赋值 
			sel[selNum++]=temp;
			preStart=f[temp];
		    preFinal=MAX;
		}
	}
	printf("%d",selNum);//相容数量 
}
 
int main(){
	int s[]={1,3,0,5,3,5,6,8,8,2,12};
	int f[]={4,5,6,7,8,9,10,11,12,13,14};
	select(M,s,f);
}