<?hh // strict

namespace FizzBuzz\Converter;

interface ConverterInterface
{
  public function convert(int $number): string;

  public function support(int $number): bool;
}
