        if (input == 1 & !UsernameObserver.expired() && !PasswordObserver.expired()) {
            std::cout << "Login" << std::endl;
            std::cout << "Enter Your Username: ";
            getline(cin, LoginUsername);
            std::cout << "Enter Your Password: ";
            std::cin >> LoginPassword;
        }