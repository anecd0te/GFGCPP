    for(int i = 0;i<mat1.size();i++){
        for(int j = 0;j<mat2.size();j++){
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i = 0;i<mat1.size();i++){
        for(int j = 0;j<mat2.size();j++){
            cout<<ans[i][j];
        }
    }