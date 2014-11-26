#include<stdio.h>
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
void view_mobile(){
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
    printf("mobile_brand SLNO =%d\n",b_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SONY_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_SAMSUNG_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_MOTOROLA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        fclose(b);
    }
    if(!strcmp(mobile_brand,mob1)){
        char MOD;
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_NOKIA_MOBILE_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/NOKIA_MOBILE.txt","r");
        for(i=0;i<m_slno;i++){
            fscanf(b,"%s\n",MOD);
            printf("%s\n",MOD);
        }
        fclose(b);
        printf("Enter the model to se specs\n");
        scanf("%s",model);
        b=fopen(model,"r");
        fscanf(b,"%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",&feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        fclose(b);
    }
    else
        printf("nothing\n");

    printf("Enter 1 if u want to VIEW another MOBILE");
    scanf("%d",&i);
    if(i==1)
        view_mobile();
}
void main(){
        view_mobile();
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
