public class Surrounded_Regions{
    
    public void solve(char[][] board) {
        int rowSize = board.length;
        int columnSize = board[0].length;
        
        for(int j = 0; j < columnSize; j++){
            if(board[0][j] == 'O'){
                if(check(board, 0, j)){

                }
            }
        }
    }

    public boolean check(char[][] board, int i, int j){
        if(i - 1 < 0 || i + 1 > board.length || j - 1< 0 || j + 1 > board[0].length) return false;
        if(i == 0){
            check(board, i + 1, j);
        }
    }
}