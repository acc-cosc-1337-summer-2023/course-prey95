#include "arrays.h"

int main()
{
    int SIZE = 5;
	int list[SIZE];
    ArrayList aList(list, SIZE);
    int temp = 0;
    int temp1 = 0;

    cout << "hello" << "\n";

    aList.Add(5);
    aList.Add(7);
    aList.Add(10);
    aList.Add(15);
    aList.Add(20);

    temp1 = aList.Get_First_Index_Of(5);
    cout << "first" << temp1 << "\n";

    aList.Delete(20);

    temp = aList.Get_First_Index_Of(20);
    cout << "second" << temp << "\n";

    return 0;
}