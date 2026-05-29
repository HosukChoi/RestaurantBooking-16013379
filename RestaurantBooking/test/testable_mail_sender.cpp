#include <iostream>
#include "../src/mail_sender.cpp"

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		countSendMailMethodIsCalled++;
	}
	bool getCountSendMailMethodIsCalled() {
		return countSendMailMethodIsCalled;
	}
private:
	int countSendMailMethodIsCalled = 0;
};
