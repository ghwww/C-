#include<stdio.h>
#include<string.h>
    struct wtw
    {
    char name[100];
    int age;
    double π;
    };
int main()
{
    struct wtw w={"吴挺伟",20,3.1415926535};
    //strcpy(w.name,"吴挺伟");
    //w.age=20;
    
    struct wtw *pa=&w;
    printf("指针打印：%s %d %.10lf\n",(*pa).name,(*pa).age,(*pa).π);
    printf("指针箭头打印：%s %d %.10lf\n",pa->name,pa->age,pa->π);
    printf("%s %d %.10lf\n",w.name,w.age,w.π);
    printf("Hello world!");
    return 0;
}