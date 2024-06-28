#include<stdio.h>
#include<string.h>
#define NIN 5

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};



main()
{

	struct profile data[NIN] = {
		{"a",1,1,1,"A"},
		{"b",2,2,2,"B"},
		{"c",3,3,3,"O"},
		{"d",4,4,4,"AB"},
		{"e",2,2,2,"AB"}
	};

	struct profile* p;
	int i;

	for (p=data,i = 0; i < NIN; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s[[%d”N%dŒŽ%d“ú¶[[ŒŒ‰tŒ^%sŒ^\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}

	}

}