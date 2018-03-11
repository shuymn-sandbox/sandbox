<?hh // strict

namespace FizzBuzz\Converter;

final class FizzBuzzConverter implements ConverterInterface
{
  public function convert(int $number): string
  {
    return 'FizzBuzz';
  }

  public function support(int $number): bool
  {
    return ($number % 3 === 0 && $number % 5 === 0);
  }
}
