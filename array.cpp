#include <iostream>
#define ROWS 3
#define LEN 4
using namespace std;
	int ARRAY[ROWS*LEN]={
    	1,3,5,7,
    	9,11,13,15,
    	17,19,21,23
    };

	void dump()
	{
		for(int i = 0; i <3; i++)
		{
		for(int j = 0; j < 4; j++)
		{
			cout<<ARRAY[j+i*4]<<'\t';	
		}
		cout<<endl;
	}
	cout<<"傳回二維陣列第 1 列，第 2 行的元素值 ";
	cout<<endl;
	cout<<"  get(1,2)="<<ARRAY[6]; 
	cout<<endl;
	
	cout<<"設定二維陣列第 2 列，第 2 行的元素值為 100 ";
	cout<<endl;
	for(int i = 0; i <3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			ARRAY[10]=100;
			cout<<"  set("<<i<<","<<j<<","<<ARRAY[j+i*4]<<")"<<'\t';	
		}
		cout<<endl;
	}
	
}

	int main()
	{
		cout<<"將陣列內容印出，方便除錯";
		cout<<endl;
		dump();
		return 0;
	}
