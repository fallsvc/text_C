#define _CRT_SECURE_NO_WARNINGS 1 //vs define scanf()
#include <stdio.h>
//#include <ctype.h>//isalpha()
//1.
//int main() {
//    // Define variables to store input and encrypted characters
//    char cl, c2, c3, c4, c5;
//    char encrypted_cl, encrypted_c2, encrypted_c3, encrypted_c4, encrypted_c5;
//
//    // Prompt the user to input values
//    printf("Input the values of cl~c5: ");
//    scanf(" %c, %c, %c, %c, %c", &cl, &c2, &c3, &c4, &c5);
//
//    // Check if all input characters are alphabetic
//    if (isalpha(cl) && isalpha(c2) && isalpha(c3) && isalpha(c4) && isalpha(c5)) 
//    {
//        // Encrypt the characters using a Caesar cipher with a shift of 4
//        encrypted_cl = cl + 4;
//        encrypted_c2 = c2 + 4;
//        encrypted_c3 = c3 + 4;
//        encrypted_c4 = c4 + 4;
//        encrypted_c5 = c5 + 4;
//
//        // Display the encrypted values
//        printf("The values after encryption are: %c %c %c %c %c\n",
//            encrypted_cl, encrypted_c2, encrypted_c3, encrypted_c4, encrypted_c5);
//    }
//    else {
//        // Indicate that the input is invalid if any of the characters is not alphabetic
//        printf("The input is invalid.（输入不合法）\n");
//    }
//
//    return 0;
//}
//2.
//int main()
//{
//	double x, y;
//	//Input the value of x
//	scanf("%lf", &x);
//	//Calculate y base on following conditions
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	//Output the value of y
//	printf("%lf\n", y);
//	return 0;
//}
// 3.
//int main()
//{
//	int i = 0;
//	double hours, grossPay, taxes, netPay;
//	double tax1 = 0.15;
//	double tax2 = 0.20;
//	double tax3 = 0.25;
//	printf("Please input one week working hours\n");
//	
//	//Calculate grossPay
//	while (i < 10000)
//	{
//		//Input one week working hours
//		scanf("%lf", &hours);
	/*	if (hours <= 40 && hours > 0)
		{
			grossPay = hours * 10;
			break;
		}
		else if (hours > 40)
		{
			grossPay = 400 + (hours - 40) * 10 * 1.5;
			break;
		}
		else
		{
			printf("The input is invalid.\nPlease re-enter time\n");
		}
		i++;
	}*/
//	//Calculate taxes
//	if (grossPay <= 300)
//	{
//		taxes = grossPay * tax1;
//	}
//	else if (grossPay > 300 && grossPay <= 400)
//	{
//		taxes = 300 * tax1 + (grossPay - 300) * tax2;
//	}
//	else
//	{
//		taxes = 300 * tax1 + 150 * tax2 + (grossPay - 450) * tax3;
//	}
//	netPay = grossPay - taxes;
// //Output the value of grossPay,taxes and netPay
//	printf("grossPay=%lfbucks\ntaxes=%lfbucks\nnetPay=%lfbucks\n", grossPay, taxes, netPay);
//	return 0;
//}
// 4.
int main()
{
	double artichokes, beets, carrots;
	double artichoke_price = 1.25;
	double beet_price = 0.65;
	double carrot_price = 0.89;
	double pounds_sum = 0;
	double transfee = 0;
	double charge1,discount,total_charge;

	printf("Please input the pounds of artichokes, beets and carrots\n");
 //Input the value of pounds 
	scanf("%lf %lf %lf", &artichokes, &beets, &carrots);
 //Calculate the total pounds
	pounds_sum = artichokes + beets + carrots;
 //Calculate the fees without transfees
	charge1 = artichokes * artichoke_price + beets * beet_price + carrots * carrot_price;
 //Calculate the discount
	if (charge1 >= 100)
	{
		discount = charge1 * 0.05;
	}
	else
	{
		discount = 0;
	}
 //Calculate the transfees
	if (pounds_sum <= 5)
	{
		transfee = 3.5;
	}
	else if (pounds_sum > 5 && pounds_sum <= 20)
	{
		transfee = 10;
	}
	else
	{
		transfee = 8 + pounds_sum * 0.1;
	}
 //Calculate the total cost
	total_charge = charge1-discount + transfee;
 //Out
	printf("Cost per pound:\nartichoke:%lf\nbeet:%lf\ncarrot:%lf\n", artichoke_price, beet_price, carrot_price);
	printf("Cost:\nartichokes:%lf\nbeets:%lf\ncarrots:%lf\n", artichokes * artichoke_price, beets * beet_price, carrots * carrot_price);
	printf("Pounds_sum=%lf\n", pounds_sum);
	printf("discount=%lf\n", discount);
	printf("transfee=%lf\n", transfee);
	printf("total_charge=%lf\n", total_charge);
}
