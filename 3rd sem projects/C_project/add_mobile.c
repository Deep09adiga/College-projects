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
    printf("mobile_brand SLNO =%d\n",b_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("nothing\n");

    printf("Enter 1 if u want to add another mobile");
    scanf("%d",&i);
    if(i==1)
        goto H;
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
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_tablet_brandss.txt","r");
    fscanf(b,"%d\n",&b_slno);
    printf("tablet_brands SLNO =%d\n",b_slno);
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
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_APPLE_TABLET_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("Model SLNO =%d\n",m_slno);
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
        printf("nothing\n");

    printf("Enter 1 if u want to add another TABLET");
    scanf("%d",&i);
    if(i==1)
        goto H;
}
void main(){
    add_mobile();
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
