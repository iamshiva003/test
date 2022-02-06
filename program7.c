//  7.program to convert and Infix Notation to Prefix Notation

#include <stdio.h>
#include <string.h>

void infix_prefix(char infix[],char prefix[]);

void main()
{
	char infix[20],prefix[20];

	printf("Enter the input string: \n");
	scanf("%s",infix);

	infix_prefix(infix,prefix);

	printf("\nPrefix Expression: \n");
	printf("%s\n",prefix);
	
}


int G (char symbol)
{
	switch(symbol)
	{
	    case '+' :
	    case '-' : return 2;
	    case '*' :
	    case '/' : return 4;
	    case '$' :
	    case '^' : return 5;
	    case '(' : return 0;
	    case ')' : return 9;
	    default :  return 7;
	}
}


int F (char symbol)
{
	switch(symbol)
	{
	    case '+' :
	    case '-' : return 1;
	    case '*' :
	    case '/' : return 3;
	    case '$' :
	    case '^' : return 6;
	    case ')' : return 0;
	    case '#' : return -1;
	    default :  return 8;
	}
}


void reverse (char *exp)
{
	int size = strlen(exp);
	int j=size, i=0;
	char temp[size];

	temp[j--] = '\0';

	while(exp[i] != '\0')
	{
		temp[j] = exp[i];
		j--;
		i++;

	}
	strcpy(exp,temp);
}


void infix_prefix (char infix[], char prefix[])
{
	int top=-1, j=0, i;
	char s[30];
	char symbol;

	s[++top] = '#';
    
	reverse(infix);

	for(i=0; i<strlen(infix); i++)
	{
		symbol=infix[i];

		while(F(s[top])>G(symbol))
			prefix[j++] = s[top--];

		if(F(s[top])!=G(symbol))
			s[++top] = symbol;

		else
			top--;

	}

	while(s[top]!='#')
		prefix[j++] = s[top--];

	prefix[j] = '\0';

	reverse (prefix);
}
