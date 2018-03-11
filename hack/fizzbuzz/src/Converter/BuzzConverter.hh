<?hh // strict

namespace FizzBuzz\Converter;

final class BuzzConverter implements ConverterInterface
{
  public function convert(int $number): string
  {
    return 'Buzz';
  }

  public function support(int $number): bool
  {
    return ($number % 5 === 0);
  }
}
