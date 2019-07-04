
struct finger
{
     int volt ;
    int degree;
};

struct wrist
{
     int volt ;
    int degree;
    struct finger *F
};


struct elbow
{
     int volt ;
    int degree;
    struct wrist *W
};


struct shoulder
{
    int volt ;
    int degree;
    struct elbow *E
};
struct arm
{
    struct shoulder s;
    struct elbow e;
    struct wrist w;
    struct finger f;

}Right_ARM,Left_ARM;


struct foot
{
    int volt ;
    int degree;

};

struct knee
{
    int volt ;
    int degree;
    struct foot *foot_ptr;
};

struct waist_end
{
    int volt ;
    int degree;
    struct knee *k
};


struct leg
{
    struct waist_end w_e;
    struct knee k;
    struct foot f;
}Right_LEG,Left_LEG;
