#include<stdio.h>
int PED();
int PES();
int XED();
int YED();
int main()
{
    printf("Welcome to calcuate the Elasticities\n");
    printf("-------------------------------------\n");
    printf("If you want calculate press the number,\n");
    printf("1- Price Elasticity of Demand\n");
    printf("2- Price Elasticity of Supply\n");
    printf("3- Income Elasticity of Demand\n");
    printf("4- Cross Elasticity of Demand\n");
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:PED();
        break;
        case 2:PES();
        break;
        case 3:YED();
        break;
        case 4:XED();
        break;
    }
}
int PED()
{
    float price1,units1,price2,units2,ped;
    printf("Enter previous price : ");
    scanf("%f",&price1);
    printf("Enter previous units : ");
    scanf("%f",&units1);
    printf("\nEnter second price : ");
    scanf("%f",&price2);
    printf("Enter second units : ");
    scanf("%f",&units2);
    if(price1!=price2){
        ped=((units2-units1)*price1)/((price2-price1)*units1);
        if(ped<0){
            ped=-1*ped;
        }
        printf("PED = %f\n",ped);
            if(ped==0){
                printf("Perfectly Inelastic");
            }else if(ped==1){
                printf("Unitary elastic");
            }else if(ped<1){
                printf("Inelastic\n");
                printf("Increase price --> increase profit\nDecrease price --> decrease profit\n");
            }else{
                printf("Elastic\n");
                printf("Increase price --> decrease profit\nDecrease price --> increase profit\n");
            }
            printf("\n");
    }else{
        printf("PED = infinite\n");
         printf("Perfectly Elastic");
    }
}
int PES()
{
    float price1,units1,price2,units2,pes;
    printf("Enter previous price : ");
    scanf("%f",&price1);
    printf("Enter previous units : ");
    scanf("%f",&units1);
    printf("\nEnter second price : ");
    scanf("%f",&price2);
    printf("Enter second units : ");
    scanf("%f",&units2);
    if(price1!=price2){
        pes=((units2-units1)*price1)/((price2-price1)*units1);
        printf("PES = %f\n",pes);
            if(pes==0){
                printf("Perfectly Inelastic");
            }else if(pes==1){
                printf("Unitary elastic");
            }else if(pes<1){
                printf("Inelastic\n");
                printf("products cannot be stored\n");
            }else{
                printf("Elastic\n");
                printf("products can be stored\n");
            }
            printf("\n");
    }else{
        printf("PES = infinite\n");
        printf("Perfectly Elastic");
    }
}
int YED()
{
    float income1,units1,income2,units2,yed;
    printf("Enter previous Income : ");
    scanf("%f",&income1);
    printf("Enter previous Units : ");
    scanf("%f",&units1);
    printf("\nEnter second Income : ");
    scanf("%f",&income2);
    printf("Enter second Units : ");
    scanf("%f",&units2);
    yed=((units2-units1)*income1)/((income2-income1)*units1);
    if(income1==income2){
        printf("YED = Infinite\n");
    }else{
        printf("YED = %f\n",yed);
    }
    if(yed<0){
        printf("Inferier Goods\n");
    }else{
        printf("Normal Goods\n");
    }
    if(yed<0){
            yed=-1*yed;
    }
    if(yed==0){
            printf("Perfectly Inelastic");
        }else if(yed==1){
            printf("Unitary elastic");
        }else if(yed<1){
            printf("Inelastic");
        }else if(yed>1 && income1!=income2){
            printf("Elastic");
        }else{
            printf("Perfectly Elastic");
        }
}
int XED()
{
    float pricey1,unitsx1,pricey2,unitsx2,xed;
    printf("Enter previous price of Y : ");
    scanf("%f",&pricey1);
    printf("Enter previous units of X : ");
    scanf("%f",&unitsx1);
    printf("\nEnter second price of Y : ");
    scanf("%f",&pricey2);
    printf("Enter second units of X : ");
    scanf("%f",&unitsx2);
    xed=((unitsx2-unitsx1)*pricey1)/((pricey2-pricey1)*unitsx1);
    if(pricey1==pricey2){
        printf("XED = Infinite\n");
    }else{
        printf("XED = %f\n",xed);
    }
    if(xed<0){
        printf("Complementary Goods\n");
    }else{
        printf("Substitude Goods\n");
    }
    if(xed<0){
            xed=-1*xed;
    }
    if(xed==0){
            printf("Perfectly Inelastic");
        }else if(xed==1){
            printf("Unitary elastic");
        }else if(xed<1){
            printf("Inelastic");
        }else if(xed>1 && pricey1!=pricey2){
            printf("Elastic");
        }else{
            printf("Perfectly Elastic");
        }
}
