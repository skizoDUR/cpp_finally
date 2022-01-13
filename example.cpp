//Example
void f()
{
        restore = 0;
        
        finally (
                        restore = 1;       
                )
        this_function_can_throw();
}
