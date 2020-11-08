# Задачи - цикли

1. Напишете програма, която принтира числата от 1 до <b>n</b>, обградени в квадратни скоби.

    Пример:

        Вход: 6
        Изход: [1] [2] [3] [4] [5] [6]
#

2. Напишете програма, която намира сумата на първите <b>n</b> естествени числа.<br>
<i>Можем ли без цикъл?</i>
#

3. Да се напише програма, която приема цяло 4-байтово число като вход и принтира цифрите му в обратен ред.
#

4. По въведено цяло положително число n програмата да прочита
<b>n</b> на брой цели числа, а след това да отпечатва тяхното средно аритметично.
#

5. Да се напише програма, която прочита получава цяло положително 4-байтово число и изкарва неговото двоично представяне.

    Пример:

        Вход: 567
        Изход: 00000000 00000000 00000010 00110111
#

6. Напишете програма, която да преброи колко единици и нули има в двоичното представяне на дадено цяло число.

    Пример:

        Вход: 22
        Изход: Ones  -> 3
               Zeros -> 29

7. Да се състави програма, която приема като входни данни
цели 4-байтови числа, елементи на монотонно растяща редица,
всяко от които в интервала [0;100].
Програмата приключва, при първата въведена стойност, непринадлежаща
на редицата. Отпечатайте броя на числата от редицата.

    Пример:

        Вход:  1 2 3 4 5 3 // спира на втората 3-ка
        Изход: 5
#

8. Напишете програма, която прочита цяло положително число и намира позицията на най-старшия значещ бит.

    Пример:

        Вход:  45 // 101101
        Изход: 5

9. Нека е дадена стандартна колода от карти съдържаща всички карти от
всички бои - общо 52 на брой. Приемаме, че картите са подредени както в
неразопаковано ново тесте - за всяка боя имаме
[А, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K],
а боите съответно са подредени - спатия, каро, купа, пика.
Целта на вашата програма е по подадено цяло положително число
<b>к</b> в интервала [0; 51] да изведе картата (картинка и боя),
която се намира на <b>к</b>-та позиция в тестето, подредено по дефинирания по-горе начин.
При невалиден вход програмата дава възможност за избор:
ново въвеждане или приключване на програмата.

    Пример:

        Вход:  13
        Изход: A Diamonds