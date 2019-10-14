#ifndef H1_H
    #define  H1_H
    typedef float speed;
    typedef float length;

    class Square
    {
        length sideLength;
        public:
        Square(length);
    
        length area()
        {
            return sideLength*sideLength; 
        }
    };

#endif