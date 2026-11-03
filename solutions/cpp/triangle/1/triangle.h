#pragma once

namespace triangle {

        enum class flavor {
        equilateral,  // 等边三角形
        isosceles,    // 等腰三角形
        scalene       // 不等边三角形
        };
    bool is_true(float a,float b,float c);
    triangle::flavor kind(float a,float b,float c);
// TODO: add your solution here

}  // namespace triangle
