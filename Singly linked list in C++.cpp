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

void INIT_LIST(LIST **begin);

void PRINT(LIST *ptr);

void ADD_in_BEGIN(LIST **begin);

void ADD_in_AND(LIST **begin);

void SORT_LISTS_from_smallest_to_largest(LIST **begin);

void DELETE(LIST **begin);
    

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
    (*begin)->ELEMENT.element = 1;
    (*begin)->next = NULL;
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

void ADD_in_BEGIN(LIST **begin)
{
    LIST *T = new LIST;
    T->ELEMENT.element = rand() % 15 + 1;
    
    if(*begin == NULL)
    {
        T->next = NULL;
        *begin = T;
        return;
    }
    
    
    
    T->next = *begin;
    *begin = T;
}

void SORT_LISTS_from_smallest_to_largest(LIST **begin)
{
    LIST *ins1 = new LIST;
    LIST *ins2 = new LIST;
    
    ins1 = begin;
    ins2 = begin->next;
    
    for(int i(0); i < 5; i++)
    {
        if((*ins1)->ELEMENT.element > (*ins2)->ELEMENT).element)
        {
            //swap(ins1, ins2);
        }
        ins1 = ins2;
        ins2 = ins2->next;
    }

void ADD_in_AND(LIST **begin)
{
    LIST *end = new LIST;
    end = *begin;
    for(int i(0); i <5; i++)
    {
        
        end = end->next;
        
    }
    LIST *T = new LIST;
    T->ELEMENT.element = rand() % 15 = 1;
    T->next = NULL;
    end->next = T;
    
}

void PRINT(LIST *ptr)
{
    LIST *PTR = ptr;
    int a(0);
    
    while(PTR)
    {
        a = PTR->ELEMENT.element;
        cout << a << " -> next" << endl;
        PTR = PTR->next;
        
    }
}

void DELETE(LIST **begin)
{
    if(begin == NULL)
    {
        return;
    }
    
    while(begin != NULL);
    {
        LIST *t = new LIST;
        t = *begin;
        begin = begin->next;
        delete t;
    }
    delete *begin;
    
}
