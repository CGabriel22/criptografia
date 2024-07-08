# Cifra de substituição

## Cifra de César
Um modelo classico e bem básico da criptografia, utilizado por César para comunicação secreta com alguns generais. Essa criptografia é bem fraca e facilmente descriptografada com um ataque de força bruta.

Consiste em "rotacionar" o alfabeto, atribuindo a cada letra do alfabeto o valor da letra n casas a sua frente. Desse modo a única "chave" que precisamos é quantas casas o usuário desejou pular, nosso n.

<img src="../img/Caesar.png" width="428"/>

O modelo pode ser descrito matematicamente pela fórmula: En(x) = (x + n)

Porém é bem fácil quebrar isso como pode imaginar, com apenas 26 letras no alfabeto é simples descobrir a string original.

Apesar disso, na minha implementação, eu criei um alfabeto composto por letras minusculas, maiusculas, números e alguns caracteres especiais, o que dificulta bastante a quebra, já que só meu sistema possui o alfabeto original.


