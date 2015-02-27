#include <string>
using namespace std;

class Animal {
 public:
        Animal( string type, string name, string color);
        void setType(string a_type);
        void setName(string a_name);
        void setColor(string a_color);
        string getType();
        string getName();
        string getColor();
        void displayMsg();

 private:
        string type;
        string name;
        string color;

 };

