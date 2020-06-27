#include<iostream>
using namespace std;

int main(){
	int a,b,c,d,temp;
	int n[11]={1,82,4,11,29,5,20,11,8,10,3};
	cout<<"Mengurutkan Angka"<<endl;
	
	for (a=10;a>=1;a--){
		c=0;
		d=n[0];
		for (b=1;b<=a;b++){
			if (n[b]>d){
				c=b;
				d=n[b];
				}
			}
		temp=n[a];
		n[a]=d;
		n[c]=temp;
	}
	cout<<"Hasil Ascending  : ";
	for (a=0;a<=10;a++){
		cout<<n[a]<<" ";
	}
	cout<<endl;
	
		for (a=10;a>=1;a--){
		c=0;
		d=n[0];
		for (b=1;b<=a;b++){
			if (n[b]<d){
				c=b;
				d=n[b];
			}
		}
		temp=n[a];
		n[a]=d;
		n[c]=temp;
	}
	cout<<"Hasil Descending : ";
	for (a=0;a<=10;a++){
		cout<<n[a]<<" ";
	}
}
