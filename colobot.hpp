#include <string>

#ifdef __INTELLISENSE__
  // occurs on using array in different way
  // incomplete type is not allowed
  #pragma diag_suppress 70

  // occurs on using array in different way
  // an array may not have elements of this type
  #pragma diag_suppress 98

  // occurs on using array in different way
  // expression must be a modifiable lvalue
  #pragma diag_suppress 137

  // occurs on using array in different way
  // variable "x" has an unitialized const or reference member
  #pragma diag_suppress 369

  // occurs on using array in different way
  // initialization with '{...}' expected for aggregate object
  #pragma diag_suppress 520

  // occurs on assignment in while() parameter
  // expression must have arithmaetic, unscoped enum, o pointer type but has type 'void'
  #pragma diag_suppress 3362
#endif

#define Any 0

//might need any changes if needed
#define DisplayMessage 0
#define DisplayInfo 0
#define DisplayWarning 0
#define DisplayError 0

#define Houston 0
#define SpaceShip 0
#define BotFactory 0
#define ResearchCenter 0
#define RadarStation 0
#define ExchangePost 0
#define RepairCenter 0
#define DefenseTower 0
#define AutoLab 0
#define PowerStation 0
#define PowerPlant 0
#define NuclearPlant 0
#define Converter 0
#define Derrick 0
#define PowerCaptor 0
#define Vault 0
#define StartArea 0
#define GoalArea 0
#define Target1 0
#define AlienNest 0

#define TitaniumOre 0
#define UraniumOre 0
#define Titanium 0
#define PowerCell 0
#define NuclearCell 0
#define OrgaMatter 0
#define BlackBox 0
#define TNT 0
#define KeyA 0
#define KeyB 0
#define KeyC 0
#define KeyD 0

#define PracticeBot 0
#define TargetBot 0

#define WheeledGrabber 0
#define TrackedGrabber 0
#define WingedGrabber 0
#define LeggedGrabber 0

#define WheeledSniffer 0
#define TrackedSniffer 0
#define WingedSniffer 0
#define LeggedSniffer 0

#define WheeledShooter 0
#define TrackedShooter 0
#define WingedShooter 0
#define LeggedShooter 0

#define WheeledOrgaShooter 0
#define TrackedOrgaShooter 0
#define WingedOrgaShooter 0
#define LeggedOrgaShooter 0

#define WheeledBuilder 0
#define TrackedBuilder 0
#define WingedBuilder 0
#define LeggedBuilder 0

#define Subber 0
#define Recycler 0
#define Shielder 0
#define Thumper 0
#define PhazerShooter 0

#define AlienQueen 0
#define AlienEgg 0
#define AlienAnt 0
#define AlienSpider 0
#define AlienWasp 0
#define AlienWorm 0

#define Me 0
#define Mine 0
#define Barrier 0
#define Wreck 0
#define Ruin 0
#define Bush 0
#define GraviPlant 0
#define Crystal 0
#define BrownMushroom 0
#define GreenMushroom 0

#define BlueFlag 0
#define RedFlag 0
#define GreenFlag 0
#define YellowFlag 0
#define VioletFlag 0
#define WayPoint 0
#define Target2 0
#define PowerSpot 0
#define TitaniumSpot 0
#define UraniumSpot 0

#define ResearchTracked 0
#define ResearchWinged 0
#define ResearchShooter 0
#define ResearchDefenseTower 0
#define ResearchNuclearPlant 0
#define ResearchThumper 0
#define ResearchShielder 0
#define ResearchPhazerShooter 0
#define ResearchBuilder 0

#define ResearchTarget 0
#define ResearchLegged 0
#define ResearcgOrgaShooter 0

#define ResearchSniffer 0
#define ResearchSubber 0
#define ResearchRecycler 0

#define White 0
#define Black 0
#define Gray 0
#define LightGray 0
#define Red 0
#define Pink 0
#define Purple 0
#define Orange 0
#define Yellow 0
#define Beige 0
#define Brown 0
#define Skin 0
#define Green 0
#define LightGreen 0
#define Blue 0
#define LigthBlue 0

