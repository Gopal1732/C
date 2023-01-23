//. Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :
int main(){
    int  temp;
   
    printf("Enter temperature:");
    scanf("%d",&temp);

    if(temp<0){
        printf("freezing weather");
    }
    else if(temp>=0 && temp<10){
        printf("very cold weather");
    }
    else if(temp>=10 && temp<20){
        printf("cold weather");
    }else if(temp>=20 && temp<30){
        printf("normal in temp");
    }
    else if(temp>=30 && temp<40){
        printf("Its hot");
    }
    else{
        printf("Its very hot");
    }

    return 0;
}