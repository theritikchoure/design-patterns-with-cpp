#include <iostream>
#include <stdexcept>
#include <memory>
#include <string>

using namespace std;

// Notification interface
class Notification
{
public:
    virtual void sendNotification() = 0; // Pure virtual function
    virtual ~Notification() = default;   // Virtual destructor
};

class EmailNotification : public Notification
{
public:
    void sendNotification() override
    {
        cout << "Notification sent using email" << endl;
    }
};

class WebPushNotification : public Notification
{
public:
    void sendNotification() override
    {
        cout << "Notification sent using web push" << endl;
    }
};

class NotificationSystem
{
public:
    virtual unique_ptr<Notification> createNotification() = 0;

    void sendNotification()
    {
        unique_ptr<Notification> notificationChannel = createNotification();
        notificationChannel->sendNotification();
    }

    virtual ~NotificationSystem() = default;
};

class EmailNotificationSystem : public NotificationSystem
{
public:
    unique_ptr<Notification> createNotification() override
    {
        return make_unique<EmailNotification>();
    }
};

class WebPushNotificationSystem : public NotificationSystem
{
public:
    unique_ptr<Notification> createNotification() override
    {
        return make_unique<WebPushNotification>();
    }
};

class Application
{
private:
    unique_ptr<NotificationSystem> notificationSystem;

public:
    void initialize(const string &configOs)
    {
        if (configOs == "email")
        {
            notificationSystem = make_unique<EmailNotificationSystem>();
        }
        else if (configOs == "web")
        {
            notificationSystem = make_unique<WebPushNotificationSystem>();
        }
        else
        {
            throw runtime_error("Error! Unknown notification type");
        }
    }

    void run()
    {
        if (notificationSystem)
        {
            notificationSystem->sendNotification();
        }
        else
        {
            cerr << "Notification system is not initialized." << endl;
        }
    }
};

int main()
{
    Application app;

    try
    {
        app.initialize("email"); // Simulate configuration input
        app.run();
    }
    catch (const runtime_error &e)
    {
        cerr << "Application error: " << e.what() << endl;
    }

    return 0;
}
