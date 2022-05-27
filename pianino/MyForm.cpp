#include "MyForm.h"
#include <windows.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

using namespace pianino; // Название проекта

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    pianino::MyForm form;
    Application::Run(% form);
}




System::Void pianino::MyForm::radioButton1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
      
 
        int ch;
        FILE* f;
        fopen_s(&f, "score.txt", "w");
        fseek(f, 0, SEEK_END);

            do
            {
                if (e->KeyCode == Keys::Q)
                {
                    Do->BackColor = Color::DarkGray;
                    Do->PerformClick();
                    Do->BackColor = Color::White;


                    ch = 1;
                    fprintf(f, "%d", ch);
                    continue;

                }
                else if (e->KeyCode == Keys::W) {
                    Re->BackColor = Color::DarkGray;
                    Re->PerformClick();
                    Re->BackColor = Color::White;

                    ch = 2;
                    fprintf(f, "%d", ch);
                    break;

                }
                else if (e->KeyCode == Keys::E) {
                    Mi->BackColor = Color::DarkGray;
                    Mi->PerformClick();
                    Mi->BackColor = Color::White;

                    ch = 3;
                    fprintf(f, "%d", ch);
                    break;


                }
                else if (e->KeyCode == Keys::R) {
                    FA->BackColor = Color::DarkGray;
                    FA->PerformClick();
                    FA->BackColor = Color::White;

                    ch = 4;
                    fprintf(f, "%d", ch);
                    break;


                }
                else if (e->KeyCode == Keys::T) {
                    So->BackColor = Color::DarkGray;
                    So->PerformClick();
                    So->BackColor = Color::White;

                    ch = 5;
                    fprintf(f, "%d", ch);
                    break;


                }
                else if (e->KeyCode == Keys::Y) {
                    La->BackColor = Color::DarkGray;
                    La->PerformClick();
                    La->BackColor = Color::White;

                    ch = 6;
                    fprintf(f, "%d", ch);
                    break;


                }
                else if (e->KeyCode == Keys::U) {
                    Si->BackColor = Color::DarkGray;
                    Si->PerformClick();
                    Si->BackColor = Color::White;

                    ch = 7;
                    fprintf(f, "%d", ch);
                    break;

                }
                else if (e->KeyCode == Keys::S)

                    break;


            } while (e->KeyCode != Keys::S);
          
        fclose(f);
     
}
System::Void pianino::MyForm::reproduction_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
        int str = 0;
        int k = 0;
        FILE* f;
        char fname[] = "score.txt";
        fopen_s(&f, fname, "r");
        while (!feof(f))
        {
            str=fgetc(f);
            k++;
        }
        while (k==0)
        {
            k--;
            str;
            if (str == 1)
            {
                Do->BackColor = Color::DarkGray;
                Do->PerformClick();
                Do->BackColor = Color::White;
                
            }
            else if (str == 2) {
                Re->BackColor = Color::DarkGray;
                Re->PerformClick();
                Re->BackColor = Color::White;
              
    
            }
            else if (str == 3) {
                Mi->BackColor = Color::DarkGray;
                Mi->PerformClick();
                Mi->BackColor = Color::White;
             
    
            }
            else if (str == 4) {
                FA->BackColor = Color::DarkGray;
                FA->PerformClick();
                FA->BackColor = Color::White;
         
    
            }
            else if (str == 5) {
                So->BackColor = Color::DarkGray;
                So->PerformClick();
                So->BackColor = Color::White;
                
              
    
    
            }
            else if (str == 6) {
                La->BackColor = Color::DarkGray;
                La->PerformClick();
                La->BackColor = Color::White;
                
               
    
    
            }
            else if (str == 7) {
                Si->BackColor = Color::DarkGray;
                Si->PerformClick();
                Si->BackColor = Color::White;
                
                
    
            }
        }
        fclose(f);
}

