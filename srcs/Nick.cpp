#incude "Server.hpp"

bool checkNickame(irc::Server *srv,std::string nickname) {
    std::map<int, irc::User *> Users(srv->getUsers());
    std::map<int, irc::User *>::iterator it(Users.begin());
    for (; it != Users.end(); it++)
    {
        if (!nickname.compare((*it).second->getNickname()))
            return (false);
    }
    return (true);
}



