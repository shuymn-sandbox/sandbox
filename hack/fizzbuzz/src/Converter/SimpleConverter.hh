<?hh // strict

namespace FizzBuzz\Converter;

final class SimpleConverter implements ConverterInterface
{
  public function convert(int $number): string
  {
    return (string)$number;
  }

  public function support(int $number): bool
  {
    return true;
  }
}
