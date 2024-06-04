#include <stdio.h>
#include <stdlib.h>

typedef struct{
int ID; //4 byte
double price;//8 byte
char nameofproduct[20];//20 byte
}productinformation;

void addproduct(productinformation productlist[],int productID, double productprice, char *productname){
int space=0; //for loop
while(1){
if(productlist[space].ID==0){
    productlist[space].ID=productID;
    productlist[space].price=productprice;
    strcpy(productlist[space].nameofproduct, productname);
    break;
}
space++;
}
}
int findproduct(int wantedID, int productinformation, int productlist[], int nop){
 int i;
 for(i=0;i<nop;i++){
if(productlist[i].ID==wantedID){
        return i;
}
return -1;
}                        }

void showinfo(int productID, productinformation productlist[], int nop){
int productindex=findproduct(productID,productlist,nop);
if(productindex!=1){
    printf("Product ID: %d\n",productlist[productindex].ID);
    printf("Product Price: %.2lf\n",productlist[productindex].price);
    printf("Product Name: %s\n",productlist[productindex].nameofproduct);}
    else{
        printf("Product is not registered.");
    }
}




int main(void)
{
int nop;//number of products
int ID, i;
double productprice;
productinformation *productlist[];
char productname;

puts("Please indicate how many products you want to enter: ");
scanf("%d",&nop);

productlist=(productinformation*)calloc(nop,sizeof(productinformation));

for(i=0;i<nop;i++){
    puts("Please indicate ID of product: ");
    scanf("%d",&ID);
    puts("Please indicate price of product: ");
    scanf("%lf",&productprice);
    puts("Please indicate name of product");
    scanf("%s",&productname);
    addproduct(productlist,ID,productprice,productname);
}
printf("Please enter your product ID: \n");
scanf("%d",&ID);
productinformation(ID,productlist,nop);
}
