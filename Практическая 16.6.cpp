#include <iostream>
#include <sstream>

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

enum switches {
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

// Функция для форматирования цветовой температуры (без iomanip)
std::string formatColorTemperature(double temperature) {
    int roundedTemperature = static_cast<int>(temperature); // Округляем до целого
    return std::to_string(roundedTemperature) + "K";
}

int main()
{

    //Задание 1

    /*float speedDel;
    float speed = 0.f;
    char speedStr [6];
    float delta;
    do {
        std::cout << "speed delta: ";
        std::cin >> speedDel;
        speed += speedDel;
        if (speed > 150.00f) {
            speed = 150.00f;
        }
        else if (speed < 0.00f) {
            speed = 0.f;
        }
        sprintf(speedStr, "%.1f", speed);
        std::cout << "Speed: " << speedStr << std::endl;

    } while (speed > 0.01);*/

    //Задание 2
    /*std::string firstPart;
    std::string secondPart;
    double result;

    std::cout << "insert first part: ";
    std::cin >> firstPart;
    std::cout << "Insert second part: ";
    std::cin >> secondPart;
    //result = firstPart + "." + secondPart;
    result = std::stod(firstPart + "." + secondPart);
    std::cout << result;*/

    //Задание 3

    /*double firstNumber;
    double secondNumber;
    char action;
    std::string exampl;

    std::cout << "Input example: ";
    std::cin >> exampl;

    std::stringstream a(exampl);
    a >> firstNumber >> action >> secondNumber;

    switch (action)
    {
    case '+':
        std::cout << firstNumber + secondNumber;
        break;
    case '-':
        std::cout << firstNumber - secondNumber;
        break;
    case '*':
        std::cout << firstNumber * secondNumber;
        break;
    case '/':
        if (secondNumber == 0)
            std::cout << "You can`t devide by zero" << std::endl;
        else
            std::cout << firstNumber / secondNumber;
    }*/


    // Задание 4

    /*std::string chord;
    std::cout << "Enter chord (digits 1-7): ";
    std::cin >> chord;

    int notes = 0;

    for (char c : chord) {
        int noteIndex = c - '1';

        if (noteIndex >= 0 && noteIndex < 7) {
            notes = notes | (1 << noteIndex);
        }
        else {
            std::cout << "Invalid note: " << c << std::endl;
        }
    }

    std::cout << "Notes in the chord: ";

    if (notes & DO) {
        std::cout << "DO ";
    }
    if (notes & RE) {
        std::cout << "RE ";
    }
    if (notes & MI) {
        std::cout << "MI ";
    }
    if (notes & FA) {
        std::cout << "FA ";
    }
    if (notes & SOL) {
        std::cout << "SOL ";
    }
    if (notes & LA) {
        std::cout << "LA ";
    }
    if (notes & SI) {
        std::cout << "SI ";
    }
    std::cout << std::endl;*/


    //Задание 5
    int temperature_outside = 10;
    int temperature_inside = 20;
    std::string movement = "no";
    std::string lights = "off";
    double color_temperature = 5000.0;
    int switches_state = 0;
    bool water_pipe_heating_on = false;
    bool lights_on = false;
    bool heater_on = false;
    bool conditioner_on = false;
    bool lights_outside_on = false;


    for (int hour = 0; hour < 48; ++hour) {
        std::cout << "Temperature inside, temperature outside, movement, lights:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);
        std::stringstream ss(input_line);
        ss >> temperature_inside >> temperature_outside >> movement >> lights;

        int current_hour = hour % 24;


        if (temperature_outside < 0 && !water_pipe_heating_on) {
            switches_state |= WATER_PIPE_HEATING;
            std::cout << "Water pipe heating ON!" << std::endl;
            water_pipe_heating_on = true;
        }
        else if (temperature_outside > 5 && water_pipe_heating_on) {
            switches_state &= ~WATER_PIPE_HEATING;
            std::cout << "Water pipe heating OFF!" << std::endl;
            water_pipe_heating_on = false;
        }

        bool is_evening = (current_hour > 16 || current_hour < 5);
        bool has_movement = (movement == "yes");
        if (is_evening && has_movement && !lights_outside_on) {
            switches_state |= LIGHTS_OUTSIDE;
            std::cout << "Lights OUTSIDE ON!" << std::endl;
            lights_outside_on = true;
        }
        else if ((!is_evening || !has_movement) && lights_outside_on) {
            switches_state &= ~LIGHTS_OUTSIDE;
            std::cout << "Lights OUTSIDE OFF!" << std::endl;
            lights_outside_on = false;
        }

        if (temperature_inside < 22 && !heater_on) {
            switches_state |= HEATERS;
            std::cout << "Heaters ON!" << std::endl;
            heater_on = true;
        }
        else if (temperature_inside >= 25 && heater_on) {
            switches_state &= ~HEATERS;
            std::cout << "Heaters OFF!" << std::endl;
            heater_on = false;
        }

        if (temperature_inside >= 30 && !conditioner_on) {
            switches_state |= CONDITIONER;
            std::cout << "Conditioner ON!" << std::endl;
            conditioner_on = true;
        }
        else if (temperature_inside <= 25 && conditioner_on) {
            switches_state &= ~CONDITIONER;
            std::cout << "Conditioner OFF!" << std::endl;
            conditioner_on = false;
        }

        bool lights_on_input = (lights == "on");

        if (lights_on_input && !lights_on) {
            switches_state |= LIGHTS_INSIDE;
            std::cout << "Lights ON!" << std::endl;
            lights_on = true;
        }
        else if (!lights_on_input && lights_on) {
            switches_state &= ~LIGHTS_INSIDE;
            std::cout << "Lights OFF!" << std::endl;
            lights_on = false;
        }
        if (lights_on) {
            if (current_hour >= 16 && current_hour < 20) {
                double time_passed = current_hour - 16.0;
                color_temperature = 5000.0 - (time_passed / 4.0) * (5000.0 - 2700.0);
            }
            else if (current_hour == 0) {
                color_temperature = 5000.0;
            }

            std::cout << "Color temperature: " << formatColorTemperature(color_temperature) << std::endl;


        }

        std::cout << "Current time: " << (current_hour < 10 ? "0" : "") << current_hour << ":00" << std::endl;

    }

}
