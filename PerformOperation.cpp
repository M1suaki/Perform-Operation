#include <iostream>
using namespace std;

int PerformOperation(int operand1, char oper, int operand2){ 
  if(oper== '+'){
return operand1 + operand2;
} 
  else if(oper=='-'){
return operand1-operand2;
} 
  else if(oper=='*'){
return operand1*operand2;
} 
  else if(oper=='/'){
return operand1/operand2;
}
else if(oper=='%'){
return operand1%operand2;
}
else{
cout <<"Error\n";
return 0;
}
}

int main(){
cout << PerformOperation(1, '+', 2) << endl; 
cout << PerformOperation(3,'-',1) << endl; 
cout << PerformOperation(2, '*', 3) << endl; 
cout << PerformOperation(6, '/', 2) << endl; 
cout << PerformOperation (10, '%', 5) << endl;
}
