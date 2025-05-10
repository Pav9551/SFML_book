# SFML_book
SFML game dev by example

# Chess c++ sfml

## Оконное приложение для игры
#### Подготовка к компиляции на win10
```
```

- инcтрукция для подключения SFML к Dev c++ здесь https://www.youtube.com/watch?v=-v0rCgaCoKU
- !во время установки не ставьте русский язык - ссылка на Dev c++ GCC 4.9.2 TDM (SJLJ) - 64-bit https://sourceforge.net/projects/orwelldevcpp/
- ссылка на SFML  https://www.sfml-dev.org/download/sfml/2.4.2/


Дополнительные инструкции для компоновщика:
Add the following commands when calling the linker
```
-lsfml-graphics -lsfml-window -lsfml-system
```
```
✅ 2. Указать путь к DLL через переменную среды PATH
Если не хотите копировать .dll каждый раз:
Найдите папку, где лежат ваши DLL-файлы.
Добавьте её в переменную окружения PATH:
Win + R → sysdm.cpl → вкладка Дополнительно → Переменные среды
Найдите переменную Path и добавьте путь к папке с DLL

Это позволяет Windows находить .dll при запуске любых программ, включая те, собранные в Dev C++
```
## Включите стандарт C++11 или выше:
## В Dev C++:
## Tools → Compiler Options → Settings → Code Generation → Language Standard → ISO C++11 (или выше)
- интересная ссылка https://www.youtube.com/watch?v=yHrrNcDqzk8&t=2s

## Книга для изучения https://github.com/BijayanBhattarai/BooksCollection/blob/master/Game%20Developement/SFML-Game-Developme-By-Example.pdf

