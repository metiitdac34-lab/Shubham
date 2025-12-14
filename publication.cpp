#include <cstdio>
//#include <string>

class Publication 
{

    public:
   char title[50];
   float price;

    void Getdata()
        {
            printf("Enter the title:\n");
            scanf("%s",title);
            printf("Enter the price:\n");
            scanf("%f",price);
        }
    void Putdata()
    {
        printf("Title:%s\n",title);
        printf("Price:%f\n",price);
    }
};

class Book:public Publication
{
    public:
        int pages;
    
    void Getdata()
        {
            Publication::Getdata();
            printf("\nEnter page number:");
            scanf("%d",&pages);
        }

    void Putdata()
        {
            Publication::Putdata();
            printf("\npages:%d\n",pages);
        }
};

class Tape:public Publication
{
    public:
        int length;

    void Getdata()
        {   
            Publication::Getdata();
            
            printf("Enter length of tape:\n");
            scanf("%d",&length);
        }
    
    void Putdata()
        {
            Publication::Putdata();
            printf("Enter Tape length:%d\n",length);

        }
};

int main()
{
    Book obj1;
    Tape obj2;

    printf("Enter Book Details:\n");
    obj1.Getdata();
    printf("Enter Tape Details:\n");
    obj2.Getdata();
    printf("Book Details:\n");
    obj1.Putdata();
    printf("Tape Details:\n");
    obj2.Putdata();
}

