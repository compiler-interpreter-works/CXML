#ifndef CXML_TEXT_H
#define CXML_TEXT_H

class CXMLText {
 public:
  CXMLText(const std::string &text);

  const std::string &getText() const { return text_; }

  void print(std::ostream &os) const;

  friend std::ostream &operator<<(std::ostream &os, const CXMLText &text);

 private:
  std::string text_;
};

#endif
