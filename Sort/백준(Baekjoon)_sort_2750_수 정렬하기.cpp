#include<stdio.h> 

void quickSort(int* data, int start, int end){
	if(start >= end){
		return;
	}
	
	int key = start;
	int i = start + 1, j = end, temp;
	
	while(i <= j){
		while(i <= end && data[i] <= data[key]){
			i++;
		}
		while(j > start && data[j] >= data[key]){
		j--;
		}
		if(i > j){
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;	
		} else{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort( data, start, j -1);
	quickSort( data, j+1, end);
}
  
int main(void){
	int number, i, data;
	quickSort(data, 0, number - 1);

	for(i=0; i<number ; i++){
		printf("%d\n", data[i]);	
	}
	return 0;
 }
