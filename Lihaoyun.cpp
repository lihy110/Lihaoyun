#include <stdio.h>                                                                     //����  
#include <string>                                                                      //���� 
#include <iostream>                                                                    //����
using namespace std;                                                                   
int main() {
    int i;                                                                             //����i
    char s[300],t[300];                                                                //����s��t
	cout<<"pleace input one string:";                                                  //������ʾ
	cin>>s;                                                                            //����
    for(i = 0; s[i]; ++i) {                                                            //for��ѭ��ִ��
        if(s[i] >= 'v'&&s[i]<='z'||s[i]>='V'&&s[i]<='Z') t[i] = s[i]-21;               //�������ĸ����'v'<=s[i]<='Z'��'V'<=s[i]<='Z'��ôs[i]�з��ϵ���ĸ-21�����������һ�����
        else if (s[i]>='a'&&s[i]<='u'||s[i]>='A'&&s[i]<='Z') t[i] = s[i] + 5;          //�������ĸ����'a'<=s[i]<='u'��'A'<=s[i]<='U'��ôs[i]�з��ϵ���ĸ+5�����������һ�����
		else t[i]=s[i];                                                                //����������ϵ���ֱ�����
		
    }
    t[i] = '\0';
    printf("%s\n",t);                                                                  //���
    return 0;
}