#include<stdio.h>
#include<string.h>
struct admin_unames{
    char user_id[50];
    char password[20];
}admin_uname;
struct user_unames{
    char user_id[50];
    char password[20];
}user_uname;
struct features{
    int price;
    char os[100];
    char display_type[100];
    char display_size[10];
    char type_of_moble[100];
    char camera[100];
    char ram[10];
	char internal_memory[10];
	char expandable[10];
	char network[5];
	char supported_network[100];
	char sensors[100];
	char waranty[10];
	char accessories[100];
}feature;
int main(){
    int choice,n,i;
    A:
    printf("******************************");
    printf("\t\t\n1. Admin\t\t\n2. Guest\t\t\n3: Exit\n");
    printf("******************************");
    scanf("%d",&n);
    choice=login(n);
    switch(choice){
        case 1:   B:
                printf("\t\t\n1.Add Mobile\t\t\n2.Add Tablet\n\n");
                scanf("%d",&choice);
                while(choice!=0){
                    switch(choice){
                        case 1: add_mobile();
                            break;
                        case 2: add_tablet();
                        break;
                default: printf("\t\t\nInvalid Entry");
            }
            printf("\t\t\nDo you want to continue 1:yes 0:no\n");
            scanf("%d",&choice);
            if(choice==1)
                goto B;
                }
            break;
    case 2:
        D:
        printf("\t\t\n1:Mobiles\t\t\n2:Tablets\n\n");
        scanf("%d",&choice);
        while(choice!=0){
            switch(choice){
                case 1: view_mobile();
                        break;
                case 2: view_tablet();
                        break;
                default:printf("\t\t\nInvalid Entry\n");
            }
            printf("\t\t\nDo you want to continue 1:yes 0:No\n");
            scanf("%d",&choice);
            if(choice==1)
                goto D;
        }
        break;
    case 3:break;
    default:printf("\t\t\nInvalid choice\n");
    }
    return 0;
}
void add_mobile(){
    char mob1[20]="APPLE";
    char mob2[20]="BLACKBERRY";
    char mob3[20]="HTC";
    char mob4[20]="SONY";
    char mob5[20]="SAMSUNG";
    char mob6[20]="MOTOROLA";
    char mob7[20]="NOKIA";
    char mobile_brand1[20];
    char mobile_brand[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;
    FILE *m;
    H:
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_mobile_brands.txt","r");
    fscanf(b,"%d\n",&b_slno);
    fclose(b);
    printf("Enter mobile_brand(all in caps)\n");
    scanf("%s",mobile_brand);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/mobile_brand.txt","r");
    if(b_slno!=0)
        for(i=1;i<=b_slno;i++){
             fscanf(b,"%s",&mobile_brand1);
             if(!strcmp(mobile_brand,mobile_brand1)){
                goto mobile_brand_continue;
                fclose(b);
                break;
            }
        }
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/mobile_brand.txt","a");
    fprintf(b,"%s\n",mobile_brand);
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_mobile_brands.txt","w");
    b_slno++;
    fprintf(b,"%d\n",b_slno);
    fclose(b);
    mobile_brand_continue:
    printf("Enter Model(all in caps\n");
    scanf("%s",model);
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Apple_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Apple_mobile_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(mobile_brand,mob2)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_MOBILE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob3)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/HTC_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/HTC.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob4)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_MOBILE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob5)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_MOBILE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLA_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLA_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_MOBILE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob7)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_NOKIA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/NOKIA_MOBILE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/NOKIA_MOBILE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_NOKIA_MOBILE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else
        printf("\t\t\n Invalid model\n");

    printf("Enter 1 if u want to add another mobile");
    scanf("%d",&i);
}
void add_tablet(){
    char mob1[20]="APPLE";
    char mob2[20]="BLACKBERRY";
    char mob3[20]="SONY";
    char mob4[20]="SAMSUNG";
    char mob5[20]="MOTOROLA";
    char mob6[20]="MICROMAX";
    char mob7[20]="MICROMAX";
    char mob8[20]="ACER";
    char mob9[20]="ASUS";
    char tablet_brands1[20];
    char tablet_brands[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;
    FILE *m;
    H:
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_tablet_brands.txt","r");
    fscanf(b,"%d\n",&b_slno);
    fclose(b);
    printf("Enter tablet_brands(all in caps)\n");
    scanf("%s",tablet_brands);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brands.txt","r");
    if(b_slno!=0)
        for(i=1;i<=b_slno;i++){
             fscanf(b,"%s",&tablet_brands1);
             if(!strcmp(tablet_brands,tablet_brands1)){
                goto tablet_brands_continue;
                fclose(b);
                break;
            }
        }
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brands.txt","a");
    fprintf(b,"%s\n",tablet_brands);
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_tablet_brands.txt","w");
    b_slno++;
    fprintf(b,"%d\n",b_slno);
    fclose(b);
    tablet_brands_continue:
    printf("Enter Model(all in caps\n");
    scanf("%s",model);
    if(!strcmp(tablet_brands,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_APPLE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_APPLE_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(tablet_brands,mob2)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BLACKBERRY_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BLACKBERRY_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BLACKBERRY_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BLACKBERRY_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob3)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob4)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob5)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLA_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLA_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MICROMAX_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MICROMAX_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MICROMAX_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MICROMAX_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BSNL_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BSNL_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BSNL_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BSNL_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }

    else if(!strcmp(tablet_brands,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ACER_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ACER_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ACER_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ACER_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(tablet_brands,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ASUS_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ASUS_TABLET.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&tablet_brands1);
                if(!strcmp(model,tablet_brands1)){
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ASUS_TABLET.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ASUS_TABLET_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else
        printf("\t\t\nnothing\n");
}
int view_mobile(){
    char mob1[20]="APPLE";
    char mob2[20]="BLACKBERRY";
    char mob3[20]="HTC";
    char mob4[20]="SONY";
    char mob5[20]="SAMSUNG";
    char mob6[20]="MOTOROLA";
    char mob7[20]="NOKIA";
    char mobile_brand1[20];
    char mobile_brand[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;
    FILE *m;
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_mobile_brands.txt","r");
    fscanf(b,"%d\n",&b_slno);
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/mobile_brand.txt","r");
    for(i=0;i<b_slno;i++){
        fscanf(b,"%s\n",model);
        printf("%s\n",model);
    }
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/mobile_brand.txt","r");
    printf("Enter mobile_brand(all in caps)\n");
    scanf("%s",mobile_brand);
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Apple_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/HTC_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLLA_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_NOKIA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/NOKIA_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;

        }
        fclose(b);
    }
    else
        printf("nothing\n");
    return 1;
}
int view_tablet(){
    char mob1[20]="APPLE";
    char mob2[20]="BLACKBERRY";
    char mob3[20]="SONY";
    char mob4[20]="SAMSUNG";
    char mob5[20]="MOTOROLA";
    char mob6[20]="MICROMAX";
    char mob7[20]="MICROMAX";
    char mob8[20]="ACER";
    char mob9[20]="ASUS";
    char tablet_brand1[20];
    char tablet_brand[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;
    FILE *m;
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_tablet_brands.txt","r");
    fscanf(b,"%d\n",&b_slno);
    printf("tablet_brand SLNO =%d\n",b_slno);
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brand.txt","r");
    for(i=0;i<b_slno;i++){
        fscanf(b,"%s\n",model);
        printf("%s\n",model);
    }
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brand.txt","r");
    printf("Enter tablet_brand(all in caps)\n");
    scanf("%s",tablet_brand);
    if(!strcmp(tablet_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_APPLE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob2)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob3)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SONY_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob4)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/SAMSUNG_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob5)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MOTOROLA_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MICROMAX_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/MICROMAX_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob7)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BSNL_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BSNL_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    if(!strcmp(tablet_brand,mob8)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ACER_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ACER_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }if(!strcmp(tablet_brand,mob9)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_ASUS_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);

        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/ASUS_TABLET.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",model);
            printf("%s\n",model);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("Do you want to puchase\n1:yes\t0:no\n ");
        scanf("%d",&i);
        if(i==1){
            printf("\n Box price : %d\n",feature.price);
            printf("Vat(%4) : %d\n",((feature.price/100)*4));
            printf("Total price(inclusive of taces) : %d\n",(feature.price+((feature.price/100)*4)));return 0;
        }
        fclose(b);
    }
    else
        printf("nothing\n");
    return 1;
}
void add_feature(){
        printf("Enter the features\n");
        printf("ENter the price\n");
        scanf("%d",&feature.price);
        printf("Enter the operating system\n");
        scanf("%s",feature.os);
        printf("Enter the display type\n");
        scanf("%s",feature.display_type);
        printf("Enter the display size\n");
        scanf("%s",feature.display_size);
        printf("Enter the type of mobile\n");
        scanf("%s",feature.type_of_moble);
        printf("Enter the camera\n");
        scanf("%s",feature.camera);
        printf("Enter the ram size\n");
        scanf("%s",feature.ram);
        printf("Enter the Internal memory\n");
        scanf("%s",feature.internal_memory);
        printf("Enter the expandable memory\n");
        scanf("%s",feature.expandable);
        printf("Enter the etwork type\n");
        scanf("%s",feature.network);
        printf("Enter the Supported networked\n");
        scanf("%s",feature.supported_network);
        printf("Enter the sensors\n");
        scanf("%s",feature.sensors);
        printf("Enter the warranty\n");
        scanf("%s",feature.waranty);
        printf("Enter the Accessories\n");
        scanf("%s",feature.accessories);
}
int login(int n){
    int choice;
    switch(n){
        case 1: choice=admin_login();
                break;
        case 2: choice=2;
                break;
        case 3: choice=3;
                break;
    }
    return choice;
}
int admin_login(){
    char user_id[50];
    char password[20];
    printf("Enter User-ID\n");
    scanf("%s",user_id);
    printf("Enter Password\n");
    scanf("%s",password);
    FILE *f;
    f=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/admin.txt","r");
    fscanf(f,"\n%s\t\t%s\n",admin_uname.user_id,admin_uname.password);
    if(strcmp(password,admin_uname.password)==0 && strcmp(user_id,admin_uname.user_id)==0)
        return 1;
    else
        return 10;
}
