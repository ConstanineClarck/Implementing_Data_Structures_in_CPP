/******************************************************************************

Односвязный список


*******************************************************************************/
#include <iostream>
#include <conio.h>
#include <time.h>
//#include <random>

using namespace std;

struct key
{
    int element;
};

struct LIST 
{
    key ELEMENT;
    LIST *next;
};

void PRINT(LIST *ptr);


int main()
{
    setlocale(LC_ALL, "RUssian");
    srand(time(NULL));
    
    //cout << "Pleas input N! NOW";
    //cout << endl;
    //int N(15);
    // functionOfINPUT();
    
    
    
    LIST *begin = NULL;
    begin = new LIST;
    begin->ELEMENT.element = 0;
    begin->next = new LIST;
    LIST *end = new LIST;
    end = begin->next;
    
    
    for(int i(0); i < 15; i++)
    {
        end->ELEMENT.element = rand();
        end->next = new LIST;
        end = end->next;
    }
    
    PRINT(begin);

    return 0;
}

void PRINT(LIST *ptr)
{
    LIST *PTR = ptr;
    while(PTR)
    {
        int a = PTR->ELEMENT.element;
        cout << a << " -> next" << endl;
        PTR = PTR->next;
    }
}
