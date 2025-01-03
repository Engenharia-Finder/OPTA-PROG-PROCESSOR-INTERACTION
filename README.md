# OPTA-PROG-PROCESSOR-INTERACTION
This programming aims to demonstrate how the interaction between the M7 and M4 processors of the OPTA is done.


# THE PROGRAMMING
This programming aims to demonstrate how the interaction between the M7 and M4 processors of the OPTA is done. Where a pulse on the product's user button will be interpreted in the M7 core, this pulse is processed and the M4 core executes a function based on this pulse. In this demonstration example, the LED_D0 is activated based on the actuation of the OPTA user button.

# HOW TO DO IT?
The programming is ready to use, just send it to OPTA. Remember that 2 programs are used, one for the M4 core and another for the M7 core.

ATTENTION:
It is necessary to separate the memories and cores in the "Tools" tab of the IDE, as described below:

> [!IMPORTANT]
> For programming named **PROG_M7,** follow these settings:
> 
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > Main Core
>
> **Once you have finished configuring this, you can now send the programming to the product.**


> [!IMPORTANT]
> For programming named **PROG_M4,** follow these settings:
> 
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > M4 Co-processor
>
> **Once you have finished configuring this, you can now send the programming to the product.**
