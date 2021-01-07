#include<cstdio>
#include<cstring>
#include < unordered_map >
#include<algorithm>
using namespace std;
const int N = 30;
const int M = 50;
struct name   //���ֽṹ��
{
	char s[30];
	int v;   //ascll��ֵ֮��
} NAME[N];
struct hashs   //��ϣ��ṹ��
{
	char name[30];   //����
	int key;   //�ؼ���
	int sum;   //��ͻ����
} HASH[M];
void init()   //��ʼ��
{
	int i, j, sum;
	for (i = 0; i<N; i++)
	{
		NAME[i].v = 0;
	}
	strcpy(NAME[0].s, "houhuiyu");//�����
	strcpy(NAME[1].s, "liutongxuan");//��ͬ��
	strcpy(NAME[2].s, "liujiyuan");//����Դ
	strcpy(NAME[3].s, "wuzhe");//����
	strcpy(NAME[4].s, "yaofanqi");//Ҧެ�
	strcpy(NAME[5].s, "sunchuwen");//����F
	strcpy(NAME[6].s, "songmingxue");//����ѩ
	strcpy(NAME[7].s, "zhangyongfei");//���·�
	strcpy(NAME[8].s, "zhangnanshuang");//���ˬ
	strcpy(NAME[9].s, "xumingyan");//������
	strcpy(NAME[10].s, "zengguangxun");//����Ѳ
	strcpy(NAME[11].s, "liyong");//����
	strcpy(NAME[12].s, "liwenyao");//������
	strcpy(NAME[13].s, "lichenchuangyi");//��´�һ
	strcpy(NAME[14].s, "yangbinxu");//�����
	strcpy(NAME[15].s, "sangtianqi");//ɣ����
	strcpy(NAME[16].s, "lianghongting");//������
	strcpy(NAME[17].s, "wangfuqiang");//����ǿ
	strcpy(NAME[18].s, "wanghongyuan");//����Զ
	strcpy(NAME[19].s, "wangtongshu");//��ͯ�
	strcpy(NAME[20].s, "wangpeng");//����
	strcpy(NAME[21].s, "aizhanpeng"); //��չ��
	strcpy(NAME[22].s, "yuanyuan");//Ԭ��
	strcpy(NAME[23].s, "hexinlin");//��н��
	strcpy(NAME[24].s, "xinghongxuan");//�Ϻ���
	strcpy(NAME[25].s, "guofanshu");//���M�
	strcpy(NAME[26].s, "chenxuyan");//������
	strcpy(NAME[27].s, "hanyutao");//������
	strcpy(NAME[28].s, "lushiteng");//¹����
	strcpy(NAME[29].s, "huangqichang");//������
	for (i = 0; i<N; i++)
	{
		sum = 0;
		for (j = 0; j<strlen(NAME[i].s); j++)
		{
			sum = sum + (NAME[i].s[j] - 'a');
		}
		NAME[i].v = sum;   //������ĸascll��֮��
	}
}
void creathash()    //�����ϣ��
{
	int i;
	int n, m, counts;
	for (i = 0; i<M; i++)
	{
		strcpy(HASH[i].name, "0");
		HASH[i].key = 0;
		HASH[i].sum = 0;
	}
	for (i = 0; i<N; i++)
	{
		counts = 1;
		n = (NAME[i].v) % 47;
		m = n;
		if (HASH[n].sum == 0)   //����ͻ
		{
			strcpy(HASH[n].name, NAME[i].s);
			HASH[n].key = NAME[i].v;
			HASH[n].sum = 1;
		}
		else   //��������˳�ͻ
		{
			while (1)
			{
				m = (m + 1) % 47;
				counts++;
				if (HASH[m].key == 0)
				{
					break;
				}
			}
			strcpy(HASH[m].name, NAME[i].s);
			HASH[m].key = NAME[i].v;
			HASH[m].sum = counts;
		}
	}
	return;
}
void searchhash()
{
	char name[30];
	int i, sum, n, m, counts;
	sum = 0;
	n = 0;
	counts = 1;
	printf("������Ҫ�����˵�����ƴ����\n");
	scanf("%s", name);
	for (i = 0; i<strlen(name); i++)
	{
		sum += (name[i] - 'a');
	}
	n = sum % 47;
	m = n;
	if (strcmp(HASH[n].name, name) == 0)
	{
		printf("����:%s �ؼ���:%d ���ҳ���:1\n", HASH[n].name, sum);
	}
	else if (HASH[n].sum == 0)
	{
		printf("û���ҵ�������¼������\n");
	}
	else
	{
		while (1)
		{
			m = (m + 1) % 47;
			counts++;
			if (strcmp(HASH[m].name, name) == 0)
			{
				printf("����:%s �ؼ���:%d ���ҳ���:%d\n", HASH[m].name, sum, counts);
				break;
			}
			if (HASH[m].key == 0)
			{
				printf("û���ҵ�������¼������\n");
				break;
			}
		}
	}
}
void displayhash()   //��ʾ��ϣ��
{
	int i, sum;
	float ave;
	ave = 0.0;
	sum = 0;
	printf("\n��ַ\t�ؼ���\t\t��������\t����\n");
	for (i = 0; i<M; i++)
	{
		printf("%d", i);
		printf("\t%d", HASH[i].key);
		printf("\t\t%d", HASH[i].sum);
		printf("\t%s", HASH[i].name);
		printf("\n");
	}
	for (i = 0; i<M; i++)
	{
		sum += HASH[i].sum;
	}
	ave = ((sum)*1.0) / N;
	printf("\n");
	printf("ƽ�����ҳ���ASL(%d)=%.3lf\n", N, ave);
	return;
}
void display()
{
	int i;
	for (i = 0; i<30; i++)
	{
		printf("\n\t�ؼ���\t\t����\n");
		printf("\t%d", NAME[i].v);
		printf("\t%s", NAME[i].s);
	}
	return;
}
int menu()
{
	printf("\n\n");
	printf("\t��������ƴ����ϣ��չʾ����ϵͳ\n");
	printf("\t1.չʾ����ƴ���͹ؼ���\n");
	printf("\t2.չʾ��ϣ��\n");
	printf("\t3.���ҹؼ���\n");
	printf("\t4.�˳�\n");
	printf("\n");
	printf("\n");
	return 0;
}
int main()
{
	int n;
	int flag;
	flag = 1;
	while (1)
	{
		menu();

		if (flag == 1)
		{
			init();
			creathash();
			flag = 0;
		}
		scanf("%d", &n);
		getchar();
		if (n<1 || n>4)
		{
			printf("�����������������룡����\n");
			continue;
		}
		else
		{
			if (n == 1)
			{
				printf("չʾ��׼��������ƴ����������ɵĹؼ��֣�\n");
				display();
			}
			else if (n == 2)
			{
				displayhash();
			}
			else if (n == 3)
			{
				searchhash();
			}
			else if (n == 4)
			{
				return 0;
			}
		}

	}
	return 0;
}
