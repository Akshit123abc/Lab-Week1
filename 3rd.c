
transpose(original, transposed, rows, cols);

printf("The transpose of the matrix is:\n");
for (int i = 0; i < cols; i++) {
for (int j = 0; j < rows; j++) {
printf("%d ", transposed[i][j]);
}
printf("\n");
}

return 0;
}