<?hh // strict

namespace FizzBuzz\Resolver;

use FizzBuzz\Converter\ConverterInterface;

final class ConverterResolver
{
  public function __construct(
    private ImmVector<ConverterInterface> $converters,
    private ConverterInterface $defaultConverter,
  ): void
  {
  }

  public function resolve(int $number): ConverterInterface
  {
    foreach ($this->converters as $converter) {
      if ($converter->support($number)) {
        return $converter;
      }
    }

    return $this->defaultConverter;
  }
}
