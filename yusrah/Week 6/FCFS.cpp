#include<stdio.h>
#include<stdlib.h>
int main(){
	int fcfs[20][6];
	float avgtat=0,avgwt=0;
	int n;
	//0=process num,1=arrival time,2=burst size,3=completion time,4=tat,5=wt
	printf("Enter the number of processor\n");
	scanf("%d",&n);
		printf("Enter the process number, arrival time and burst time \n");
	for(int i=0;i<n;i++){
   scanf("%d %d %d",&fcfs[i][0],&fcfs[i][1],&fcfs[i][2]);
	}
	fcfs[0][4]=fcfs[0][2];fcfs[0][3]=fcfs[0][2];
	fcfs[0][5]=0;//First process
	avgtat=fcfs[0][4];
	for(int i=1;i<n;i++){
   	fcfs[i][3]=fcfs[i-1][3]+fcfs[i][2];//completion time
   	fcfs[i][4]=fcfs[i][3]-fcfs[i][1];//turnaround time
   	avgtat+=fcfs[i][4];
   	fcfs[i][5]=fcfs[i][4]-fcfs[i][2];//waiting time
   	avgwt+=fcfs[i][5];
   }
   for(int i=0;i<n;i++){
   	printf("P%d \t\t %d \t\t %d \t\t %d\t\t %d \t\t %d\n",fcfs[i][0],fcfs[i][1],fcfs[i][2],fcfs[i][3],fcfs[i][4],fcfs[i][5]);
   }
  printf("Average of Turnaround time is %f\n", avgtat/=n);
   printf("Average of Waiting time is %f\n",avgwt/=n);
}
