#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
int main()
{
	printf("����������pin��֤���\n");
	string in;
	srand((unsigned)time(NULL));
	cin>>in;
	//�������� 
	int timeout=rand()%300+500;
	//�������������ƭ�û� 
	if(in=="742371"){
		system("color 2f");
		cout<<"������ȷ��������Ȩ\n";
		
		
		cout<<"[";
		for(int i=0;i<20;i++)
		{
			Sleep(timeout);
			cout<<"*";
		}
		cout<<"]\n";
		//����ִ��20�Σ����ʱ����أ�����timeout���� 
		system("upset");
		//����Nsudo
		return 0;
	}else{
		for(int i=4;i>=1;i--)//��ʾΪ�����������Ϊ֮ǰ�Ѿ�����1�Σ�iС�ڵ���4��ʾһ���Ĵλ��ᣬ��ʣ4-1=3�� 
		{
			cout<<"�������������"<<i<<"�λ���"<<endl;
			system("color 6f");
			cin>>in; 
			if(in=="742371")
			{
				system("color 2f");
		cout<<"������ȷ��������Ȩ\n";
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
		cout<<"���Ļ���ʹ����ϣ�Ϊ��ȷ���û���ȫ���������������˻�\n";
		system("color 4f"); 
		system("shutdown -s -t 100 -c �������������δ����Ĺ��������ǽ��ᶪʧ\n");
		Sleep(2000);
		return 0;
	}
	
	return 0;
}
