<?hh // strict

namespace FizzBuzz\Converter;

final class FizzConverter implements ConverterInterface
{
  public function convert(int $number): string
  {
    return 'Fizz';
  }

  public function support(int $number): bool
  {
    return ($number % 3 === 0);
  }
}
