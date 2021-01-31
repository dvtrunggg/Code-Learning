int main() {
    int mtrx_size = 8;
    int mat[8][8] = {
        { 1, 2, 3, 4, 5, 6, 7, 8},
        { 9,10,11,12,13,14,15,16},
        {17,18,19,20,21,22,23,24},
        {25,26,27,28,29,30,31,32},
        {33,34,35,36,37,38,39,40},
        {41,42,43,44,45,46,47,48},
        {49,50,51,52,53,54,55,56},
        {57,58,59,60,61,62,63,64}
    };

    int i,j;
    int sub_mtrx_size;

    for(sub_mtrx_size = mtrx_size; sub_mtrx_size > 1 ; sub_mtrx_size--)
    {
        for(i = 0; i < sub_mtrx_size; i++)
        {
            for(j = 0; j < sub_mtrx_size; j++)
            {
                printf("%3d ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
