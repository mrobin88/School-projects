#include <iostream>

using namespace std;



void enterMatrix(double matrix[2][2]) {

	for (int row=0; row<2; row++) {
		for (int col=0; col<2; col++) {
			cout << "enter element " << (row+1) << " " << (col+1) << ":";
			cin >> matrix[row][col];
			cout<<" display row "<< row<<"display col"<< col<<endl;
		}
	}
}

void outputMatrix(double matrix[2][2]) {

	for (int row=0; row<2; row++) {
		for (int col=0; col<2; col++) {
			cout << matrix[row][col] << " ";
			

		}
		cout << endl;
	}
}

void multiMatrix(double result[2][2], double n[2][2], double m[2][2]) {
    result[0][0]=(n[0][0]*m[0][1])+(n[0][1]*m[1][0]);
    result[0][1]=(n[0][0]*m[0][1])+(n[0][1]*m[1][1]);
    result[1][0]=(n[1][0]*m[1][1])+(n[1][1]*m[1][0]);
    result[1][1]=(n[1][0]*m[0][1])+(n[1][1]*m[1][1]);
}

void addMatrix(double result[2][2], double n[2][2], double m[2][2]) {
	for (int row=0; row<2; row++) {
		for (int col=0; col<2; col++) {
			result[row][col]=n[row][col]+m[row][col];}}
     
}

void subtractMatrix(double result[2][2], double n[2][2], double m[2][2]) {
	for (int row=0; row<2; row++) {
		for (int col=0; col<2; col++) {
			result[row][col]=n[row][col]-m[row][col];}}	
}

void main() {




	double n[2][2];
	double m[2][2];
	double c[2][2];
    double d[2][2];
    double g[2][2];
	
	cout << "change" << endl;
 
	 enterMatrix(n);
	 enterMatrix(m);
	 addMatrix(c, n, m);
	 subtractMatrix(d, n, m);
	
    
	cout << "matrix n:"<<endl;
	outputMatrix(n);
    cout << "matrix m:"<<endl;
	outputMatrix(m);
	cout << "addition:" << endl;
	outputMatrix(c);
    cout << "subtraction:" << endl;
	outputMatrix(d);

    multiMatrix(g, n, m);
	cout << "multiply:" << endl;
	outputMatrix(g);

}
void addMatrix(double matrix[2][2]) {

	for (int row=0; row<2; row++) {
		for (int col=0; col<2; col++) {
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
}



    
  