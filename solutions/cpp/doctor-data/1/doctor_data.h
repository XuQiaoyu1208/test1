
#pragma once
#include <string>

namespace star_map {

    enum class System {
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        Sol,
        EpsilonEridani,
        Omicron2Eridani
    };

}

namespace heaven {

    class Vessel {
    public:

        Vessel(std::string name, int generation)
            : name(name),
              current_system(star_map::System::Sol),
              generation(generation),
              busters(0) {
        }

        Vessel(std::string name, int generation,
               star_map::System c)
            : name(name),
              current_system(c),
              generation(generation),
              busters(0) {
        }

        Vessel replicate(std::string name) const {
            Vessel p = *this;
            p.name = name;
            p.generation =2 ;
            p.current_system = star_map::System::Sol;
            return p;
        }

        void make_buster() {
            busters = 1;
        }

        bool shoot_buster() {
            if (busters == 1) {
                busters = 0;
                return true;
            }
            return false;
        }

        // 成员变量
        std::string name;
        star_map::System current_system;
        int generation;
        int busters;
    };


    // 普通函数：获取年龄较大的 Bob
    inline std::string get_older_bob(
        const Vessel& v1,
        const Vessel& v2
    ) {
        if (v1.generation <= v2.generation) {
            return v1.name;
        }
        else {
            return v2.name;
        }
    }


    // 普通函数：判断是否在同一个系统
    inline bool in_the_same_system(
        const Vessel& v1,
        const Vessel& v2
    ) {
        return v1.current_system == v2.current_system;
    }

}