//System::Void pianino::MyForm::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
//{
//    const int k = 160;
//    char str[k];
//    FILE* f;
//    char fname[] = "score.txt";
//    fopen_s(&f, fname, "r");
//    while (!feof(f))
//    {
//        str[k]=fgetc(f);
//    }
//    while (*str != '\0')
//    {
//        str;
//        if (str == "-1")
//        {
//            Do->BackColor = Color::DarkGray;
//            Do->PerformClick();
//            Do->BackColor = Color::White;
//            
//        }
//        else if (str == "W") {
//            Re->BackColor = Color::DarkGray;
//            Re->PerformClick();
//            Re->BackColor = Color::White;
//          
//
//        }
//        else if (str == "E") {
//            Mi->BackColor = Color::DarkGray;
//            Mi->PerformClick();
//            Mi->BackColor = Color::White;
//         
//
//        }
//        else if (str == "R") {
//            FA->BackColor = Color::DarkGray;
//            FA->PerformClick();
//            FA->BackColor = Color::White;
//     
//
//        }
//        else if (str == "T") {
//            So->BackColor = Color::DarkGray;
//            So->PerformClick();
//            So->BackColor = Color::White;
//            
//          
//
//
//        }
//        else if (str == "Y") {
//            La->BackColor = Color::DarkGray;
//            La->PerformClick();
//            La->BackColor = Color::White;
//            
//           
//
//
//        }
//        else if (str == "U") {
//            Si->BackColor = Color::DarkGray;
//            Si->PerformClick();
//            Si->BackColor = Color::White;
//            
//            
//
//        }
//    }
//    fclose(f);
//}
//System::Void pianino::MyForm::Its_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
//{
//    char ch;
//    FILE* f;
//    fopen_s(&f, "score.txt", "w");
//    if (e->KeyCode == Keys::Q)
//    {
//        Do->BackColor = Color::DarkGray;
//        Do->PerformClick();
//        Do->BackColor = Color::White;
//        ch = 1;
//        fprintf(f,"&d",ch);
//    }
//    else if (e->KeyCode == Keys::W) {
//        Re->BackColor = Color::DarkGray;
//        Re->PerformClick();
//        Re->BackColor = Color::White;
//        ch = 2;
//        fprintf(f, "&d", ch);
//
//    }
//    else if (e->KeyCode == Keys::E) {
//        Mi->BackColor = Color::DarkGray;
//        Mi->PerformClick();
//        Mi->BackColor = Color::White;
//        ch = 3;
//        fprintf(f, "&d", ch);
//
//    }
//    else if (e->KeyCode == Keys::R) {
//        FA->BackColor = Color::DarkGray;
//        FA->PerformClick();
//        FA->BackColor = Color::White;
//        ch = 4;
//        fprintf(f, "&d", ch);
//
//    }
//    else if (e->KeyCode == Keys::T) {
//        So->BackColor = Color::DarkGray;
//        So->PerformClick();
//        So->BackColor = Color::White;
//        ch = 5;
//        fprintf(f, "&d", ch);
//
//
//    }
//    else if (e->KeyCode == Keys::Y) {
//          La->BackColor = Color::DarkGray;
//        La->PerformClick();
//        La->BackColor = Color::White;
//        ch = 6;
//        fprintf(f, "&d", ch);
//
//
//    }
//    else if (e->KeyCode == Keys::U) {
//        Si->BackColor = Color::DarkGray;
//        Si->PerformClick();
//        Si->BackColor = Color::White;
//        ch = 7;
//        fprintf(f, "&d", ch);
//
//    }
//    fclose(f);
// 
//}

