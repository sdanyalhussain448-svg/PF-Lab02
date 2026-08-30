#include <stdio.h>
int main()
{
	int tea_qty = 3, unit_price1 = 60;
	int samosa_qty = 4, unit_price2 = 40;
	int chikn_rool_qty = 2, unit_price3 = 120;
	int sub_tea = 60*3;
	int sub_samosa = 40*4;
	int sub_rool = 2*120;
	int bill_subtotal = sub_tea + sub_samosa + sub_rool;
	
	float GST = 0.16 * bill_subtotal;
	float FPA = bill_subtotal + GST;
	printf("====================FAST CAFETERIA RECEIPT====================\n");
	printf("Item            Qty         Unit Price (PKR)         Subtotal(PKR)\n");
	printf("__________________________________________________________________\n");
	printf("Tea              %d              %d                       %d\n",tea_qty,unit_price1,sub_tea);
	printf("Samosa           %d              %d                       %d\n",samosa_qty,unit_price2,sub_samosa);
	printf("Chicken Roll     %d              %d                       %d\n",chikn_rool_qty,unit_price3,sub_rool);
	printf("___________________________________________________________________\n");
	printf("Subtotal :                                                PKR %d\n",bill_subtotal);
	printf(" GST (16%%) :                                             PKR %.2f\n",GST);
	printf("____________________________________________________________________\n");
	printf(" Grand Total :                                            PKR %.2f\n",FPA);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

