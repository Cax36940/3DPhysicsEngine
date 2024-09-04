class Vector3 {

public:
    float x;
    float y;
    float z;

    /**
     * @brief Default constructor
     */
    Vector3() = default;

    /**
     * @brief Copy constructor
     */
    Vector3(const Vector3&) = default;

    /**
     * @brief Move constructor
     */
    Vector3(Vector3&&) = default;

    /**
     * @brief Copy assignment operator
     */
    Vector3& operator=(const Vector3&) = default;

    /**
     * @brief Move assignment operator
     */
    Vector3& operator=(Vector3&&) = default;

    /**
     * @brief Destructor
     */
    ~Vector3() = default;

    /**
     * @brief Constructor from coordinates
     */
    Vector3(const float x, const float y, const float z);

    /**
     * @brief Scalar multiplication on the right
     * @param alpha the scalar
     */
    Vector3 operator*(const float alpha) const;

    /**
     * @brief Scalar multiplication assignment
     * @param alpha the scalar
     */
    Vector3& operator*=(const float alpha);

    /**
     * @brief Scalar multiplication on the left
     * @param alpha the scalar
     * @param vector the vector
     */
    friend Vector3 operator*(const float alpha, const Vector3& vector);

    /**
     * @brief Vector addition (return new vector)
     * @param vector the vector to add to current vector
     */
    Vector3 operator+(const Vector3& vector) const;

    /**
     * @brief Vector addition assignment
     * @param vector the vector to add to current vector
     */
    Vector3& operator+=(const Vector3& vector);

    /**
     * @brief Vector euclidean norm
     * @param vector The vector from which to take the norm
     */
    static float norm(const Vector3& vector);

    /**
     * @brief Vector normalization
     * @param vector The vector to normalize
     */
    static Vector3 normalize(const Vector3& vector);

    /**
     * @brief Vector dot product
     * @param vector_u
     * @param vector_v
     */
    static float dot(const Vector3& vector_u, const Vector3& vector_v);

    /**
     * @brief Vector cross product
     * @param vector_u
     * @param vector_v
     */
    static Vector3 cross(const Vector3& vector_u, const Vector3& vector_v);

};
