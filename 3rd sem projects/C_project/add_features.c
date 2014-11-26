#include<stdio.h>
int main(){
    char mob1[20]="APPLE";
    char mobile_brand1[20];
    char mobile_brand[20];
    char model[20];
    int b_slno=0;
    int m_slno=0;
    int i=1;
    int n=1;
    FILE *b;

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
                goto H;
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
    H:
    printf("Enter Model(all in caps)\n");
    scanf("%s",model);
    if(!strcmp(mobile_brand,mob1)){
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_Apple_models.txt","r");
        fscanf(b,"%d\n",&m_slno);
        printf("Model SLNO =%d\n",m_slno);
        fclose(b);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_APPLE.txt","r");
        if(m_slno!=0)
            for(i=1;i<=m_slno;i++){
                fscanf(b,"%s",&mobile_brand1);
                if(!strcmp(model,mobile_brand1)){
                    fclose(b);
                    return 0;
                    break;
                }
            }
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_APPLE.txt","a");
        fprintf(b,"%s\n",model);
        fclose(b);
        b=fopen(model,"w");
        add_feature();
        fprintf(b,"%d\tt%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",feature.price,feature.os,feature.display_type,feature.display_size,feature.type_of_moble,feature.camera,feature.ram,feature.internal_memory,feature.expandable,feature.network,feature.supported_network,feature.sensors,feature.waranty,feature.accessories);
        b=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/tablet_no_of_APPLE_models.txt","w");
        m_slno++;
        fprintf(b,"%d\n",m_slno);
        fclose(b);
    }
    return 0;
}
