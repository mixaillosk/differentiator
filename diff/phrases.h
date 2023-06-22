//
// Created by Viol_Let_Ta on 07.05.2023
//

#include <cstdlib>

const char* get_random_trans_phrase();

// const char* TRANSITIONAL_PHRASES[] = {
//     "Преобразуя получаем ",
//     "Нетрудно заметить, что ",
//     "Очевидно, что ",
//     "Обратим внимание, что ",
//     "Не требует объяснений тот факт, что ",
//     "Никто не будет ШоКиРоВаН, если мы скажем, что ",
//     "Несложно заметить, что ",
//     "По известным фактам ",
//     "Если данный кусок вызывавает сомнения, то обратитесь к доказательтсву великой теоремы Ферма ",
//     "Можно увидеть, что ",
//     "Легко привести к виду "
// };

const char* TRANSITIONAL_PHRASES[] = {
    "Transforming we get ",
    "It is not difficult to notice that ",
    "It is obvious that ",
    "Let's pay attention to that ",
    "The fact that ",
    "No one will be shocked if we say that ",
    "It is not difficult to notice that ",
    "According to known facts ",
    "If this piece is in doubt, then refer to the proof of Fermat's great theorem ",
    "It can be seen that ",
    "It is easy to lead to the form "
};

const char* get_random_trans_phrase() {
    long unsigned int index = rand() % (sizeof(TRANSITIONAL_PHRASES) / sizeof(TRANSITIONAL_PHRASES[0]));

    return TRANSITIONAL_PHRASES[index];
}