//System::Void pianino::MyForm::MyForm_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
//{
//    if (e->KeyCode == Keys::Q)
//    {
//        Do->BackColor = Color::DarkGray;
//        Do->PerformClick();
//        Do->BackColor = Color::White;
//    }
//    else if (e->KeyCode == Keys::W) {
//        Re->BackColor = Color::DarkGray;
//        Re->PerformClick();
//        Re->BackColor = Color::White;
//
//    }
//    else if (e->KeyCode == Keys::E) {
//        Mi->BackColor = Color::DarkGray;
//        Mi->PerformClick();
//        Mi->BackColor = Color::White;
//
//    }
//    else if (e->KeyCode == Keys::R) {
//        FA->BackColor = Color::DarkGray;
//        FA->PerformClick();
//        FA->BackColor = Color::White;
//
//    }
//    else if (e->KeyCode == Keys::T) {
//        So->BackColor = Color::DarkGray;
//        So->PerformClick();
//        So->BackColor = Color::White;
//
//
//    }
//    else if (e->KeyCode == Keys::Y) {
//
//        La->BackColor = Color::DarkGray;
//        La->PerformClick();
//        La->BackColor = Color::White;
//
//
//    }
//    else if (e->KeyCode == Keys::U) {
//
//        Si->BackColor = Color::DarkGray;
//        Si->PerformClick();
//        Si->BackColor = Color::White;
//
//    }
//
//}

System::Void pianino::MyForm::Do_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(130.81, 400);

}
System::Void pianino::MyForm::Re_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(146.83, 400);

}
System::Void pianino::MyForm::Mi_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(164.81, 400);

}

