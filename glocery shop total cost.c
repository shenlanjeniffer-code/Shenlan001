#include<stdio.h>

float calculateTotal(float price,int quantity){
 float total_cost= price*quantity;
return total_cost;}

int main(){
	 float price;
	 int quantity;
	 float total_cost;
	 
	printf("Enter the price of one item :\t");
	scanf("%f",&price);
	
    printf("Enter the quantity purchased :\t");
	scanf("%d",&quantity);
	
	total_cost=price*quantity;
	
printf("The total_cost is %.2f",total_cost);
	
	return 0;
}