#pragma once

#include <iostream>

typedef struct Vector3 {
    float x;
    float y;
    float z;

    Vector3() = default;

    Vector3(float X, float Y, float Z)
            : x(X),
              y(Y),
              z(Z) {

    }

    Vector3(const Vector3 &rhs) {
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
    }

    bool operator==(Vector3 rhs) {
        // I like to be explicit - beard
        if (x == rhs.x && y == rhs.y && z == rhs.z) {
            return true;
        }
        return false;
    }

    Vector3 &operator=(Vector3 &rhs) {
        if (*this == rhs) {
            return *this;
        }
        // Should probably use std copy in here but this will do for now chaps
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
        return *this;
    }

    Vector3 operator+=(const Vector3 &rhs) {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        return *this;
    }

    friend Vector3 operator+(Vector3 lhs, Vector3 rhs) {
        lhs += rhs;
        return lhs;
    }


};

typedef struct Vector4 {
    float x;
    float y;
    float z;
    float w;

    Vector4() = default;

    Vector4(float X, float Y, float Z, float W)
            : x(X),
              y(Y),
              z(Z),
              w(W) {

    }

    Vector4(const Vector4 &rhs) {
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
        w = rhs.w;
    }

    bool operator==(Vector4 rhs) {
        // I like to be explicit - beard
        if (x == rhs.x && y == rhs.y && z == rhs.z && w == rhs.w) {
            return true;
        }
        return false;
    }

    Vector4 &operator=(Vector4 &rhs) {
        if (*this == rhs) {
            return *this;
        }
        // Should probably use std copy in here but this will do for now chaps
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
        w = rhs.w;
        return *this;
    }

    Vector4 operator+=(const Vector4 &rhs) {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        w += rhs.w;
        return *this;
    }

    friend Vector4 operator+(Vector4 lhs, Vector4 rhs) {
        lhs += rhs;
        return lhs;
    }
};

// ToDo: Add implementation of Matrix structures

typedef struct Matrix4x4 {
    Vector4 Matrix[4];
};

typedef struct Matrix4x3 {
    Vector4 Matrix[3];
};

inline Matrix4x4 MatrixIdentity() {
    Matrix4x4 result = {
            Vector4{1.0f, 0.0f, 0.0f, 0.0f},
            Vector4{0.0f, 1.0f, 0.0f, 0.0f},
            Vector4{0.0f, 0.0f, 1.0f, 0.0f},
            Vector4{0.0f, 0.0f, 0.0f, 1.0f},
    };

    return result;
}