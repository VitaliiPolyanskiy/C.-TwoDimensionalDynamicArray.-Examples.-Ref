//  функция создания двумерного динамического массива
void Allocate(int **&p, int rows, int cols);

// функция удаления двумерного динамического массива
void Free(int **p, int rows);

// функция инициализации массива
void Init(int **p, int rows, int cols);

// функция печати массива
void Print(int **p, int rows, int cols);

// функция добавления строки (одномерного массива) в конец двухмерного массива
void AddStringEnd(int **&p, int &rows, int cols, const int *mas);

// функция вставки строки (одномерного массива) в указанную позицию двухмерного массива
void InsertString(int **&p, int &rows, int cols, int index, const int *mas);

//  функция добавления столбца (одномерного массива) в конец двухмерного массива
void AddColumnEnd(int **&p, int rows, int &cols, const int *mas);

// функция вставки столбца (одномерного массива) в указанную позицию двухмерного массива
void InsertColumn(int **&p, int rows, int &cols, int index, const int *mas);