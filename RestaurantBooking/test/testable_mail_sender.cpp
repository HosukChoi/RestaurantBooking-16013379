#include <iostream>
#include "gmock/gmock.h"
#include "../src/mail_sender.cpp"

class TestableMailSender : public MailSender {
public:
	MOCK_METHOD(void, sendMail, (Schedule*), (override));
//	void sendMail(Schedule* schedule) override {
//		countSendMailMethodIsCalled++;
//	}
//	bool getCountSendMailMethodIsCalled() {
//		return countSendMailMethodIsCalled;
//	}
//private:
//	int countSendMailMethodIsCalled = 0;
};
