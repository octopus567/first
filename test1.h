#include<stdio.h> 
#define M 11
#define MAX 2000 
 
void select(int num,int s[],int f[]){
 
	int preStart=0;
	int preFinal=MAX;//��֤�����޴󼴿� 
	int i;
	int temp;
	int OK=1;
	int sel[M];//�����������ݵĻ��� 
	int selNum=0;
	
		
	while(OK){
		OK=0;
		for(i=0;i<M;i++){
				
			if(f[i]<preFinal&&s[i]>=preStart){//Ѱ�ҿ�ʼʱ����ʵ�����½���ʱ�������� 
				preFinal=f[i];
				temp=i;
				OK=1;
				printf("%d-------------->%d\n",s[i],f[i]); 
			}	
		}
		
		if(preFinal!=MAX){  //���������¸�ֵ 
			sel[selNum++]=temp;
			preStart=f[temp];
		    preFinal=MAX;
		}
	}
	printf("%d",selNum);//�������� 
}
 
int main(){
	int s[]={1,3,0,5,3,5,6,8,8,2,12};
	int f[]={4,5,6,7,8,9,10,11,12,13,14};
	select(M,s,f);
}