#include<stdio.h>
struct mobile_features{
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
                goto J;
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
J:
    printf("Enter Model(all in caps\n");
    scanf("%s",model);
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Apple_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/APPLE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_APPLE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(mobile_brand,mob2)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/BlackBerry.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_BlackBerry_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob3)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/HTC.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/HTC.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_HTC_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob4)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Sony_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Sony.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Sony.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Sony_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob5)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Samsung_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Samsung.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Samsung.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Samsung_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Motorola_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Motorola.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Motorola.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Motorola_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(mobile_brand,mob7)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Nokia_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Nokia.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Nokia.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_Nokia_models.txt","w");
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
    char mob3[20]="HTC";
    char mob4[20]="SONY";
    char mob5[20]="SAMSUNG";
    char mob6[20]="MOTOROLA";
    char mob7[20]="MICROMAX";
    char mob8[20]="BSNL";
    char mob9[20]="ACER";
    char mob10[20]="ASUS";

    char brand1[20];
    char brand[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;
    FILE *m;
    H:
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_brands.txt","r");
    fscanf(b,"%d\n",&b_slno);
    printf("Brand SLNO =%d\n",b_slno);
    fclose(b);
    printf("Enter Brand(all in caps)\n");
    scanf("%s",brand);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brand.txt","r");
    if(b_slno!=0)
        for(i=1;i<=b_slno;i++){
             fscanf(b,"%s",&brand1);
             if(!strcmp(brand,brand1)){
                goto J;
                fclose(b);
                break;
            }
        }
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_brand.txt","a");
    fprintf(b,"%s\n",brand);
    fclose(b);
    b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_brands.txt","w");
    b_slno++;
    fprintf(b,"%d\n",b_slno);
    fclose(b);
J:
    printf("Enter Model(all in caps\n");
    scanf("%s",model);
    if(!strcmp(brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Apple_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_APPLE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_APPLE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_APPLE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(brand,mob2)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_BlackBerry_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_BlackBerry.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_BlackBerry.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_BlackBerry_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(brand,mob3)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_HTC_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_HTC.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_HTC.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_HTC_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(brand,mob4)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Sony_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Sony.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Sony.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Sony_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(brand,mob5)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Samsung_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Samsung.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Samsung.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Samsung_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(brand,mob6)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Motorola_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Motorola.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Motorola.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Motorola_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if(!strcmp(brand,mob7)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Micromax_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Micromax.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Micromax.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Micromax_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(brand,mob8)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Bsnl_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Bsnl.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Bsnl.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Bsnl_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(brand,mob9)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Acer_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Acer.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Acer.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Acer_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    else if (!strcmp(brand,mob10)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Asus_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Asus.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&brand1);
                if(!strcmp(model,brand1)){
                    goto J;
                    fclose(b);
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_Asus.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Asus_models.txt","w");
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

int main(){
        int choice=1;
        do{
            printf("1.Add Mobile\n2.Add Tablet\n\n");
            scanf("%d",&choice);
            switch(choice){
                case 1: add_mobile();
                        break;
                case 2: add_tablet();
                    break;
                default: printf("Invalid Entry");
            }
            printf("Do you want to continue 1:yes 0:no\n");
            scanf("%d",&choice);
        }while(choice!=0);
}
