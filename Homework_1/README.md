# Домашна работа 1 УП - Практикум

## Task 1 - Минаване във втори курс
### След въвеждане на брой взети изпита на студента да му се каже дали ще мине във втори курс. Ако броя взети изпити са >= 4 - минава. Нека има булеви израза: дали от администрацията са в добро настроение, дали студентът си е плащал навреме таксите и дали студентът си е платил такса "Минаваш". Ако студентът има само два взети изпита, но администрацията е в добро настроение - пак ще мине. Ако студентът има само един взет изпит, но администрацията са в добро настроение и си е плащал таксите навреме - пак минава. Ако студентът има нула взети изпити, но администрацията са в добро настроение, плащал си е навреме таксите и е платил такса "Минаваш" - пак ще мине.

**Примерен изход при вход 5:** Good job, you passed!

**Примерен изход при вход 2, но първите два булеви израза са истина:** Good job, you passed!

**Примерен изход при вход 3, но нито един булев израз не е оценен до истина:** September is a fun month!

**Примерен изход при вход 0, но всички булеви изрази са оценени до истина:** Good job, you passed!

## Task 2 - Познай числото
### Нека потребителят въведе цяло число в интервала [0, 1000] и след това да въвежда числа (програма да работи) докато не уцели неговото, но ако въведе по - голямо число програмата да му каже, да пробва с по - малко число и аналогично, ако въведе по - малко число. След като се познае числото да се изпише Chackpot! - It took you _ tries!, а ако се познае числото от един опит - Chackpot! You are really good at this!

## Бонус условие:
### Напишете програмата, така че да се генерира случайно число само, което потребителя трябва да отгатне. Hint : проучете rand().

**Примерен изход при вход 500 499 600 500:**

Try with a bigger number

Try with a smaller number

Jackpot! It took you 3 tries!

**Примерен изход при вход 500 500:**

Jackpot! You are really good at this!

## Task 3 - Едномесечна сесия
### За дадена година се очертава сесията да е цял февруари месец и всеки ден да има изпит. Пешо решил, че на всеки четен ден ще изкарва 2.99, колкото да мине, на всеки нечетен ден ще даде от себе си и ще изкара чиста 3-ка, а на ден който е просто число няма да се явява, за да се приготви за дискотека (т.е 2). Да се пресметне средния успех на Пешо по подадена година. (единицата няма да я считаме за просто число.)

**Примерен изход при вход 2020:** 2.65069  
**Примерен изход при вход 2019:** 2.67393

**Бонус ако закръглите до втория знак :)**

## Task 4 - Пясъчен часовник
### Да се напише програма, която при въведено нечетно число по - голямо от 1 да извежда на екрана пясъчен часовник с ширина, равна на въведеното число.

**Примерен изход при вход 7:**
```           
    *******
     *   *
      * *
       *
      * *
     *   *
    *******
```        