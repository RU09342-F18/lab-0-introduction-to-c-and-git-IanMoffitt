int math(int num1, int num2, char Operator)
{
//The approach taken was to have a switch case statement that would match the selected function, the operator,
//with the correct mathemtical function, then return the integer calculated

    //declaring an int that will hold the value of the computed operation
    int computed;

    //Here I am declaring the switch function to be controller by the character "Operator"
    switch(Operator)
    {
        //The addition function is detailed here, and executed when Operator = "+"
        case '+':
            
            computed = num1 + num2;
            return computed;
            
        break;
        
        //The subtraction function is detailed here, and executed when Operator = "-"
        case '-':
            
            computed = num1 - num2
            return computed;
            
        break;
        
        //The multiplication function is detailed here, and executed when Operator = "*"
        case '*':
            
            computed = num1 * num2;
            return computed;
            
        break;
        
        //The division function is detailed here, and executed when Operator = "/"
        case '/':
            
            computed = num1 / num2;
            return computed;
            
        break;
        
        //The Modulo function is detailed here, and executed when Operator = "%"
        case '%':
            
            computed = num1 % num2;
            return computed;
            
        break;
        
        //The logical shift left function is detailed here, and executed when Operator = "<"
        case '<':
            
            computed = num1 << num2;
            return computed;
            
        break;
        
        //The logical shift right function is detailed here, and executed when Operator = ">"
        case '>':
            
            computed = num1 >> num2;
            return computed;
            
        break;
        
        //The bitwise AND is detailed here, and executed when Operator = "&"
        case '&':
            
            computed = num1 & num2;
            return computed;
            
        break;
        
        
        //The bitwise OR is detailed here, and executed when Operator = "|"
        case '|':
            
            computed = num1 | num2;
            return computed;
            
        break;
        
        
        //The bitwise XOR is detailed here, and executed when Operator = "^"
        case '^':
            
            computed = num1 ^ num2;
            return computed;
            
        break;
        
        //The bitwise NOT is detailed here, and executed when Operator = "~"
        case '~':
            
            computed = ~num1;
            return computed;
            
        break;
        
        //If the char Operator does not match any of the above functions, it is passed into default and a 0 is returned.
        default:
        computer = 0;
        return computed;
        
    }
   
}
