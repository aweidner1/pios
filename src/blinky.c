unsigned int *gpset1 = 0xFE200020;
unsigned int *gpse14 = 0xFE200010;
unsigned int *gpclr1 = 0xFE20002C;

void led_init(){
	unsigned int mask_number = 0xFFFFFE3F;
	*gpse14 = *gpse14 & mask_number;
	*gpse14 = *gpse14 | (1 << 6);
	return;
}
void led_on(){
	*gpset1 = (1 << 10);
}

void led_off(){
	*gpclr1 = (1 << 10);
}

void delay(unsigned int d){
	unsigned int i,j;
	for(i=0; i< 0x7F; i++){
		for(j=0; j<d; j++){
			asm("nop");
		}
	}
}
