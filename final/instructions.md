# Instructions  

Crazy Al’s Computer Emporium is a retail seller of home computers. The sales staff at Crazy Al’s works strictly on commission. At the end of the month, each salesperson’s commission is calculated according to Table 1. 

__Table 1. Commission Rates__
| Sales This Month | Commission Rate |
| ---------------- | --------------- |
| Less than $10,000 | 5% |
| $10,000 – $14,999 | 10% |
| $15,000 – $17,999 | 12% |
| $18,000 – $21,999 | 14% |
| $22,000 or more | 16% | 

For example, a salesperson with $16,000 in monthly sales will earn a 12 percent commission ($1,920.00). Another salesperson with $20,000 in monthly sales will earn a 14 percent commission ($2,800.00). 

Because the staff only gets paid once per month, Crazy Al’s allows each employee to take up to $1,500 per month in advance. When sales commissions are calculated, the amount of each employee’s advanced pay is subtracted from the commission. If any salesperson’s commissions are less than the amount of their advance, they must reimburse Crazy Al’s for the difference. 

Here are two examples: Beverly and John have $21,400 and $12,600 in sales, respectively. Beverly’s commission is $2,996 and John’s commission is $1,260. Both Beverly and John took $1,500 in advance pay. At the end of the month, Beverly gets a check for $1,496, but John must pay $240 back to Crazy Al’s. 

You’ve been asked to write a program that eases the task of calculating the end-of-month commission. Table 2 lists the variables needed.

__Table 2. Variables__
| Variable | Description |
| -------- | ----------- |
| `sales` | A double variable to hold a salesperson’s total monthly sales. |
| `rate` | A double variable to hold the salesperson’s commission rate. |
| `commission` | A double variable to hold the commission. |
| 'advance` | A double variable to hold the amount of advanced pay the salesperson has drawn. |
| `pay` | A double variable to hold the salesperson’s amount of pay. |

### Program Design 

The program must perform the following general steps: 

1. Ask the user for the salesperson’s monthly sales. 
2. Ask the user for the amount of advance pay the salesperson has drawn from the company. 
3. Determine the commission rate. 
4. Calculate the commission. 
5. Calculate the salesperson’s pay by subtracting the advanced pay from the commission. If the amount is negative, the salesperson must reimburse the company.

### Determine the Commission Rate

The commission rate is determined by the monthly sales amount. An if/else if statement can be used to test the sales amount and assign the correct rate. 

The following pseudocode expresses the algorithm: 

	`_If sales is less than $10,000_`
		`_rate is 5%._`
	`_else if sales is less than $15,000_`
		`_rate is 10%._`
	`_else if sales is less than $18,000_`
		`_rate is 12%._`
	`_else if sales is less than $22,000_`
		`_rate is 14%._`
	`_else_`
		`_rate is 16%._`