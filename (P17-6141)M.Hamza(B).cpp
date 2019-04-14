#include <iostream>
#include <sstream> 
#include <string>
#include<math.h>
using namespace std;

long long  antilog(int x){
	
    float logBase2,logBasee;
    long long logBase10;
    logBase10 = pow(10,x);
    logBasee = pow(2.718281828,x);
    
    return logBase10;
}






int main(){
	string x,pair,s,s1,s2;
	int size,counter;
	cout << "Enter your First  number" <<endl;
	cin >> x;
	if(x.size()%2!=0){
		x= "0"+x;
	}
	size = x.size();
	size = size/2;
	int *array  = new int[size];
	counter=0;
	for(int i = 0;i<x.size();i=i+2){
	s = x[i]; 	
	s1  = x[i+1];
	s2 = s+s1;

	stringstream geek(s2); 
    int x1 = 0; 
    geek >> x1; 
   
    array[counter]=x1;
    counter++;
}
   
    string input2,l,l1,l2;
	int size1,counter1;
	cout << "Enter your 2nd  number" <<endl;
	cin >> input2;
	if(input2.size()%2!=0){
		input2= "0"+input2;
	}
	size1 = input2.size();
	size1 = size1/2;
	
	int *array1  = new int[size1];
	counter1=0;
	for(int i = 0;i<input2.size();i=i+2){
	l = input2[i]; 	
	l1  = input2[i+1];
	l2 = l+l1;
	
	stringstream geek(l2); 
    int x2 = 0; 
    geek >> x2; 
    
    array1[counter1]=x2;
    counter1++;
   }
   int mul =0;
   int counter2=0;
   int counter3=0;
   int counter4=0;
   long long answer =0;
   long long no_of_zeros = 0;
   for(int i=0;i<size;i++){
   	
	   for(int j=0;j<size1;j++){
	   mul = array[i]*array1[j];
	   
	   for(int k =i+1;k<size;k++ ){
	   	counter2++;
	   	
	   }
	   counter2 = counter2*2;
	   for(int l=j+1;l<size1;l++){
	   	counter3++;
	   }
	   counter3 = counter3*2;
	   counter4=counter2+counter3;
	  
	   no_of_zeros =antilog(counter4);
	   mul = mul* no_of_zeros;
	   answer = answer + mul;
	   no_of_zeros = 0;
	   counter4=0;
	   counter2=0;
       counter3=0;
	   
	   }
   	
   }
     cout << "your answer is " <<endl;
    cout << answer <<endl;


	return 0;
}