#define InFront 0
#define Behind 0
#define EnergyCell 0


namespace object{
  struct point{
    float x, y, z;
    point(float xn = 0, float yn = 0, float zn = 0);

    bool operator==(point p2);
  };

  class object{
    public:
      object();
      void operator=(object o);
      void operator=(object *o);

      bool operator!=(object o);
      bool operator!=(object *o);

      bool operator==(object o);
      bool operator==(object *o);

      const int category, team;
      const point position, velocity;
      const object &energyCell, &load;
      const float
        orientation,
        pitch,
        roll,
        energyLevel,
        shieldLevel,
        temperature,
        altitude,
        lifetime;
        
  };

  class file{
    public:
      void open(string str, string mode);
      void close();
      void writeln(string str);
      string readln();
      bool eof();
      void deletefile(string filename);
  };

  typedef std::string string;
  extern void main();

  //template<typename t> std::string operator+(t t1, std::string s);
  //template<typename t> std::string operator+(std::string s, t t1);
 
  point position;

  bool detect(int cat);
  bool detect(int *cat);
  
  //object radar(int cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter = Any);
  //object radar(int *cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter = Any);
  object radar(int cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter[] = new int[1]{Any});
  object radar(int *cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter[] = new int[1]{Any});

  //object *radarall(int cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter = Any);
  //object *radarall(int *cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter = Any);
  object *radarall(int cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter[] = new int[1]{Any});
  object *radarall(int *cat, float angle = 0, float focus = 360, float min = 0, float max = 1000, float sens = 1, int filter[] = new int[1]{Any});

  object search(int cat, point position = position);
  object search(int *cat, point position = position);

  float direction(point pos);

  float distance(point pos1, point pos2);
  
  float distance2d(point pos1, point pos2);

  void wait(float time);

  int move(float length);

  int turn(float angle);

  int goto_(point position);
  int goto_(point position, float altitude, int goal = 0);

  void motor(float left, float right);

  void jet(float power);

  void message(string text, int type);

  object retobject(int number);

  void errmode(float mode = 1);

  float abstime();

  int pendown(int color = Black, float width = 0.5);
  int penup();
  int penwidth(float color);

  int factory(int cat, string program, object factory);

  int takeoff(object spaceship);

  bool isbusy(object obj);

  int research(int type, object researchCenter);
  bool canresearch(int research);
  bool researched(int research);

  bool canbuild(int category);
  bool buildingenabled(int category);

  point space(point center, float rmin, float rmax, float dist);
  point flatspace(point center, float flatmin, float rmin, float rmax, float dist);
  float topo(point position);
  float flatground(point center, float rmax);

  int grab(int oper = InFront);
  int drop(int oper = InFront);

  int sniff();
  int thump();
  int recycle();
  void shield(float oper, float radius);
  int fire(float time);
  int aim(float y, float x = 0);
  int build(int category);
  int flag(int color);
  int deflag();

  float receive(string name, float power = 10);
  void send(string name, float value, float power = 10);
  bool testinfo(string name, float power = 10);
  void deleteinfo(string name, float power = 10);

  int strlen(string str);
  string strleft(string str, int len);
  string strright(string str, int len);
  string strmid(string str, int pos, int len);
  int strfind(string str, string sub);
  float strval(string str);
  string strupper(string str);
  string strlower(string str);

  float rand();
  float pow(float x, float y);
  float sqrt(float val);
  float floor(float val);
  float ceil(float val);
  float round(float val);
  float trunc(float val);
  float sin(float angle);
  float cos(float angle);
  float tan(float angle);
  float asin(float val);
  float acos(float val);
  float atan(float val);
  float atan2(float y, float x);
};

#define not !
#define goto goto_
#define extends :
#define super this
#define public 
#define private
#define protected
#define synchronized
#define null NULL