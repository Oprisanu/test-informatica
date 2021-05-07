#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;

        int Correct_Answer;
        int Question_Score;

    public:
        void setValues (string, string, string, string, string, int, int);
        void askQuestion ( );
};

int main()
{

cout << "* * * * * * * *" << endl;
cout << "* Test la SO ! *" << endl;
cout << "* * * * * * * * *" << endl;

cout << "Apasati Enter pentru a incepe testul ! ... " << endl;
cin.get();

string Name;
int Age;

cout <<"Cum te numesti ?" << endl;
cin >> Name;
cout << endl;
cout <<"Cati ani ai ?" << endl;
cin >> Age;
cout << endl;
string Respond;
cout << Name << " esti pregatit pentru test " << "? DA/NU" << endl;
cin >> Respond;
if (Respond == "DA")
{
    cout << endl;
    cout << "ok, sa incepem atunci!" << endl;
}
else {
    cout << "ok, ne vedem cand esti gata!" << endl;
    return 0;
}

Question q1;
Question q2;
Question q3;
Question q4;
Question q5;
Question q6;
Question q7;
Question q8;
Question q9;
Question q10;


q1.setValues ("Frecventa(viteza) microprocesorului (CPU) se masoara în: ",
        " GB  1",
        " MB  2",
        " Kb  3",
        " MHz 4",
        4, // este raspunsul corect
        10); // puncte pentru raspuns corect

q2.setValues ("1 GB este egal cu:",
        "1024 Byte  1",
        "1024 KByte 2",
        "1024 MByte 3",
        "1 KB.      4",
        4, // este raspunsul corect
        10); // puncte pentru raspuns corect

q3.setValues (" 1 MB este egal cu : ",
        " 1024 Byte  1",
        " 1024 GByte 2",
        " 1024 KByte 3",
        " 1024 Tbyte 4",
        1, // este raspunsul corect
        10); // puncte pentru raspuns corect

q4.setValues ("Capacitatea unei dischete este de : ",
        " 1.44 KByte 1",
        " 1.44 GByte 2",
        " 1.44 MByte 3",
        " 1.44 TByte 4",
        2, // este raspunsul corect
        10); // puncte pentru raspuns corect

q5.setValues ("Capacitatea unui DVD este de : ",
        " 4.7 GByte 1",
        " 4.7 KByte 2",
        " 44 TByte  3 ",
        " 4.7 MByte 4",
        1, // este raspunsul corect
        10); // puncte pentru raspuns corect

q6.setValues ("Wndows XP este :",
        " Un program de calcul tabelar 1",
        " Un program utilizat pentru accesarea informatiei de pe net 2",
        " Un sistem de operare 3",
        " Un antivirus 4",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q7.setValues ("Principala caracteristica a Hard-ului este : ",
        " Fregventa  1",
        " Capacitatea de sortare 2",
        " Rezolutia 3",
        " Viteza 4",
        2, // este raspunsul corect
        10); // puncte pentru raspuns corect

q8.setValues ("Microsoft Excell este ",
        " Un program de texte 1",
        " un sistem de operare 2",
        " Un program de calcul taelar 3",
        " Nu exista excel4",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q9.setValues (" Desktop este ",
        " un program 1",
        " o caracteristica a monitorului 2",
        " Suprafata de lucru din windows  3",
        " un mod de navigare 4",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q10.setValues (" Care din dispozitivele de mai jos sunt de iesire ?",
        " Mouse-ul 1",
        " Tastatura 2",
        " Monitorul 3",
        " toate variantele 4",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q1.askQuestion();

q2.askQuestion();

q3.askQuestion();

q4.askQuestion();

q5.askQuestion();

q6.askQuestion();

q7.askQuestion();

q8.askQuestion();

q9.askQuestion();

q10.askQuestion();

cout << "Punctajul tau adunat este: " << Total << "din 100" << endl;

if (Total >= 70)
{
    cout << "Felicitari ai trecut testul cu succes !" << endl;
    cout << "&&&&&&&&&&&&" << endl;
    cout << "&Felicitari&" << endl;
    cout << "&&&&&&&&&&&&" << endl;
}

else {

cout << "Oh no! se pare ca ai picat testul :( " << endl;
cout << "Multu noroc pe data viitoare !" << endl;
}
return 0;
}

void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "Care este raspunsul tau la intrebare ? (foloseste nr. corespunzator! )" << endl;
    cin >> Guess;
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! Ai raspuns corect !" << endl;
        Total = Total + Question_Score;
        cout << "Punctaj: " << Question_Score << " din " << Question_Score << "!" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no! Ai gresit !" << endl;
        cout << "Punctaj: 0" << " din " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }

}
