
 file(text , binary)
    1-STORE NUMBERE     12345 : (text: 5 byte )     (binary : 4 byte)
    
    2-END OF FILE       (text : 1A  OR 26)          (binary : ctrl+z )
    
    3-END OF LINE       (CR/LF)


file :
	  1- sequential
	  2- random

open:	
   
   ifstream  f1;               // input file (this command can only read)
   f1.open("a.dat" , ios :: in );
   
   ifstream  f1("a.dat" , ios :: in );
   
   ofstream  f2;              // output file (this command can only write)
   f2.open("a.dat" , ios :: out);
   
   
   fstream   f3;             // input and output file (this command can read and write)
   f3.open("a.dat" , ios :: in | ios :: out);
   
   fstream f3("a.dat" , ios :: in | ios :: out);
   
   
   ios :: in        // input
   ios :: out       // output
   ios :: app       // Writes from the end of the file (only can add value)
   ios :: ate       // Writes from the end of the file (can add value and overwrite)
   ios :: binary    // If do not write this command write text by defulte
   ios :: trunc     // If there is a file with this name, all file data will be deleted
   
   f1.close();      // close file
   
   bool  eof();     // Return TRUE if the file is reached to end
   
   
   






