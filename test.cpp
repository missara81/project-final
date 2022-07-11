# include <iostream>
using namespace std;
void adad (int a);
int main(){
	int size=10;
	adad(size);
	return 0;
}
void adad (int size){

	int temp=0;
    int b[size];
    for(int i=0;i<size;i++){
    	cin>>b[i];
    }
    	for(int j=0;j<(size-1);j++){
    		for(int i=0;i<(size-1);i++){
    	    if(b[i]>0){
			
    		if(b[i]>b[i+1]){
    			temp=b[i];
    			b[i]=b[i+1];
    			b[i+1]=temp;
    		}
		}
	}
}
	 for(int i=(size-1);i>=0;i--){
	 	cout<<b[i];
	 }
}
	