System::Void pianino::MyForm::FA_Click(System::Object^ sender, System::EventArgs^ e) {
	

    
    Beep(174.61, 400);
	
}
System::Void pianino::MyForm::So_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(196.00, 400);

}
System::Void pianino::MyForm::La_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(220.00, 400);

}
System::Void pianino::MyForm::Si_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(246.94, 400);

}
System::Void pianino::MyForm::Mario_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    Beep(330, 100); Sleep(100);
    Beep(330, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(330, 100); Sleep(300);
    Beep(392, 100); Sleep(700);
    Beep(196, 100); Sleep(700);
    Beep(262, 300); Sleep(300);
    Beep(196, 300); Sleep(300);
    Beep(164, 300); Sleep(300);
    Beep(220, 300); Sleep(100);
    Beep(246, 100); Sleep(300);
    Beep(233, 200);
    Beep(220, 100); Sleep(300);
    Beep(196, 100); Sleep(150);
    Beep(330, 100); Sleep(150);
    Beep(392, 100); Sleep(150);
    Beep(440, 100); Sleep(300);
    Beep(349, 100); Sleep(100);
    Beep(392, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(100);
    Beep(247, 100); Sleep(500);
    Beep(262, 300); Sleep(300);
    Beep(196, 300); Sleep(300);
    Beep(164, 300); Sleep(300);
    Beep(220, 300); Sleep(100);
    Beep(246, 100); Sleep(300);
    Beep(233, 200);
    Beep(220, 100); Sleep(300);
    Beep(196, 100); Sleep(150);
    Beep(330, 100); Sleep(150);
    Beep(392, 100); Sleep(150);
    Beep(440, 100); Sleep(300);
    Beep(349, 100); Sleep(100);
    Beep(392, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(100);
    Beep(247, 100); Sleep(900);
    Beep(392, 100); Sleep(100);
    Beep(370, 100); Sleep(100);
    Beep(349, 100); Sleep(100);
    Beep(311, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(207, 100); Sleep(100);
    Beep(220, 100); Sleep(100);
    Beep(262, 100); Sleep(300);
    Beep(220, 100); Sleep(100);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(500);
    Beep(392, 100); Sleep(100);
    Beep(370, 100); Sleep(100);
    Beep(349, 100); Sleep(100);
    Beep(311, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(523, 100); Sleep(300);
    Beep(523, 100); Sleep(100);
    Beep(523, 100); Sleep(1100);
    Beep(392, 100); Sleep(100);
    Beep(370, 100); Sleep(100);
    Beep(349, 100); Sleep(100);
    Beep(311, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(207, 100); Sleep(100);
    Beep(220, 100); Sleep(100);
    Beep(262, 100); Sleep(300);
    Beep(220, 100); Sleep(100);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(500);
    Beep(311, 300); Sleep(300);
    Beep(296, 300); Sleep(300);
    Beep(262, 300); Sleep(1300);
    Beep(262, 100); Sleep(100);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(300);
    Beep(330, 200); Sleep(50);
    Beep(262, 200); Sleep(50);
    Beep(220, 200); Sleep(50);
    Beep(196, 100); Sleep(700);
    Beep(262, 100); Sleep(100);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(100);
    Beep(330, 100); Sleep(700);
    Beep(440, 100); Sleep(300);
    Beep(392, 100); Sleep(500);
    Beep(262, 100); Sleep(100);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(294, 100); Sleep(300);
    Beep(330, 200); Sleep(50);
    Beep(262, 200); Sleep(50);
    Beep(220, 200); Sleep(50);
    Beep(196, 100); Sleep(700);
    /*Intro*/
    Beep(330, 100); Sleep(100);
    Beep(330, 100); Sleep(300);
    Beep(330, 100); Sleep(300);
    Beep(262, 100); Sleep(100);
    Beep(330, 100); Sleep(300);
    Beep(392, 100); Sleep(700);
    Beep(196, 100); Sleep(700);
    Beep(196, 100); Sleep(125);
    Beep(262, 100); Sleep(125);
    Beep(330, 100); Sleep(125);
    Beep(392, 100); Sleep(125);
    Beep(523, 100); Sleep(125);
    Beep(660, 100); Sleep(125);
    Beep(784, 100); Sleep(575);
    Beep(660, 100); Sleep(575);
    Beep(207, 100); Sleep(125);
    Beep(262, 100); Sleep(125);
    Beep(311, 100); Sleep(125);
    Beep(415, 100); Sleep(125);
    Beep(523, 100); Sleep(125);
    Beep(622, 100); Sleep(125);
    Beep(830, 100); Sleep(575);
    Beep(622, 100); Sleep(575);
    Beep(233, 100); Sleep(125);
    Beep(294, 100); Sleep(125);
    Beep(349, 100); Sleep(125);
    Beep(466, 100); Sleep(125);
    Beep(587, 100); Sleep(125);
    Beep(698, 100); Sleep(125);
    Beep(932, 100); Sleep(575);
    Beep(932, 100); Sleep(125);
    Beep(932, 100); Sleep(125);
    Beep(932, 100); Sleep(125);
    Beep(1046, 675);


}

System::Void pianino::MyForm::Herringbone_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(497, 500);
    Sleep(500);
    Beep(497, 500);
    Beep(277, 500);
    Beep(277, 500);
    Beep(440, 500);
    Beep(440, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);

}
System::Void pianino::MyForm::Grasshopper_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    float A = 440.00,
        E = 329.63,
        Ab = 415.30,
        H = 493.88,
        C = 523.25;

    // В траве сидел кузнечик
    Beep(A, 300);
    Beep(E, 300);
    Beep(A, 300);
    Beep(E, 300);
    Beep(A, 300);
    Beep(Ab, 300);
    Beep(Ab, 300);

    // Тишина
    Sleep(600);

    // В траве сидел кузнечик
    Beep(Ab, 300);
    Beep(E, 300);
    Beep(Ab, 300);
    Beep(E, 300);
    Beep(Ab, 300);
    Beep(A, 300);
    Beep(A, 300);

    // Тишина
    Sleep(600);

    // Представьте себе
    Beep(A, 300);
    Beep(H, 300);

    Beep(H, 100);
    Beep(H, 100);
    Beep(H, 300);

    // Представьте себе
    Beep(H, 300);
    Beep(C, 300);

    Beep(C, 100);
    Beep(C, 100);
    Beep(C, 300);

    // Зелененький он был
    Beep(C, 300);
    Beep(C, 300);
    Beep(H, 300);
    Beep(A, 300);
    Beep(Ab, 300);
    Beep(A, 800);


}

//System::Void pianino::MyForm::Its_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
//    int a;
//    MessageBox::Show("Воспроизвести вашу мелодию нажмите-1.Создать вашу мелодию-2. Выйти-3");
//    if (a == 1)
//        fopen_s(&f, "score.txt", "r");
//    else
//        if (a == 2)
//            fopen_s(&f, "score.txt", "w");
//        else
//            if (a == 3)
//                break;
//    
//
//}