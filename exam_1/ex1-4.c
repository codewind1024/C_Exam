#include <stdio.h>
int main(){
	printf("please input the radius:\n");
	float r;
	float pai=3.141592;
	scanf("%f",&r);
	if(r>0){
		printf("C:%f\nS:%f\n",2*pai*r,pai*r*r);


	}else{
		printf("please input the correct data!");
	

	}




	return 0;
}
