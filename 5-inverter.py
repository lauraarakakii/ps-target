'''
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;

'''

txt = str(input("Digite sua string: "))

reverso = []

i = len(txt)

while i > 0: 
    reverso += txt [i-1]
    i -= 1
    
print(reverso) 
