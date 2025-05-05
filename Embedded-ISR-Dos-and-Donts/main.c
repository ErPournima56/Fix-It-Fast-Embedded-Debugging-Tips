//What people commonly do -
//Common Mistakes: 

void ISR_Handler() 
{
    int data[10]  ;   // Local variable initialized
    process_data()  ; // Calling a function - Big mistake
}
