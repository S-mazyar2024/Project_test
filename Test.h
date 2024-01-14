#define BitVal(data,y) ( (data>>y) & 1)      /** Return Data.Y value   **/
#define SetBit(data,y)    data |= (1 << y)    /** Set Data.Y   to 1    **/
#define ClearBit(data,y)  data &= ~(1 << y)   /** Clear Data.Y to 0    **/
#define ToggleBit(data,y)     (data ^=BitVal(y))     /** Toggle Data.Y  value  **/
#define Toggle(data)   (data =~data )         /** Toggle Data value     **/
