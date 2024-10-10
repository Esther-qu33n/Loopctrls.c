//program to determine electricity bill
/*Name:Queen Esther Kinyanjui
Ref.no:CT101/G/22453/24*/
# include<stdio.h>
int main(){
  //total bill=Tbill
  
  char customername[]={};
  int customerid;
  float Chargeperunit,Tbill,Unitsused ;
  
printf("Enter customername:");
scanf("%s",&customername);
printf("Enter customerid:");
scanf("%d",&customerid);
printf("Enter Unitsused:");
scanf("%f",&Unitsused);

if(Unitsused<=199)
   {Chargeperunit=1.20;}
else if(Unitsused>=200 & Unitsused<400 )
      {Chargeperunit=1.50;}
else if(Unitsused>=400 & Unitsused<600)
      {Chargeperunit =1.80;}
else if(Unitsused >=600)  
    {Chargeperunit=2.0;}
  
Tbill= Unitsused*Chargeperunit;

if(Tbill<100) 
     {Tbill=100;}

else if (Tbill>400)
        {Tbill=Tbill*1.15;}
        
else { printf("No surge cost");
};

printf("customername is %s\n",customername);
printf("customerid is%d\n",customerid);
printf("Unitsused %f\n",Unitsused);
printf("Chargeperunit %f\n",Chargeperunit);
printf("Tbill %f\n",Tbill);

return 0;
}


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 