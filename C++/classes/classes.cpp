#include <iostream>

using namespace std;

//this is the class
class Book{ 
    public:
        string title;
        string author;
        int pageNum;

        //constructor - called everytime a book object is created
        Book(string t, string a, int p){
            cout << "Creating book" << endl;
            title = t;
            author = a;
            pageNum = p;
        }

        //object function - exectutes with .isLong()
        bool isLong(){
            if(pageNum > 500){
                return true;
            } else{
                return false;
            }
        }
};

class Movie{
    private://cannot be accessesed outside of the class
        string rating;

    public: //can be accessesed outside of the class
        string title;
        string director;
        
    
        Movie(string t, string d, string r){
            title = t;
            director = d;
            setRating(r);
        }

        //getters and setters (restricting elements that can be accessed)
        
        void setRating(string r){
            if(r == "G" || r == "PG" || r == "PG-13" || r == "R"){
                rating = r;
            } else{
                cout << "Invalid Rating" << endl;
                rating = "N/A";
            }
        }

        string getRating(){
            return rating;
        }
};

int main(){
    
    Book book1("Kafka on the Shore", "Haruki Murakami", 300);
    book1.title = "Kafka on the Shore";
    book1.author = "Haruki Murakami";
    book1.pageNum = 300;

    cout << "Title: " << book1.title << endl << "Author: " << book1.author << endl << "Page Number: " << book1.pageNum << endl;

    Book book2("The Republic", "Plato", 900);
    
    book2.pageNum = 950;

    cout << book1.author << endl;

    cout << book1.isLong() << endl;
    cout << book2.isLong() << endl;

    Movie movie("Fantastic Mr. Fox", "Wes Anderson", "Bam!");

    cout << "Movie rating: " << movie.getRating() << endl;

    movie.setRating("PG-13");

    cout << "Movie rating: " << movie.getRating() << endl;

    return 0;
}