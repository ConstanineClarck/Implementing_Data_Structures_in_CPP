/******************************************************************************

Односвязный список 


*******************************************************************************/
#include <iostream>
//#include <conio.h>
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

void INIT_LIST(LIST **begin);

void PRINT(LIST *ptr);

void ADD_in_BEGIN(LIST **begin);

int main()
{
    setlocale(LC_ALL, "RUssian");
    srand(time(NULL));
    
    //cout << "Pleas input N! NOW";
    //cout << endl;
    //int N(15);
    // functionOfINPUT();
    
    
    
    LIST *begin = NULL;
    
    INIT_LIST(&begin);
    ADD_in_BEGIN(&begin);
    PRINT(begin);
    
    

    return 0;
}

void INIT_LIST(LIST **begin)
{
    (*begin) = new LIST;
    (*begin)->ELEMENT.element = 0;
    LIST *end = new LIST;
    end = *begin;
    
    for(int i(0); i < 5; i++)
    {
        end->next = new LIST;
        end = end->next;
        end->ELEMENT.element = rand() % 15;
        end->next = NULL;
    }
    
}

void PRINT(LIST *ptr)
{
    LIST *PTR = ptr;
    int a(0);
    
    do
    {
        a = PTR->ELEMENT.element;
        cout << a << " -> next" << endl;
        PTR = PTR->next;
        
    }while(a <= 15);
}

void ADD_in_BEGIN(LIST **begin)
{
    LIST *T = new LIST;
    T->ELEMENT.element = rand() % 15 + 1;
    T->next = *begin;
    *begin = T;
}
