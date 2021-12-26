#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
int main()
{
	printf("请输入您的pin验证身份\n");
	string in;
	srand((unsigned)time(NULL));
	cin>>in;
	//输入密码 
	int timeout=rand()%300+500;
	//随机数，用于欺骗用户 
	if(in=="742371"){
		system("color 2f");
		cout<<"密码正确，即将提权\n";
		
		
		cout<<"[";
		for(int i=0;i<20;i++)
		{
			Sleep(timeout);
			cout<<"*";
		}
		cout<<"]\n";
		//这里执行20次，随机时间加载，调用timeout变量 
		system("upset");
		//运行Nsudo
		return 0;
	}else{
		for(int i=4;i>=1;i--)//表示为错误次数，因为之前已经错误1次，i小于等于4表示一共四次机会，还剩4-1=3次 
		{
			cout<<"密码错误，您还有"<<i<<"次机会"<<endl;
			system("color 6f");
			cin>>in; 
			if(in=="742371")
			{
				system("color 2f");
		cout<<"密码正确，即将提权\n";
		cout<<"[";
		for(int i=0;i<20;i++)
		{
			Sleep(timeout);
			cout<<"*";
		}
		cout<<"]\n";
		system("upset");
		return 0;
			} 
		}
		cout<<"您的机会使用完毕！为了确保用户安全，即将锁定您的账户\n";
		system("color 4f"); 
		system("shutdown -s -t 100 -c 如果您不保存您未保存的工作，他们将会丢失\n");
		Sleep(2000);
		return 0;
	}
	
	return 0;
}
