#include <stdio.h>           //0.090909
#include <cmath>            //0.545455
#include <iostream>          //0.272727
using namespace std;         //0.090909

void kiir(double tomb[],int db)
{
	for(int i=0;i<db;i++)
	{cout<<tomb[i]<<" ";}
	cout<<endl;

}

double tavolsag(double PR[], double PRv[], int n)
{
	int i;
	double distance=0;
	for(i=0;i<n;++i)
	distance+=abs(PR[i]-PRv[i]);
return (distance);
}
int main(void)
{
	double L[4][4] = {
	{0.0, 0.0, 1.0/3.0, 0.0},
	{1.0, 1.0/2.0, 1.0/3.0, 1.0},
	{0.0, 1.0/2.0, 0.0, 0.0},
	{0.0, 0.0, 1.0/3.0, 0.0}
    };

double PR[4]={0.0, 0.0, 0.0, 0.0};
double PRv[4]={1.0/4.0, 1.0/4.0, 1.0/4.0, 1.0/4.0};

int i=0,j=0;
for(;;)
{
    for(i=0;i<4;i++){
	PR[i]=0.0;
        for(j=0;j<4;j++){
            PR[i]+=(L[i][j]*PRv[j]);
        }
    }
	if(tavolsag(PR,PRv,4) < 0.0000000001)
	break;
	for(i=0;i<4;i++)PRv[i]=PR[i];
}
kiir(PR,4);
return 0;
}
