#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

//function to find whether the two strings are anagram or not
bool areAnagram(char* str1, char* str2)
{
	int count[NO_OF_CHARS] = { 0 };
	int i;

	for (i = 0; str1[i] && str2[i]; i++) {
		count[str1[i]]++;
		count[str2[i]]--;
	}

	if (str1[i] || str2[i])
		return false;
	for (i = 0; i < NO_OF_CHARS; i++)
		if (count[i])
			return false;
	return true;
}

//function to make substring str from str1 of length str2 and then calling anagram function
void slide(char* str1, char* str2)
{
	int M = strlen(str1);
	int N = strlen(str2);

	/* A loop to slide str1 one by one */
	for (int i = 0; i <= M-N; i++) {
		int j;
		char str[M+1];

		/* For current index i, make substring str of length str2 */
		for (j=0;j<N;j++)
            str[j]=str1[i+j];
        str[M]='\0';

		if (areAnagram(str2,str))
            cout<<"substring "<<str<<" present at index "<<i<<endl;
	}
}

int main()
{
	char str1[] = "XYYZXZYZXXYZ";
	char str2[] = "XYZ";
	slide(str1,str2);
	return 0;
}

