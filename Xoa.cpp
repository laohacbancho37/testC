#include <stdio.h>
#include <math.h>
#include   <string.h>
#define MAX 1000
 void nhapmang(int a[], int n){
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
 }
 void xuatmang(int a[],int n){
     for(int i=0;i<n;i++){
         printf("%d ",a[i]);
     }
 } 
 void sapxep(int a[],int t,int n){
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n; j++){
             if(a[i] > a[j]){
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
         }
     }
 }
 void tangdan(int a[],int t,int n){
     for(int b=0;b<n-1;b++){
     int i=0;
     int j=1;
    
     do
     {  if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
        else{
            i++;
            j++;
        }
     } while (i<n-1);
          }
 }
 void lonnhat(int a[],int n){
    
    int j=0;
    int max=a[0];
    for(int i=0;i<n-1;i++){
    if(max<a[j+1]){
        max=a[j+1];
        j++;
    }else{
        j++;
        continue;
    }}
    printf("%d",max);

}
 void vitrimax(int a[],int n){
   
   int j=0;
    int max=a[0];
    for(int i=0;i<n-1;i++){
    if(max<a[j+1]){
        max=a[j+1];
        j++;
    }else{
        j++;
        continue;
    }}
    
   printf("\nvi tri so lon nhat la:");
    for(int l=0;l<n;l++){
        if(a[l]==max){
            printf("%d;",l);
        }
    }
        }
 void vitrimin(int a[],int n){
     printf("\nvi tri so nho nhat la:");
     int j=0;
    int min=a[0];
    for(int i=0;i<n-1;i++){
    if(min>a[j+1]){
        min=a[j+1];
        j++;
    }else{
        j++;
        continue;
 }}
    for(int l=0;l<n;l++){
        if(a[l]==min){
            printf("%d;",l);
        }
    }
 }
 void snt(int n){
     int k=0;
 for(int i=1;i<n;i++){
     if(n%i==0){
         k=k+1;
     }
 }
 if(k==1){
     printf("La so nguyen to <3 <3!!!");
    
 }else {printf("Deu phai so nguyen to!!! ");}
 }
 void tong(double a, double b){
     scanf("%lf%lf",&a,&b);
     printf("Tong hai so la:%lf",a+b);
 }
 void ucln(int a,int b){
     int c=0,d;
     printf("Uoc chung lon nhat la: ");

     if(a<b){
         c=a;
         a=b;
         b=c;
         while (a%b!=0)
     {  d=a%b;
         a=b;
         b=d;
     }
    
     }else{while (a%b!=0)
     {  d=a%b;
         a=b;
         b=d;
     }}  
     printf("%d",b);
 }
 void bcln(int a, int b){
      int c=0,d,e;
      e=a*b;
     if(a<b){
         c=a;
         a=b;
         b=c;
         while (a%b!=0)
     {  d=a%b;
         a=b;
         b=d;
     }
    
     }else{while (a%b!=0)
     {  d=a%b;
         a=b;
         b=d;
     }}  
     printf("\nBoi chung nho nhat la: %d",e/b);
 }
 void xoa(int a[], int &n, int x){
  if(x>=n){
      x=n-1;
  }
  else if(x<0){
      x=0;
  }
  for(int i=x;i<n-1;i++){
a[i]=a[i+1];
  }
  --n;
}
 void them(int a[],int &n,int x,int t){
    if(x>=n){
        n=n+1;       
        x=n;
        a[x-1]=t;
    }
    else if(x<0){
        n=n+1;
       x=0;
    for(int i=n+1;i>x;i--){
        
a[i]=a[i-1];

    }a[x]=t;
    
}}

 int main(){
    int a[MAX];
    int n,x,t;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
   
   them(a,n,x,t);

     for(int i=1;i<=n;i++){
         if(i%5==0){
         printf("%d\n",a[i-1]);
     }else { printf("%d ",a[i-1]);}}
     return 0;
    
 }