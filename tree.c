#include<stdio.h>
#include<conio.h>
void add(node* *hd, int v){
node* cur = *hd;
if(curr == NULL){
    cur = (node*)malloc(sizeof(node));
    cur->value = v;
}else{
    if(v < cur->value){
        add(&cur->left, v);
    }else{
        add(&cur->right, v);
    }
}
getch;
}

