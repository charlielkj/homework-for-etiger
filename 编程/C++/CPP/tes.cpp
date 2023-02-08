/*int numbers[10];

for(int i = 0; i < 10; i++)
	numbers[i] = 100 + i;
	
int fifth,sixth,change;
fifth=numbers[4];
sixth=numbers[5];
numbers[4]=sixth;
numbers[5]=fifth;


int change = numbers[4];
numbers[4] = numbers[5];
numbers[5] = change;

	
for(int i = 0; i < 10; i++){
	if(numbers[i]==0){
		numbers[i]=1;
		}
	}*/
	
	
	
for(int i=0;i<10;i++){
	for(int j=i+1;j<10;j++){
		if(numbers[i]==numbers[j]){
			cout<<numbers[i]<<numbers[j]<<endl;
			return;
		}	
	} 
}
