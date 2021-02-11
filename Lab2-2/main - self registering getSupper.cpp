#include <iostream>
#include <string>
#include <set>



/*******************************************************************************
**  Abstract Class  (Generalization)
*******************************************************************************/
class Person
{
  public:
    virtual std::string getSupper() const = 0;

    virtual std::string transport() const = 0;
    virtual std::string pay()       const = 0;
    virtual std::string food()      const = 0;

    static auto & entirePopulation()
    { return people; }

    virtual ~Person()
    { people.erase( this ); }


  protected:
    // Enable derived classes to register themselves into a collection of people
    Person()
    { people.insert( this ); }

    inline static std::set<Person *> people;  // collection with no duplicates
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class Wife : public Person
{
  public:
    Wife( const std::string & name = "Mom" )
      : _name( name )
    {}


    std::string getSupper() const override
    { return _name + transport() + pay() + food(); }


    std::string transport() const override
    { return " will drive the car, "; }


    std::string pay() const override
    { return "pay by card, "; }


    std::string food() const override
    { return "and buy Chicken Cordon Bleu with Chardonnay."; }


    ~Wife() override = default;


  private:
    std::string _name;
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class TeenagedSon : public Person
{
  public:
    TeenagedSon( const std::string & name = "Bobby" )
      : _nickName( name )
    {}


    std::string getSupper() const override
    { return _nickName + transport() + food() + pay(); }


    std::string transport() const override
    { return " will ride a bicycle, "; }


    std::string pay() const override
    { return "and pay by cash."; }


    std::string food() const override
    { return "buy pizza, "; }


    ~TeenagedSon() override = default;


  private:
    std::string _nickName;
};
/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class CollegeStudent : public Person
{
public:
    CollegeStudent(const std::string& name = "College Student")
        : _nickName(name)
    {}


    std::string getSupper() const override
    {
        return _nickName + transport() + food() + pay();
    }


    std::string transport() const override
    {
        return " Has food delivered, ";
    }


    std::string pay() const override
    {
        return "and pay by ApplePay";
    }


    std::string food() const override
    {
        return "eats Ramen Noodles, ";
    }


    ~CollegeStudent() override = default;


private:
    std::string _nickName;
};
/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class Titans : public Person
{
public:
    Titans(const std::string& name = "Yusuke")
        : _nickName(name)
    {}


    std::string getSupper() const override
    {
        return _nickName + transport() + food() + pay();
    }


    std::string transport() const override
    {
        return " use Uber Eats, ";
    }


    std::string pay() const override
    {
        return "and pay by coupon ticket.";
    }


    std::string food() const override
    {
        return "buy sushi, ";
    }


    ~Titans() override = default;


private:
    std::string _nickName;
};

/*******************************************************************************
**  Code to the Interface
*******************************************************************************/
// Passing by reference (vice value) is imperative!!  Pass by reference either by reference (&) or by pointer (*)
std::string doSomething( const Person & person )
{ return person.getSupper(); }




/*******************************************************************************
**  Create concrete objects and process those object polymorphically
*******************************************************************************/
int main()
{
  Wife        mom;
  TeenagedSon son;
  CollegeStudent collegeStudent;
  Titans yusuke;

  std::cout << doSomething(son) << '\n';
  std::cout << doSomething(mom) << "\n";
  std::cout << doSomething(collegeStudent) << "\n";
  std::cout << doSomething(yusuke) << "\n\n\n";



  for( auto && person : Person::entirePopulation() ) std::cout << doSomething( *person ) << '\n';
}
