#include<bits/stdc++.h>
using namespace std;
//checking character is numeric
bool isNumeric(char c){
	if(c>='0' && c<='9')
		return true;
	return false;
}
//checking if operator is valid
bool isOperator(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

int performOperation(char operation, int operand1, int operand2){
	if(operation == '+')
		return operand1+operand2;
	if(operation == '-')
		return operand1-operand2;
	if(operation == '*')
		return operand1*operand2;
	if(operation == '/')
		return operand1/operand2;
	else cout<<"unexpected error \n";
	return -1;
}
int evaluatePostfix(string exp){
	stack<int> S;
	for (int i = 0; i < exp.length(); ++i)
	{
		if(exp[i]==' ' || exp[i] == ',')
			continue;
		else if(isNumeric(exp[i])){
			int operand = 0;
			while(i<exp.length() && isNumeric(exp[i])){
				operand = operand*10 + (exp[i]-'0');
				i++;
			}
		i--;
		S.push(operand);
		}
		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if(isOperator(exp[i])){
			int operand2 = S.top();S.pop();
			int operand1 = S.top();S.pop();
			int res = performOperation(exp[i],operand1,operand2);
			S.push(res); 
		}
}
	return S.top();
}
int main(){
//string expression = "1,22,3,4,5,6,7";
string expression;
getline(cin,expression);
int result = evaluatePostfix(expression);
cout<<result;
	return 0;
}