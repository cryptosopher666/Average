#include<iostream>
#include<conio.h>
using namespace std;
double avg(double [], int);
double bubblesort(double [], int);

int main(){
	int a;
	double c;
	cout<<"How many data's do you wanna enter? : ";
	cin>>a;
	double b[a];
	for(int i=0;i<a;i++){
		cout<<"Data "<<i+1<<" = ";
		cin>>b[i];
	}
	c=avg(b,a);
	cout<<"Average = "<<c<<endl;
	bubblesort(b,a);
	for(int j=0;j<a;j++)
	cout<<b[j]<<'\t';
	getch();
	return 0;
}
double avg(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}
double bubblesort(double arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[n];
}
