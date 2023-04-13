#include <stdio.h>
#include <conio.h>
/*int main(){
	FILE *ES;
	ES=fopen("Ayush.txt","r");
	if(ES==NULL){
		printf("File does not exist");
	}
	else{
		printf("File is exist");
	}
}*/
/*int main(){
	FILE *ES;
	char ch;
	ES=fopen("Ayush.txt","r");
	if(ES==NULL){
		printf("File does not exist");
	}
	else{
			ch=fgetc(ES);
		
		while(ch!=EOF){
			ch=fgetc(ES);
			putchar(ch);

			
	}
	}
}*/
/*int main(){
	FILE *ES;
	char ch;
	ES=fopen("shashank.txt","a");
	ch=getchar();
	fputc(ch,ES);
	
}*/
/*int main(){
	FILE *ES1,*ES2;
	char ch;
	ES1=fopen("Ayush.txt","r");
	ES2=fopen("shashank.txt","w");
	if(ES1==NULL){
		printf("File did not exist");
	}
	else{
		ch=fgetc(ES1);
		while(ch!=EOF){
			if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' && ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
			
			fputc(ch,ES2);
		}
			ch=fgetc(ES1);
		
		}
	}
	fclose(ES1);
	fclose(ES2);
}*/
int main(){
	FILE *ES1,*ES2;
	int ch;
	ES1=fopen("Ayush.txt","r");
	ES2=fopen("shashank.txt","w");
	if(ES1==NULL){
		printf("File did not exist");
	}
	else{
		ch=fgetw(ES1);
		while(ch!=EOF){
			
			fputw(ch,ES2);
		
			ch=fgetw(ES1);
		
		}
	}
	fclose(ES1);
	fclose(ES2);
}
	
	
	
	
	
	
	
	
	
	
	
	
