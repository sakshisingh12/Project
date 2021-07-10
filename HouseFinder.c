#include <stdio.h>
#include <string.h> 
int m,y;
void choices(int b,int pri);

int main()
{
    int option ,i,j ,a =10, b ,pri,l;
    int house[10] ;
    char username[15], password[12], imp[3];
    
    printf("\t\t\t ------ welcome to our society ------\n");
    
    printf("\t\t\t        SSRSS society\n ");
    printf("option 1 :-if you are buyer\n option 2 :- if you are dealer ");
    printf("\npress your option here :- ");
    scanf("%d",&option);
 for(l=1;l<3;l++){  
    option=l;
    switch(option)
    {
        case 1:
            printf("Hi, sir kindly login here \n");
            //for five time//
            for(i=1;i<5;i++)
        {
             if(i<4)
             {
                
                printf("LOGIN ID :- ");
                scanf("%s",&username);
                printf("password:-");
                scanf("%s",&password);
                if(strcmp(username,"rohit")==0)
                { 
                 if(strcmp(password,"11064")==0){
 
                     printf("\n\aWelcome.Login Success!"); 
                     
                     
                     //now showing houses//
            printf("\nsir at this time we have %d houses completed",a);
            printf("\nplease add your requirement");
            printf("\nhow many BHK you want :-");
            scanf("%d",&b);
            printf("what's the maximum budget of your(in lakhs):-");
            scanf("%d",&pri);
            choices(b,pri);
            break;
            
                 }
                 else
                     printf("\n\awrong password\n"); 
                    
            
                }
                else
                printf("\n\aUser doesn't exist kindly reenter your id\n"); 
                
             }
             else{
                printf("\a\ayou are looking like a suspesious person ,soory kindly revisit \n");
                break;
             }
        
    
            }
            
        break;
    
    
    //case 2 for dealer//
        case 2:
        printf("\nNow dealer will login  here  ");
        for(j=1;j<5;j++)
        {
            if(j<4)
            {
                
                printf("\nLOGIN ID :- ");
                scanf("%s",&username);
                printf("password:-");
                scanf("%s",&password);
                if(strcmp(username,"sourya")==0)
                { 
                    if(strcmp(password,"11068")==0){
 
                     printf("\n\aWelcome.Login Success!"); 
                     printf("\nhi,dealer we find rohit who is interesting in house number %d and ready to give %d lakhs for that",m,y);
                     printf("\nthis is rohit's phone number :- 7665597882");
                     printf("\nif you are interesting in this deal write yes otherwise no:");
                     scanf("%s",&imp);
        break;
                    }
                    else
                    printf("\n\awrong password kindly reenter password\n"); 
                
                }
                else
                printf("\n\aid doesn't exist kindly reenter user id\n "); 
                
            }
            else{
                printf("\a\ayou are looking like a suspesious person ,soory kindly revisit \n");
                break;
            }
                } 
                
        break;
        
                
        default :
        printf("there are only two options either 1 or 2 pls 'revisit' ");
        break;
        
        
        
    }
}
if(strcmp(imp,"no")==0){
    printf("\n\n\a\asorry, buyer dealer is say %s for this deal",imp);
}
else 
    printf("\n\n\a\adealer is say %s for this deal",imp);
    return 0;
}

void choices(int b,int pri)
{
    int s;
    char fur[15];
    if(b==2 && pri <= 40)
    {
        printf("do you want fully furnished, half furnished or unfurnished:-");
        scanf("%s",&fur);
        if(strcmp(fur,"fullyfurnished")==0)
        {
         printf("\n\n------we have two houses in this budget--------");
         printf("\n\t this is house number 5");
         printf("\n\tarea = 624 square foot ");
         printf("\n \tfully furnished,one floor house,east facing , 2BHK, fully furnished kitchen\n\twashroom attached with both bedroom and nicely painted with blue colour\n\ta drawing room with a LED t.v.and dining table ");
         printf("\n\t## price :- 30 lakh ##");
         printf("\n\n\tthis is house number 6");
         printf("\n\tarea = 724 square foot ");
         printf("\n\tfully furnished,one floor house,north facing , 2BHK, fully furnished kitchen\n\twashroom attached with both bedroom and nicely painted with navy colour\n\ta drawing room with a LED t.v.and sofa ");
         printf("\n\t## price :- 25 lakh ##");
        }
        else {
            printf("\n\n-----we have two houses in this budget--------");
            printf("\n\tthis is house number 7 ");
            printf("\n\tarea = 624 square foot ");
            printf("\n\thalf furnished ,one floor house , washroom of indian style\n\t2BHK,south facing, fully furnished kitchen \n\tunfurnished drawing room and  fully painted  ");
            printf("\n\t## price :- 20 lakh ##");
            printf("\n\n\tthis is house number 8");
            printf("\n\tarea = 534 square foot ");
            printf("\n\tunfurnished ,one floor house , washroom of indian style\n\t2BHK,north facing, half furnished kitchen \n\tunfurnished drawing room and walls are plastererd");
            printf("\n\t## price :- 18 lakh ##");
        }
}
    if(b==3 && pri >40){
        if(pri>50){
            printf("-------we have two luxury homes in your budget------ ");
            printf("\n\tthis is house number 1 ");
            printf("\n\tfully furnished, ceiled walls ,having a 20x20 swimming pool\n\t washroom of western style are attached with every room \n\tpersonal car parking area, whole house is fashioned by italian tiles");
            printf("\n\tdrawing room with sofa and dining table\n\t led t.v in each room and also in drawing room ");
            printf("\n\tarea =1000 square feet");
            printf("\n\t## price=60 lakhs ##");
            
            printf("\n\n\tthis is house number 2 ");
            printf("\n\tfully furnished, ceiled walls ,having a 20x20 swimming pool\n\twashroom of western style are attached with every room \n\tpersonal car parking area, whole house is fashioned by gray marbles tiles");
            printf("\n\tdrawing room with sofa and dining table\n\t led t.v in one room and in drawing room ");
            printf("\n\tarea =1000 square feet");
            printf("\n\t## price=55 lakhs ##");           
            
            
        }
        else{
            printf("-------we have two houses in this budget-------");
            printf("\n\tthis is house number 3 ");
            printf("\n\tfully furnished, ceiled walls ,having a 20x20 swimming pool\n\twashroom of western style are attached with every room \n\twhole house is fashioned by marbles tiles");
            printf("\n\tdrawing room with sofa and dining table\n\tled t.v in  drawing room ");
            printf("\n\tarea =1000 square feet");
            printf("\n\t## price=50 lakhs ##");
            
            printf("\n\n\tthis is house number 4 ");
            printf("\n\tfully furnished, ceiled walls ,having a 20x20 swimming pool\n\twashroom of western style are attached with every room \n\twhole house is fashioned by marbles tiles");
            printf("\n\tdrawing room with sofa and dining table\n\tled t.v in  drawing room ");
            printf("\n\tarea =1000 square feet");
            printf("\n\t##price=45 lakhs ##");
            
        }
    }
    printf("\n\nif you are interesting in any of these , you can add the respective house by insert house no. here:-");
    scanf("%d",&m);
    printf("selection completly sucessful\n\a");
    printf("how much you can give for this house(in lakhs):-");
    scanf("%d",&y);
    
}

