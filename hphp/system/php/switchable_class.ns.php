<?hh // partial

namespace HH {

/**
 * Base helper class for the enum class feature
 */
final class SwitchableClass<+T> {
  public function __construct(private T $data) {}

  <<__Pure>>
  public function data(): T {
    return $this->data;
  }
}

}
