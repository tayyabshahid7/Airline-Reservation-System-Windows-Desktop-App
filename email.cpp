#include "email.h"

email::email()
{

}

void email::sendemail()
{
//    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

//       // We need to set the username (your email address) and the password
//       // for smtp authentification.

//       smtp.setUser("your_email_address@gmail.com");
//       smtp.setPassword("your_password");

//       // Now we create a MimeMessage object. This will be the email.

//       MimeMessage message;

//       message.setSender(new EmailAddress("your_email_address@gmail.com", "Your Name"));
//       message.addRecipient(new EmailAddress("recipient@host.com", "Recipient's Name"));
//       message.setSubject("SmtpClient for Qt - Demo");

//       // Now add some text to the email.
//       // First we create a MimeText object.

//       MimeText text;

//       text.setText("Hi,\nThis is a simple email message.\n");

//       // Now add it to the mail

//       message.addPart(&text);

//       // Now we can send the mail

//       smtp.connectToHost();
//       smtp.login();
//       smtp.sendMail(message);
//       smtp.quit();

}
