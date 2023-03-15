#include "Prerequisites.h"
#include "Commons.h"

class Transform
{
public:
    Transform() = default;
    ~Transform() {};

    void
        init();

    void
        update();

    void
        render();

    void
        destroy();

public:
    Vector3 CubePosition;
    float m_fScale;
    float m_fRotate;
    float m_fSpeed;


};