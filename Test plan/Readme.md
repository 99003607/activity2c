# TEST PLAN

| ID  | Description  | Pre-Condition | Expected Input | Expected Output  | Actual Output | Test scenario |
|-----|--------------|---------------|----------------|------------------|---------------|---------------|
| HL2\_L1\_1 | Working of function Mean | Operand must be real number | -10,-14 | -12|  |  |
| HL2\_L1\_2 | Working of function Mean | Operand must be real number | 11,21 | 16 |  |  |
| HL2\_L1\_3 | Working of function Sum | Operand must be real number | 15,25 | 40 |  |  |
|HL2\_L1\_4| Working of function Sum | Operand must be real number | -14,-16 | -30 |  |  |
| HL2\_L1\_5 | Working of function Standard deviation | Operand must be real number | 10,12 | 1 |  |  |
| HL2\_L1\_6| Working of function Variance | Operand must be real number | 25,65 | 400 ||
| HL3_L1_1    |      calculations trignometric operations        |       operand should be int        |        1 float or int value       |        operand can be integer or float or no value  |  |
| HL3_L1_2    |      calculations trignometric operations        |       operand should be int        |        1 float or int value       |        operand can be integer or float or no value  |  |
| HL3_L1_3    |      calculations trignometric operations        |       operand should be int        |        1 float or int value       |        operand can be integer or float or no value  |  |
| HL4_L1_1    |   Centimeter to meter           |    Choose Centimeter TO Meter from the options           |       1400         |          14.0        |        14.000       | Requirement based |
|  Hl4_L3_2   |   Inch  to Centimeter          |        Choose Iinch TO Centimeter from the options       |        34        |         86.36         |       86.360001        | Requirement based |
|  HL4_L4_3   |       Celcius to farenheit       |      Choose Celsius TO Farenheit from the options          |      10           |        50          |         50.0      | Requirement based |
|  HL4_L6_5   |      farenheit to celcius        |        Choose Farenheit TO Celcius from the options       |        60        |         15.5         |       15.555555        | Requirement based |
|  HL4_L8_7   |       gram to kilogram       |       Choose Gram TO KiloGram from the options        |        2587        |           2587000       |        2587000.0       | Requirement based |
|  HL4_L9_8   |       miligram to gram      |       Choose miliGram TO Gram from the options        |        8240        |          8420000        |        820000.0       | Requirement based |
|  HL4_L10_9   |       seconds to minute      |       Choose Seconds TO Minute from the options        |        90        |           1.5       |        1.50       | Requirement based |
|  HL4_L11_10   |       minutes to seconds       |       Choose Minute TO Seconds from the options        |        65        |      3900            |       3900.0        | Requirement based |
| HL5_L1_1 | Logical AND | Choose AND operation from all the options |Two int operands| Returns AND of two values in int |    |  |
| HL5_L1_2 | Logical AND  |Choose AND operation from all the options | In two int any one operand is invalid | Returns error as another operand is invalid |   |  |
| HL5_L2_1 | Logical OR | Choose OR operation from all the options |Two int operands| Returns OR of two values in int |    |  |
| HL5_L2_2 | Logical OR | Choose OR operation from all the options |In two int any one operand is invalid | Returns error as another operand is invalid |    |  |
| HL5_L3_1 | Logical NOT | Choose NOT operation from all the options |int operand | Returns NOT value in int |    |  |
| HL5_L3_2 | Logical NOT | Choose NOT operation from all the options |Invalid int operands | Returns error as operand is invalid |    |  |
| HL5_L4_1 | Logical NAND | Choose NAND operation from all the options | Two int operands | Returns NAND of two values in int |   |  |
| HL5_L4_2 | Logical NAND| Choose NAND operation from all the options |Invalid int operands | Returns error as operand is invalid |    |  |
| HL5_L5_1 | Logical NOR | Choose NOR operation from all the options | In two int any one operand is invalid | Returns error as another operand is invalid |   |  |
| HL5_L5_2 | Logical NOR | Choose NOR operation from all the options |Invalid int operands | Returns error as operand is invalid |    |  |
| HL5_L6_1 | Logical XOR | Choose XOR operation from all the options | Two int operands | Returns XOR of two values |    |  |
| HL5_L6_2 | Logical XOR | Choose XOR operation from all the options |Invalid int operands | Returns error as operand is invalid |    |  |
| HL5_L7_1 | Logical XNOR | Choose XNOR operation from all the options | Two int operands | Returns XNOR of two values |    |  |
| HL5_L6_1 | Logical XNOR | Choose XNOR operation from all the options | invalid int operands | Returns error as operand is invalid |    |  |
| HL6_L1_1    |      Finding roots of equation with Discriminant =0        |       a,b,c are real numbers        |        3 float operands        |         The two roots of the equation which are real and equal         |               |  |
| HL6_L1_2    |    Finding roots of equation with Discriminant < 0          |       a,b,c are real numbers        |       3 float operands         |        The two roots of the equation which are complex and different          |               |  |
| HL6_L1_3    |     Finding roots of equation with Discriminant > 0         |      a,b,c are real numbers           |      3 float operands            |      The two roots of the equation which are real and different            |               |  |
| HL7_L1_1     |   work for function dec to binary          |      operand should be int         |      121          |        1111001          |       1111001        | requirement based |
| HL7_L1_2|     work for function dec to octal           |      operand should be int           |        121          |        71       |  71|requirement based
| HL9_L1_1 | Exponential Function (decreasing) | If input (X) is less than 0. | X = -1 | Y = e^(-1) = 0.367 |    |
| HL9_L1_2 | Exponential Function (when input is 0) | If input (X) is equal to 0. | X = 0 | Y = e^(0) = 1 |   |  |
| HL9_L1_3 | Exponential Function (increasing) | If input (X) is greater than 0 | X = 2 | Y = e^(2) = 7.389 |   |  |
| HL9_L1_4 | Exponential Function (when input is invalid)  | If input (X) is complex. | X= 2+3i | Y = -1 |   |  |

# version2
| ID  | Description  | Pre-Condition | Expected Input | Expected Output  | Actual Output | Test scenario |
|-----|--------------|---------------|----------------|------------------|---------------|---------------|







