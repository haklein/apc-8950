#include <common.h>
#include <command.h>

#define GPIO_Base_Address		0xD8110000;

#define GPIO_GP0_Enable_Register			0xD8110040;
#define GPIO_GP1_Enable_Register			0xD8110041;
#define GPIO_GP0_Output_Enable_Register	0xD8110080;
#define GPIO_GP1_Output_Enable_Register	0xD8110081;
#define GPIO_GP0_Output_Data_Register		0xD81100C0;
#define GPIO_GP1_Output_Data_Register		0xD81100C1;
#define GPIO_GP0_UpDown_Enable_Register	0xD8110480;
#define GPIO_GP0_UpDown_Control_Register	0xD81104C0;

#define GPIO_0_Control_Bit		0x01 << 0;
#define GPIO_1_Control_Bit		0x01 << 1;
#define GPIO_2_Control_Bit		0x01 << 2;
#define GPIO_3_Control_Bit		0x01 << 3;
#define GPIO_4_Control_Bit		0x01 << 4;
#define GPIO_5_Control_Bit		0x01 << 5;
#define GPIO_6_Control_Bit		0x01 << 6;
#define GPIO_7_Control_Bit		0x01 << 7;

#define GPIO_8_Control_Bit		0x01 << 0;
#define GPIO_9_Control_Bit		0x01 << 1;
#define GPIO_10_Control_Bit		0x01 << 2;
#define GPIO_11_Control_Bit		0x01 << 3;
#define GPIO_12_Control_Bit		0x01 << 4;
#define GPIO_13_Control_Bit		0x01 << 5;


int set_gpio(cmd_tbl_t *cmdtp, int flag, int argc, char *argv[]){

	uint 	gpio_number = 99, param_count = 1;
	u_char	control_bit, writeval;
	ulong	addr;

	printf("----- GPIO Set Command Start ------\n");

	//Enable GPIO 0~13 as output signals.
	addr = GPIO_GP0_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;
	
	
	addr = GPIO_GP1_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;

	addr = GPIO_GP0_Output_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;
	
	addr = GPIO_GP1_Output_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;	


CMD_Repeat:
	
	if(argc >= 2){
		gpio_number = simple_strtoul(argv[param_count], NULL, 10);
		printf("%d. Set GPIO %02d \n", param_count, gpio_number);
		param_count++;
	}

	switch( gpio_number ){
		case 0:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_0_Control_Bit;
			break;
		case 1:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_1_Control_Bit;
			break;
		case 2:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_2_Control_Bit;
			break;
		case 3:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_3_Control_Bit;
			break;
		case 4:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_4_Control_Bit;
			break;
		case 5:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_5_Control_Bit;
			break;
		case 6:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_6_Control_Bit;
			break;
		case 7:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_7_Control_Bit;
			break;
		case 8:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_8_Control_Bit;
			break;
		case 9:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_9_Control_Bit;
			break;
		case 10:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_10_Control_Bit;
			break;
		case 11:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_11_Control_Bit;
			break;
		case 12:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_12_Control_Bit;
			break;
		case 13:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_13_Control_Bit;
			break;
		case 99:
			addr = GPIO_GP0_Output_Data_Register;
			writeval = 0xFF;
			*((u_char *)addr) = writeval;
			addr = GPIO_GP1_Output_Data_Register;
			writeval = 0xFF;
			*((u_char *)addr) = writeval;
			printf("No Input Parameters, Set GPIO 0~13.\n");
			return 0;
			break;
		default:
			printf("Input Parameter Error (%02d), Now only support GPIO 0~13 !!\n", gpio_number);
			return 0;
			break;
	}

	writeval = *((u_char *)addr);
	writeval |= control_bit;
	*((u_char *)addr) = writeval;
	printf("Set Memory Address: 0x%08x to 0x%02x. Physical value = 0x%02x \n", addr, writeval, *((u_char *)addr) );
	
	if(param_count < argc){
		goto CMD_Repeat;
	}

	printf("----- GPIO Set Command End !! ------\n");
	return 0;

}


int clear_gpio (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	uint 	gpio_number = 99, param_count = 1;
	u_char	control_bit, writeval;
	ulong	addr;

	printf("----- GPIO Clear Command Start ------\n");

	//Enable GPIO 0~13 as output signals.
	addr = GPIO_GP0_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;
	
	
	addr = GPIO_GP1_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;

	addr = GPIO_GP0_Output_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;
	
	addr = GPIO_GP1_Output_Enable_Register;
	writeval = 0xFF;
	*((u_char  *)addr) = writeval;	


CMD_Repeat:
	
	if(argc >= 2){
		gpio_number = simple_strtoul(argv[param_count], NULL, 10);
		printf("%d. Set GPIO %02d \n", param_count, gpio_number);
		param_count++;
	}

	switch( gpio_number ){
		case 0:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_0_Control_Bit;
			break;
		case 1:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_1_Control_Bit;
			break;
		case 2:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_2_Control_Bit;
			break;
		case 3:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_3_Control_Bit;
			break;
		case 4:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_4_Control_Bit;
			break;
		case 5:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_5_Control_Bit;
			break;
		case 6:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_6_Control_Bit;
			break;
		case 7:
			addr = GPIO_GP0_Output_Data_Register;
			control_bit = GPIO_7_Control_Bit;
			break;
		case 8:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_8_Control_Bit;
			break;
		case 9:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_9_Control_Bit;
			break;
		case 10:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_10_Control_Bit;
			break;
		case 11:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_11_Control_Bit;
			break;
		case 12:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_12_Control_Bit;
			break;
		case 13:
			addr = GPIO_GP1_Output_Data_Register;
			control_bit = GPIO_13_Control_Bit;
			break;
		case 99:
			addr = GPIO_GP0_Output_Data_Register;
			writeval = 0x00;
			*((u_char *)addr) = writeval;
			addr = GPIO_GP1_Output_Data_Register;
			writeval = 0x00;
			*((u_char *)addr) = writeval;
			printf("No Input Parameters, Clear GPIO 0~13.\n");
			return 0;
			break;
		default:
			printf("Input Parameter Error (%02d), Now only support GPIO 0~13 !!\n", gpio_number);
			return 0;
			break;
	}

	writeval = *((u_char *)addr);
	writeval &= (~control_bit);
	*((u_char *)addr) = writeval;
	printf("Set Memory Address: 0x%08x to 0x%02x. Physical value = 0x%02x \n", addr, writeval, *((u_char *)addr) );
	
	if(param_count < argc){
		goto CMD_Repeat;
	}

	printf("----- GPIO Clear Command End !! ------\n");
	return 0;
	
}


/***************************************************/

U_BOOT_CMD(
	gpios,	5,	0,	set_gpio,		\
	"gpios - set command for GPIO#. \n",				\
	"gpios gpio#1 gpio#2 gpio#3 gpio#4 [gpio#1 ~ #4 are optional].\n" \
);

U_BOOT_CMD(
	gpioc,	5,	0,	clear_gpio,		\
	"gpioc - clear command for GPIO#. \n",				\
	"gpioc gpio#1 gpio#2 gpio#3 gpio#4 [gpio#1 ~ #4 are optional].\n" \
);
