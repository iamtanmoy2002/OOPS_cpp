bool searchMatrix(vector<vector<int>> &matrix, int key) {
    // add your logic here
    int i,j;
    for(i=0;i<matrix.size();i++)
    {
        for(j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==key)
                return true;
        }
    }
    return false;
}