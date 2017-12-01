#include <iostream>
using namespace std;

int insert_sort(int *a, int length )
{
    for(int i=1; i<length; i++)
    {
		int temp = a[i];
		int j = i - 1;
		while (j>=0 && a[j]>temp)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;

    }
    return 0;
}

int main()
{
    int s[10];
    for(int i=0;i<10;i++)
    {
        s[i]=10-i;
    }
	cout << "before sort: ";
	for (int i = 0; i<10; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;

    insert_sort(s,10);

	cout << "after sort: ";
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}