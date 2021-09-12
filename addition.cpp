//Program for addition of matrices.....

#include<iostream>
using namespace std;
int main(){
	int arr1[3][3],arr2[3][3],sum[3][3];
	cout<<"Enter Elements in 1st array : ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter Elements in 2nd array : ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = arr1[i][j]+arr2[i][j];
		}
		printf("\n");
	}
	printf("\nSum : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}

//Manay Rawal
