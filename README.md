# 109-2020
Задания по программированию 109 группы.

## Как работать
Каждый заводит себе диреторию, название которой совпадает с логином.
Файлы в чужих директориях не изменяем! (Конечно, ничего страшного не случится даже если вы случайно удалите чужой файл, но НЕ ДЕЛАЕМ ЭТОГО). Все делаем внутри "своей" директории.

### Linux
#### Действия, которые нужно выполнить только один раз
1. Решистрируемся на сайте github.com. Логин выбираете любой.

2. Выполняем команду (это нужно сделать только один раз)
```
cd
git clone https://github.com/sergadin/109-2020.git
```
В текущей директории должена появиться директория `109-2020`.

3. Создаем свою папку (и это нужно сделать один раз)
Например
```
cd 109-2020
mkdir Afonin_SA
```

4. Отправляем изменения не сервер github.com
```
git commit -m "Добавлена директория для пользователя Afonin_SA"
git push
```

#### Перед началом решения задачи
1. Создаем директорию для задачи с номером x.y
```
mkdir ~/109-2020/Afonin_SA/x.y
cd ~/109-2020/Afonin_SA/x.y
```

#### Пишем решение задачи
В директории для задачи (в нашем примере `~/109-2020/Afonin_SA/x.y`) создаем файлы так, как привыкли. Компилируем, запускаем и т.п.

#### Сдача задачи
1. Сохраняем результаты
```
git commit -m "Решение задачи x.y"
git push
```

2. Пишем письмо с просьбой посмотреть решение
