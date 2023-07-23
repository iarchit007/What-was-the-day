#include <stdio.h>
main()
{
    int i1,i2,i3,i4,i5,i6,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i7,i19,i20,i21,i22,i23,i24,i25,i26,i27,i28,i29,i30,i31,i32,i33,i34,i35,i36,i37,i38,i39,i40,i41,i42,i43;
    char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
    printf("Calculating the day on a specific date: ");
    printf("format:-dd/mm/yyyy\n");
    printf("Enter the date you want to find the day of: \n");
    printf("dd: ");
    scanf("%d",&i1);
    printf("mm: ");
    scanf("%d",&i2);
    printf("yyyy: ");   
    scanf("%d",&i3);
    printf("The date you entered is %d",i1)&&printf("/%d/",i2)&&printf("%d\n",i3);
    if(i3>=2000)
    {
        if(i2==1)
        {
            i4=(i3-2000)/4;
            i5=(i1+6+1+i4+(i3-2000))%7;
            if(i5==1)
            {
                printf("That day was Sunday");
            }
            if(i5==2)
            {
                printf("That day was Monday");
            }
            if(i5==3)
            {
                printf("That day was Tuesday");
            }
            if(i5==4)
            {
                printf("That day was Wednesday");
            }
            if(i5==5)
            {
                printf("That day was Thursday");
            }
            if(i5==6)
            {
                printf("That day was Friday");
            }
            if(i5==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==2)
        {
            i4=(i3-2000)/4;
            i6=(i1+6+4+i4+(i3-2000))%7;
            if(i6==1)
            {
                printf("That day was Sunday");
            }
            if(i6==2)
            {
                printf("That day was Monday");
            }
            if(i6==3)
            {
                printf("That day was Tuesday");
            }
            if(i6==4)
            {
                printf("That day was Wednesday");
            }
            if(i6=='5')
            {
                printf("That day was Thursday");
            }
            if(i6==6)
            {
                printf("That day was Friday");
            }
            if(i6==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==3)
        {
            i4=(i3-2000)/4;
            i7=(i1+6+4+i4+(i3-2000))%7;
            if(i7==1)
            {
                printf("That day was Sunday");
            }
            if(i7==2)
            {
                printf("That day was Monday");
            }
            if(i7==3)
            {
                printf("That day was Tuesday");
            }
            if(i7==4)
            {
                printf("That day was Wednesday");
            }
            if(i7==5)
            {
                printf("That day was Thursday");
            }
            if(i7==6)
            {
                printf("That day was Friday");
            }
            if(i7==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==4)
        {
            i4=(i3-2000)/4;
            i8=(i1+6+0+i4+(i3-2000))%7;
            if(i8==1)
            {
                printf("That day was Sunday");
            }
            if(i8==2)
            {
                printf("That day was Monday");
            }
            if(i8==3)
            {
                printf("That day was Tuesday");
            }
            if(i8==4)
            {
                printf("That day was Wednesday");
            }
            if(i8==5)
            {
                printf("That day was Thursday");
            }
            if(i8==6)
            {
                printf("That day was Friday");
            }
            if(i8==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==5)
        {
            i4=(i3-2000)/4;
            i9=(i1+6+2+i4+(i3-2000))%7;
            if(i9==1)
            {
                printf("That day was Sunday");
            }
            if(i9==2)
            {
                printf("That day was Monday");
            }
            if(i9==3)
            {
                printf("That day was Tuesday");
            }
            if(i9==4)
            {
                printf("That day was Wednesday");
            }
            if(i9==5)
            {
                printf("That day was Thursday");
            }
            if(i9==6)
            {
                printf("That day was Friday");
            }
            if(i9==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==6)
        {   
            i4=(i3-2000)/4;
            i10=(i1+6+5+i4+(i3-2000))%7;
            if(i10==1)
            {
                printf("That day was Sunday");
            }
            if(i10==2)
            {
                printf("That day was Monday");
            }
            if(i10==3)
            {
                printf("That day was Tuesday");
            }
            if(i10==4)
            {
                printf("That day was Wednesday");
            }
            if(i10==5)
            {
                printf("That day was Thursday");
            }
            if(i10==6)
            {
                printf("That day was Friday");
            }
            if(i10==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==7)
        {
            i4=(i3-2000)/4;
            i11=(i1+6+0+i4+(i3-2000))%7;
            if(i11==1)
            {
                printf("That day was Sunday");
            }
            if(i11==2)
            {
                printf("That day was Monday");
            }
            if(i11==3)
            {
                printf("That day was Tuesday");
            }
            if(i11==4)
            {
                printf("That day was Wednesday");
            }
            if(i11==5)
            {
                printf("That day was Thursday");
            }
            if(i11==6)
            {
                printf("That day was Friday");
            }
            if(i11==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==8)
        {
            i4=(i3-2000)/4;
            i12=(i1+6+3+i4+(i3-2000))%7;
            if(i12==1)
            {
                printf("That day was Sunday");
            }
            if(i12==2)
            {
                printf("That day was Monday");
            }
            if(i12==3)
            {
                printf("That day was Tuesday");
            }
            if(i12==4)
            {
                printf("That day was Wednesday");
            }
            if(i12==5)
            {
                printf("That day was Thursday");
            }
            if(i12==6)
            {
                printf("That day was Friday");
            }
            if(i12==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==9)
        {
            i4=(i3-2000)/4;
            i13=(i1+6+6+i4+(i3-2000))%7;
            if(i13==1)
            {
                printf("That day was Sunday");
            }
            if(i13==2)
            {
                printf("That day was Monday");
            }
            if(i13==3)
            {
                printf("That day was Tuesday");
            }
            if(i13==4)
            {
                printf("That day was Wednesday");
            }
            if(i13==5)
            {
                printf("That day was Thursday");
            }
            if(i13==6)
            {
                printf("That day was Friday");
            }
            if(i13==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==10)
        {
            i4=(i3-2000)/4;
            i14=(i1+6+1+i4+(i3-2000))%7;
            if(i14==1)
            {
                printf("That day was Sunday");
            }
            if(i14==2)
            {
                printf("That day was Monday");
            }
            if(i14==3)
            {
                printf("That day was Tuesday");
            }
            if(i14==4)
            {
                printf("That day was Wednesday");
            }
            if(i14==5)
            {
                printf("That day was Thursday");
            }
            if(i14==6)
            {
                printf("That day was Friday");
            }
            if(i14==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==11)
        {
            i4=(i3-2000)/4;
            i15=(i1+6+4+i4+(i3-2000))%7;
            if(i15==1)
            {
                printf("That day was Sunday");
            }
            if(i15==2)
            {
                printf("That day was Monday");
            }
            if(i15==3)
            {
                printf("That day was Tuesday");
            }
            if(i15==4)
            {
                printf("That day was Wednesday");
            }
            if(i15==5)
            {
                printf("That day was Thursday");
            }
            if(i15==6)
            {
                printf("That day was Friday");
            }
            if(i15==0)
            {
                printf("That day was Saturday");
            } 
        }
        if(i2==12)
        {
            i4=(i3-2000)/4;
            i16=(i1+6+6+i4+(i3-2000))%7;
            if(i16==1)
            {
                printf("That day was Sunday");
            }
            if(i16==2)
            {
                printf("That day was Monday");
            }
            if(i16==3)
            {
                printf("That day was Tuesday");
            }
            if(i16==4)
            {
                printf("That day was Wednesday");
            }
            if(i16==5)
            {
                printf("That day was Thursday");
            }
            if(i16==6)
            {
                printf("That day was Friday");
            }
            if(i16==0)
            {
                printf("That day was Saturday");
            }
            
        }
    }
    if((i3>=1900)&&(i3<=2000))
    {
        if(i2==1)
        {
            i4=(i3-1900)/4;
            i17=(i1+0+1+i4+(i3-1900))%7;
            if(i17==1)
            {
                printf("That day was Sunday");
            }
            if(i17==2)
            {
                printf("That day was Monday");
            }
            if(i17==3)
            {
                printf("That day was Tuesday");
            }
            if(i17==4)
            {
                printf("That day was Wednesday");
            }
            if(i17==5)
            {
                printf("That day was Thursday");
            }
            if(i17==6)
            {
                printf("That day was Friday");
            }
            if(i17==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==2)
        {
            i4=(i3-1900)/4;
            i18=(i1+0+4+i4+(i3-1900))%7;
            if(i18==1)
            {
                printf("That day was Sunday");
            }
            if(i18==2)
            {
                printf("That day was Monday");
            }
            if(i18==3)
            {
                printf("That day was Tuesday");
            }
            if(i18==4)
            {
                printf("That day was Wednesday");
            }
            if(i18=='5')
            {
                printf("That day was Thursday");
            }
            if(i18==6)
            {
                printf("That day was Friday");
            }
            if(i18==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==3)
        {
            i4=(i3-1900)/4;
            i19=(i1+0+4+i4+(i3-1900))%7;
            if(i19==1)
            {
                printf("That day was Sunday");
            }
            if(i19==2)
            {
                printf("That day was Monday");
            }
            if(i19==3)
            {
                printf("That day was Tuesday");
            }
            if(i19==4)
            {
                printf("That day was Wednesday");
            }
            if(i19==5)
            {
                printf("That day was Thursday");
            }
            if(i19==6)
            {
                printf("That day was Friday");
            }
            if(i19==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==4)
        {
            i4=(i3-1900)/4;
            i20=(i1+0+0+i4+(i3-1900))%7;
            if(i20==1)
            {
                printf("That day was Sunday");
            }
            if(i20==2)
            {
                printf("That day was Monday");
            }
            if(i20==3)
            {
                printf("That day was Tuesday");
            }
            if(i20==4)
            {
                printf("That day was Wednesday");
            }
            if(i20==5)
            {
                printf("That day was Thursday");
            }
            if(i20==6)
            {
                printf("That day was Friday");
            }
            if(i20==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==5)
        {
            i4=(i3-1900)/4;
            i21=(i1+0+2+i4+(i3-1900))%7;
            if(i21==1)
            {
                printf("That day was Sunday");
            }
            if(i21==2)
            {
                printf("That day was Monday");
            }
            if(i21==3)
            {
                printf("That day was Tuesday");
            }
            if(i21==4)
            {
                printf("That day was Wednesday");
            }
            if(i21==5)
            {
                printf("That day was Thursday");
            }
            if(i21==6)
            {
                printf("That day was Friday");
            }
            if(i21==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==6)
        {   
            i4=(i3-1900)/4;
            i22=(i1+0+5+i4+(i3-1900))%7;
            if(i22==1)
            {
                printf("That day was Sunday");
            }
            if(i22==2)
            {
                printf("That day was Monday");
            }
            if(i22==3)
            {
                printf("That day was Tuesday");
            }
            if(i22==4)
            {
                printf("That day was Wednesday");
            }
            if(i22==5)
            {
                printf("That day was Thursday");
            }
            if(i22==6)
            {
                printf("That day was Friday");
            }
            if(i22==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==7)
        {
            i4=(i3-1900)/4;
            i23=(i1+0+0+i4+(i3-1900))%7;
            if(i23==1)
            {
                printf("That day was Sunday");
            }
            if(i23==2)
            {
                printf("That day was Monday");
            }
            if(i23==3)
            {
                printf("That day was Tuesday");
            }
            if(i23==4)
            {
                printf("That day was Wednesday");
            }
            if(i23==5)
            {
                printf("That day was Thursday");
            }
            if(i23==6)
            {
                printf("That day was Friday");
            }
            if(i23==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==8)
        {
            i4=(i3-1900)/4;
            i24=(i1+0+3+i4+(i3-1900))%7;
            if(i24==1)
            {
                printf("That day was Sunday");
            }
            if(i24==2)
            {
                printf("That day was Monday");
            }
            if(i24==3)
            {
                printf("That day was Tuesday");
            }
            if(i24==4)
            {
                printf("That day was Wednesday");
            }
            if(i24==5)
            {
                printf("That day was Thursday");
            }
            if(i24==6)
            {
                printf("That day was Friday");
            }
            if(i24==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==9)
        {
            i4=(i3-1900)/4;
            i25=(i1+0+6+i4+(i3-1900))%7;
            if(i25==1)
            {
                printf("That day was Sunday");
            }
            if(i25==2)
            {
                printf("That day was Monday");
            }
            if(i25==3)
            {
                printf("That day was Tuesday");
            }
            if(i25==4)
            {
                printf("That day was Wednesday");
            }
            if(i25==5)
            {
                printf("That day was Thursday");
            }
            if(i25==6)
            {
                printf("That day was Friday");
            }
            if(i25==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==10)
        {
            i4=(i3-1900)/4;
            i26=(i1+0+1+i4+(i3-1900))%7;
            if(i26==1)
            {
                printf("That day was Sunday");
            }
            if(i26==2)
            {
                printf("That day was Monday");
            }
            if(i26==3)
            {
                printf("That day was Tuesday");
            }
            if(i26==4)
            {
                printf("That day was Wednesday");
            }
            if(i26==5)
            {
                printf("That day was Thursday");
            }
            if(i26==6)
            {
                printf("That day was Friday");
            }
            if(i26==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==11)
        {
            i4=(i3-1900)/4;
            i27=(i1+0+4+i4+(i3-1900))%7;
            if(i27==1)
            {
                printf("That day was Sunday");
            }
            if(i27==2)
            {
                printf("That day was Monday");
            }
            if(i27==3)
            {
                printf("That day was Tuesday");
            }
            if(i27==4)
            {
                printf("That day was Wednesday");
            }
            if(i27==5)
            {
                printf("That day was Thursday");
            }
            if(i27==6)
            {
                printf("That day was Friday");
            }
            if(i27==0)
            {
                printf("That day was Saturday");
            } 
        }
        if(i2==12)
        {
            i4=(i3-1900)/4;
            i28=(i1+0+6+i4+(i3-1900))%7;
            if(i28==1)
            {
                printf("That day was Sunday");
            }
            if(i28==2)
            {
                printf("That day was Monday");
            }
            if(i28==3)
            {
                printf("That day was Tuesday");
            }
            if(i28==4)
            {
                printf("That day was Wednesday");
            }
            if(i28==5)
            {
                printf("That day was Thursday");
            }
            if(i28==6)
            {
                printf("That day was Friday");
            }
            if(i28==0)
            {
                printf("That day was Saturday");
            }
            
        }
    }
    if(i3>=1800&&i3<=1900)
    {
        if(i2==1)
        {
            i4=(i3-1800)/4;
            i29=(i1+2+1+i4+(i3-1800))%7;
            if(i29==1)
            {
                printf("That day was Sunday");
            }
            if(i29==2)
            {
                printf("That day was Monday");
            }
            if(i29==3)
            {
                printf("That day was Tuesday");
            }
            if(i29==4)
            {
                printf("That day was Wednesday");
            }
            if(i29==5)
            {
                printf("That day was Thursday");
            }
            if(i29==6)
            {
                printf("That day was Friday");
            }
            if(i29==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==2)
        {
            i4=(i3-1800)/4;
            i30=(i1+2+4+i4+(i3-1800))%7;
            if(i30==1)
            {
                printf("That day was Sunday");
            }
            if(i30==2)
            {
                printf("That day was Monday");
            }
            if(i30==3)
            {
                printf("That day was Tuesday");
            }
            if(i30==4)
            {
                printf("That day was Wednesday");
            }
            if(i30=='5')
            {
                printf("That day was Thursday");
            }
            if(i30==6)
            {
                printf("That day was Friday");
            }
            if(i30==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==3)
        {
            i4=(i3-1800)/4;
            i31=(i1+2+4+i4+(i3-1800))%7;
            if(i31==1)
            {
                printf("That day was Sunday");
            }
            if(i31==2)
            {
                printf("That day was Monday");
            }
            if(i31==3)
            {
                printf("That day was Tuesday");
            }
            if(i31==4)
            {
                printf("That day was Wednesday");
            }
            if(i31==5)
            {
                printf("That day was Thursday");
            }
            if(i31==6)
            {
                printf("That day was Friday");
            }
            if(i31==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==4)
        {
            i4=(i3-1800)/4;
            i32=(i1+2+0+i4+(i3-1800))%7;
            if(i32==1)
            {
                printf("That day was Sunday");
            }
            if(i32==2)
            {
                printf("That day was Monday");
            }
            if(i32==3)
            {
                printf("That day was Tuesday");
            }
            if(i32==4)
            {
                printf("That day was Wednesday");
            }
            if(i32==5)
            {
                printf("That day was Thursday");
            }
            if(i32==6)
            {
                printf("That day was Friday");
            }
            if(i32==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==5)
        {
            i4=(i3-1800)/4;
            i33=(i1+2+2+i4+(i3-1800))%7;
            if(i33==1)
            {
                printf("That day was Sunday");
            }
            if(i33==2)
            {
                printf("That day was Monday");
            }
            if(i33==3)
            {
                printf("That day was Tuesday");
            }
            if(i33==4)
            {
                printf("That day was Wednesday");
            }
            if(i33==5)
            {
                printf("That day was Thursday");
            }
            if(i33==6)
            {
                printf("That day was Friday");
            }
            if(i33==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==6)
        {   
            i4=(i3-1800)/4;
            i34=(i1+2+5+i4+(i3-1800))%7;
            if(i34==1)
            {
                printf("That day was Sunday");
            }
            if(i34==2)
            {
                printf("That day was Monday");
            }
            if(i34==3)
            {
                printf("That day was Tuesday");
            }
            if(i34==4)
            {
                printf("That day was Wednesday");
            }
            if(i34==5)
            {
                printf("That day was Thursday");
            }
            if(i34==6)
            {
                printf("That day was Friday");
            }
            if(i34==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==7)
        {
            i4=(i3-1800)/4;
            i35=(i1+2+0+i4+(i3-1800))%7;
            if(i35==1)
            {
                printf("That day was Sunday");
            }
            if(i35==2)
            {
                printf("That day was Monday");
            }
            if(i35==3)
            {
                printf("That day was Tuesday");
            }
            if(i35==4)
            {
                printf("That day was Wednesday");
            }
            if(i35==5)
            {
                printf("That day was Thursday");
            }
            if(i35==6)
            {
                printf("That day was Friday");
            }
            if(i35==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==8)
        {
            i4=(i3-1800)/4;
            i36=(i1+2+3+i4+(i3-1800))%7;
            if(i36==1)
            {
                printf("That day was Sunday");
            }
            if(i36==2)
            {
                printf("That day was Monday");
            }
            if(i36==3)
            {
                printf("That day was Tuesday");
            }
            if(i36==4)
            {
                printf("That day was Wednesday");
            }
            if(i36==5)
            {
                printf("That day was Thursday");
            }
            if(i36==6)
            {
                printf("That day was Friday");
            }
            if(i36==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==9)
        {
            i4=(i3-1800)/4;
            i37=(i1+2+6+i4+(i3-1800))%7;
            if(i37==1)
            {
                printf("That day was Sunday");
            }
            if(i37==2)
            {
                printf("That day was Monday");
            }
            if(i37==3)
            {
                printf("That day was Tuesday");
            }
            if(i37==4)
            {
                printf("That day was Wednesday");
            }
            if(i37==5)
            {
                printf("That day was Thursday");
            }
            if(i37==6)
            {
                printf("That day was Friday");
            }
            if(i37==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==10)
        {
            i4=(i3-1800)/4;
            i38=(i1+2+1+i4+(i3-1800))%7;
            if(i38==1)
            {
                printf("That day was Sunday");
            }
            if(i38==2)
            {
                printf("That day was Monday");
            }
            if(i38==3)
            {
                printf("That day was Tuesday");
            }
            if(i38==4)
            {
                printf("That day was Wednesday");
            }
            if(i38==5)
            {
                printf("That day was Thursday");
            }
            if(i38==6)
            {
                printf("That day was Friday");
            }
            if(i38==0)
            {
                printf("That day was Saturday");
            }
            
        }
        if(i2==11)
        {
            i4=(i3-1800)/4;
            i39=(i1+2+4+i4+(i3-1800))%7;
            if(i39==1)
            {
                printf("That day was Sunday");
            }
            if(i39==2)
            {
                printf("That day was Monday");
            }
            if(i39==3)
            {
                printf("That day was Tuesday");
            }
            if(i39==4)
            {
                printf("That day was Wednesday");
            }
            if(i39==5)
            {
                printf("That day was Thursday");
            }
            if(i39==6)
            {
                printf("That day was Friday");
            }
            if(i39==0)
            {
                printf("That day was Saturday");
            } 
        }
        if(i2==12)
        {
            i4=(i3-1800)/4;
            i40=(i1+2+6+i4+(i3-1800))%7;
            if(i40==1)
            {
                printf("That day was Sunday");
            }
            if(i40==2)
            {
                printf("That day was Monday");
            }
            if(i40==3)
            {
                printf("That day was Tuesday");
            }
            if(i40==4)
            {
                printf("That day was Wednesday");
            }
            if(i40==5)
            {
                printf("That day was Thursday");
            }
            if(i40==6)
            {
                printf("That day was Friday");
            }
            if(i40==0)
            {
                printf("That day was Saturday");
            }
            
        }
    }

}