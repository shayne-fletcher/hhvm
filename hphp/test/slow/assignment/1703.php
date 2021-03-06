<?hh

function f($a) {
  var_dump($a);
}
class ClassA {
  public $val;
  function foo() {
    f($val = 1);
  }
  function bar() {
    f($this->val = 1);
  }
  function goo() {
    f($val = 'val');
    f($this->$val = 2);
  }
  function zoo() {
    try {
      var_dump($val);
    } catch (UndefinedVariableException $e) {
      var_dump($e->getMessage());
    }
    var_dump($this->val);
  }
}
function foo() {
  f($val2 = 1);
}

<<__EntryPoint>>
function main() {
  $obj = new ClassA();
  var_dump($obj);
  $obj->foo();
  var_dump($obj);
  $obj->bar();
  var_dump($obj);
  $obj->goo();
  var_dump($obj);
  $obj->zoo();
}
