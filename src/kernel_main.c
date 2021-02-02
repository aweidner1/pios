#include <stdio.h>
#include "list.h"
// office hours 2/1 help and guidance
extern long __bss_start;
extern long __bss_end;

void clear_bss(){
	int x=0;
	while((&__bss_start)+x !=__bss_end){
		(&__bss_start)[x] = 0;
		x++;
	}
}
struct list_element val = {NULL,NULL,7};
struct list_element* list = &val;
//extern int __bss_start;
//extern int __bss_end;
//extern int __bss_size;

//void clear_bss(void){
//	char* begin_bss=(char*) & __bss_start;
//	for(int i=0; i< __bss_size; i++){
//		begin_bss[i]=0;
//	}
//}

void kernel_main(){
	clear_bss();
	list_add(&list, 3);
	list_add(&list, 9);
	list_add(&list, 1);
	list_remove(&list, 7);
	list_remove(&list, 9);
	list_remove(&list, 3);
	list_remove(&list, 1);
    while(1){
    }
}
