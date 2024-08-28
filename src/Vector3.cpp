#include <cmath>
#include "Vector3.hpp"

Vector3::Vector3(const float x, const float y, const float z) : x(x), y(y), z(z) {}

Vector3 Vector3::operator*(const float alpha) const {
    Vector3 ret(alpha * this->x, alpha * this->y, alpha * this->z);
    return ret;
}

Vector3& Vector3::operator*=(const float alpha) {
    this->x *= alpha;
    this->y *= alpha;
    this->z *= alpha;
    return *this;
}

Vector3 operator*(const float alpha, const Vector3& vector) {
    Vector3 ret(alpha * vector.x, alpha * vector.y, alpha * vector.z);
    return ret;
}

Vector3 Vector3::operator+(const Vector3& vector) const {
    Vector3 ret(this->x + vector.x, this->y + vector.y, this->z + vector.z);
    return ret;
}

Vector3& Vector3::operator+=(const Vector3& vector) {
    this->x += vector.x;
    this->y += vector.y;
    this->z += vector.z;
    return *this;
}

float Vector3::norm() const {
    return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z);
}

float Vector3::norm(const Vector3& vector) {
    return sqrtf(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}

Vector3 Vector3::normalize() const {
    float norm = this->norm();
    Vector3 ret(this->x / norm, this->y / norm, this->z / norm);
    return ret;
}

Vector3 Vector3::normalize(const Vector3& vector) {
    float norm = vector.norm();
    Vector3 ret(vector.x / norm, vector.y / norm, vector.z / norm);
    return ret;
}

float Vector3::dot(const Vector3& vector_u, const Vector3& vector_v) {
    return vector_u.x * vector_v.x + vector_u.y * vector_v.y + vector_u.z * vector_v.z;
}

Vector3 Vector3::cross(const Vector3& vector_u, const Vector3& vector_v) {
    Vector3 ret(vector_u.y * vector_v.z - vector_u.z * vector_v.y,
        vector_u.z * vector_v.x - vector_u.x * vector_v.z,
        vector_u.x * vector_v.y - vector_u.y * vector_v.x);
    return ret;
}
