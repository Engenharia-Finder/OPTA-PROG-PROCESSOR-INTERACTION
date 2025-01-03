# OPTA-PROG-PROCESSOR-INTERACTION
This programming aims to demonstrate how the interaction between the M7 and M4 processors of the OPTA is done.

# EN

# THE PROGRAMMING
This programming aims to demonstrate how the interaction between the M7 and M4 processors of the OPTA is done. Where a pulse on the product's user button will be interpreted in the M7 core, this pulse is processed and the M4 core executes a function based on this pulse. In this demonstration example, the LED_D0 is activated based on the actuation of the OPTA user button.

# HOW TO DO IT?
The programming is ready to use, just send it to OPTA. Remember that 2 programs are used, one for the M4 core and another for the M7 core.

ATTENTION:
It is necessary to separate the memories and cores in the "Tools" tab of the IDE, as described below:

> [!IMPORTANT]
> For programming named **OPTA-PROG-PROCESSOR-INTERACTION-M7,** follow these settings:
> 
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > Main Core
>
> **Once you have finished configuring this, you can now send the programming to the product.**


> [!IMPORTANT]
> For programming named **OPTA-PROG-PROCESSOR-INTERACTION-M4,** follow these settings:
> 
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > M4 Co-processor
>
> **Once you have finished configuring this, you can now send the programming to the product.**



#
#
#
#
#



# PT-BR

# OPTA-PROG-PROCESSOR-INTERACTION
Esta programação tem como objetivo demonstrar como é feita a interação entre os processadores M7 e M4 do OPTA.

# A PROGRAMAÇÃO
Esta programação tem como objetivo demonstrar como é feita a interação entre os processadores M7 e M4 do OPTA. Onde um pulso no botão do usuário do produto será interpretado no núcleo M7, este pulso é processado e o núcleo M4 executa uma função com base neste pulso. Neste exemplo de demonstração, o LED_D0 é ativado com base na atuação do botão do usuário OPTA.

# COMO FAZER?
A programação está pronta para uso, basta enviar para a OPTA. Lembre-se que são utilizados 2 programas, um para o núcleo M4 e outro para o núcleo M7.

ATENÇÃO:
É necessário separar as memórias e núcleos na aba "Tools" da IDE, conforme descrito abaixo:

> [!IMPORTANT]
> Para programação chamada **OPTA-PROG-PROCESSOR-INTERACTION-M7,** siga estas configurações:
>
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > Main Core
>
> **Depois de terminar de configurar isso, você pode enviar a programação para o produto.**
>


> [!IMPORTANT]
> Para programação chamada **OPTA-PROG-PROCESSOR-INTERACTION-M4,** siga estas configurações:
>
> Tools > Flash split > 1MB M7 + 1MB M4
> 
> Tools > Target core > M4 Co-processor
>
> **Depois de terminar de configurar isso, você pode enviar a programação para o produto.**
