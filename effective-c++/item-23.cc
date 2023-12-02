class WebBrowser{
public:
    void clearCache();
    void clearHistory();
    void removeCookies();

};

// 放在成员函数里
class WebBrowser {
public:
    void clearEverything(){
        clearHistory();
        clearCache();
        removeCookies();
    }
};

// 放在普通函数里
void clearBrowser(WebBrowser& wb) {
    wb.clearCache();
    wb.clearHistory();
    wb.removeCookies();
}
