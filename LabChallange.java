public class LabChallange {
    public static void main(String args[]) {

        String[][] chessboard = new String[8][8];

        //add code below this line

        for(Integer i = 0;i<8;i++){
            for(Integer j=0; j<8;j++){
                if( (i+j) % 2 == 0){
                    chessboard[i][j] = "o";
                }
                else{
                    chessboard[i][j]="x";
                }
            }
        }

        //add code above this line

        for (int row = 0; row< chessboard.length; row++) {
            for (int col = 0; col < chessboard[0].length; col++) {
                if (col == chessboard[0].length - 1) {
                    System.out.println(chessboard[row][col]);
                }
                else {
                    System.out.print(chessboard[row][col]);
                }
            }
        }
    }
}