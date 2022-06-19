package main

func isValidSudoku(board [][]byte) bool {
	var usedRow [9][9]int
	var usedColumn [9][9]int
	var usedBox [9][9]int
	for i := 0; i < len(board); i++ {
		for j := 0; j < len(board[i]); j++ {
			if board[i][j] == '.' {
				continue
			}
			num := board[i][j] - '0' - 1
			k := i/3*3 + j/3
			if usedRow[i][num] == 1 || usedColumn[num][j] == 1 || usedBox[k][num] == 1 {
				return false
			}
			usedRow[i][num], usedColumn[num][j], usedBox[k][num] = 1, 1, 1
		}
	}
	return true
}
