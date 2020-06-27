#include<iostream>
using namespace std;

int main(){
	
	int a,b,j,temp;
	int n[11]={1,82,4,11,29,5,20,11,8,10,3};
	cout<<"Mengurutkan Angka Insertion Sort"<<endl<<endl;

	for (a=0;a<=10;a++) {
	 	temp=n[a]; j=a-1; 
			while (n[j]>temp && j>=0){
			n[j+1]=n[j];
			j--;
			}
		n[j+1]=temp;
	}
	
	cout<<"Hasil Ascending : "<<endl;
	
	for (int a=0;a<=10;a++){
		cout<<n[a];
		if(a<10){
			cout<<", ";
			}
	}
	
		for (a=0;a<=10;a++) {
	 	temp=n[a]; j=a-1; 
			while (n[j]<temp && j>=0){
			n[j+1]=n[j];
			j--;
			}
		n[j+1]=temp;
	}
	
	cout<<endl<<endl<<"Hasil Descending : "<<endl;
	
	for (int a=0;a<=10;a++){
		cout<<n[a];
		if(a<10){
			cout<<", ";
			}
	}
}
