#include<iostream>
using namespace std;

//void passTest(int * array);

int main()
{
    int num1 = 0, num2 = 10, result;

    num1++;
    cout << num1 << " " << num2 << " " << result;
    return 0;
    /*
    int array[3] = {1,2,3};
    int *ptrArray[3];
    for(int i = 0; i < 3; i++)
    {
        ptrArray[i] = &array[i];
    }

    passTest(*ptrArray);
    return 0;*/
}

/*void passTest(int *array)
{
    for(int i = 0; i < 3; i++)
    {
        cout << array[i] << endl;
    }
}*/