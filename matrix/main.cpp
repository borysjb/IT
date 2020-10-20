#include <bits/stdc++.h>

using namespace std;

#include "matrix.h"
#include "matrix.cpp"
#include "functions.cpp"

int main()
{
	matrix first1;
	first1.create(3,3);
	first1.fill();
	cout<<"matrix 1:\n";
	first1.show();

	cout<<endl;

	matrix second1;
	second1.create(3,2);
	second1.fill();
	cout<<"matrix 2:\n";
	second1.show();

	cout<<endl;

	matrix added;
	try {
		added=add(first1,second1);
	} catch(NAH) {
		cout<<"matrices 1 and 2 are unaddable\n";
		goto unaddable1;
	}
	cout<<"matrix 1 added to matrix 2:\n";
	added.show();
	unaddable1:0 ;
	cout<<endl;

	matrix scalared1;
	scalared1=scalar(first1,4);
	cout<<"matrix 1 multiplied by 4:\n";
	scalared1.show();
	cout<<endl;

	matrix scalared2;
	scalared2=scalar(second1,2);
	cout<<"matrix 2 multiplied by 2:\n";
	scalared2.show();
	cout<<endl;

	matrix multiplied;
	try {
		multiplied=multiply(second1,first1);
	} catch (NAH) {
		cout<<"matrix 1 is unmultiplyable by matrix 2\n \n";
		goto unmultiplyable1;
	}
	cout<<"matrix 1 multiplied by matrix 2:\n";
	multiplied.show();
	cout<<endl;
	unmultiplyable1:0 ;

	try {
		multiplied=multiply(first1,second1);
	} catch (NAH) {
		cout<<"matrix 2 is unmultiplyable by matrix 1\n \n";
		goto unmultiplyable2;
	}
	cout<<"matrix 2 multiplied by matrix 1:\n";
	multiplied.show();
	cout<<endl;
	unmultiplyable2:0 ;
	return 0;
}
