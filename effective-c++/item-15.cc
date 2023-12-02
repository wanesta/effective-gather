/*
 * item 15: 有时候许多API直接引用资源，所以有时候你将不得不绕过资源管理对象，直接处理原始资源。
 * 问题引出: std::shared_ptr<Investment>pInv(createInvestment()); //item-13
 *          int daysHeld(const Investment *pi); //返回投资已有天数
 *          int days = daysHeld(pInv);  //错误，参数类型不匹配
 *          //int days = daysHeld(pInv.get())   //正确，把pInv中原始指针传递给daysHeld
 *          一般有两种方式，隐式和显式转换
 *
 */
#include <iostream>

struct FontHandle{
    int ID;
    bool isoccupied = false;
    int size = 8;
};

FontHandle getFont(FontHandle fh){
    fh.isoccupied = true;
    std::cout << "获取FontHandle对象， ID为" << fh.ID << std::endl;
    return fh;
}

void releaseFont(FontHandle fh){
    fh.isoccupied = true;
    std::cout << "获取FontHandle对象， ID为" << fh.ID << std::endl;
}
class Font{ //RAII
public:
    explicit Font(FontHandle fh): fh(fh){ //获取资源   使用pass-by-value

    }
    ~Font(){
        releaseFont(fh);    //释放资源
    }
    FontHandle get() const {return fh;} //显示转换函数
    operator FontHandle () const {return fh;}   //隐式转换函数
private:
    FontHandle fh;   //原始字体资源
};
void changeFontSize(FontHandle f, int newSize){
    f.size = newSize;
    std::cout << "ID为" << f.ID << "size改变为" << f.size << std::endl;
}
FontHandle fontHandle;

int main(){
    Font font(getFont(fontHandle));
    int newFontSize = 10;
    changeFontSize(font.get(), newFontSize); //明确将Font转换为FontHandle
    newFontSize = 12; //第二步加入
    changeFontSize(font, newFontSize); //隐式调用
}