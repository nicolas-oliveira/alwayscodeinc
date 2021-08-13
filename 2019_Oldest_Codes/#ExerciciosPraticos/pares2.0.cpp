#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int n, contp=0, conti=0;
	cin >> n;
	int vetn[n];
	
	for(int i=0; i < n; i++) {
		cin >> vetn[i];
	}
	
	for(int i = 0; i < n ; i++){
		if (vetn[i]%2==0) {
			contp++;
		} else {
			conti++;
		}
	}
	    cout << endl << contp << "-" << conti << endl << endl;
	int vetp[contp], veti[conti];
	
	for(int i = 0, preenchido = 0; i < n; i++){
		if(vetn[i]%2==0) {
			vetp[preenchido] = vetn[i];
			preenchido++;
		}
	}
	
	
	for(int i = 0, preenchido = 0; i < n; i++){
		if(vetn[i]%2 != 0){
			 veti[preenchido] = vetn[i];
			 preenchido++;
		}
	}
	
	
	for(int i = 0; i<contp; i++) {
		for(int j = i+1; j<contp; j++) {
			if (vetp[i] > vetp[j]){
				int aux = vetp[i];
				vetp[i] = vetp[j];
				vetp[j] = aux;
			}
		}
	}
	
	for(int i = 0; i<conti; i++) {
		for(int j = i+1; j<conti; j++) {
			if (veti[i] < veti[j]){
				int aux = veti[i];
				veti[i] = veti[j];
				veti[j] = aux;
			}
		}
	}
	
	for(int i = 0; i < contp; i++){
		cout << vetp[i] << endl;
	}
	
	for(int i = 0; i < conti; i++){
		cout << veti[i] << endl;
	}
	
	
	return 0;
}