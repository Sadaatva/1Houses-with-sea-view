Здания с видом на море
Эта программа определяет индексы зданий с видом на море в линии зданий на основе их высот.

Описание задачи:
В линии зданий находится n зданий. Программа получает целочисленный массив heights размера n, который представляет высоты зданий в линии. Море находится справа от зданий. Здание имеет вид на океан, если оно может видеть океан без препятствий, то есть если все здания справа от него имеют меньшую высоту. Задача состоит в том, чтобы вернуть список индексов (с нуля) зданий, которые имеют вид на море, отсортированный по возрастанию.


Программа предоставляет следующую функциональность:

11)std::vector<int> houses(const std::vector<int>& heights): Функция принимает вектор целых чисел heights, представляющий высоты зданий, и возвращает вектор индексов зданий с видом на океан.
2)std::vector<int> houses(const std::vector<float>& heights): Функция генерирует исключение с сообщением “Float height”, поскольку предполагается работа с целочисленными значениями высот.
3)std::vector<int> houses(const std::vector<std::string>& heights): Функция генерирует исключение с сообщением “String height”, поскольку предполагается работа с числовыми значениями высот.
