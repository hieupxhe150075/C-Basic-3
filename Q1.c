#include <stdio.h>
int main(){
	int i,a[10],n,k;
	printf("Enter n = ");
	int Count;
	while ((Count = scanf("%d",&n)) != 1) {
  	if (Count < 0) {
    return 1; 
  	}

  	scanf("%*c");  
  	printf("Enter n= ");
	}
	for(i=0;n>0;i++){
		a[i]=n%2;    
		n=n/2;    
	}    
	printf("Binary of Given Number is = ");    
	for(i=i-1;i>=0;i--){    
		printf("%d",a[i]);    
	}
	int s=0;
	printf("\n\nEnter n = ");
	scanf("%d",&n);
	k=n;
	printf("The sum of all digits in %d is ",n);
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	printf("%d\n",s);
	printf("\nThe reverse of %d is ",k);
	while(k!=0){
		i=k%10;
		k/=10;
		printf("%d",i);
	}
	return 0;    
}
