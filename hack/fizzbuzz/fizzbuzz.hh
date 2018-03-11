<?hh

require_once __DIR__ . '/vendor/hh_autoload.php';

use FizzBuzz\Converter\FizzConverter;
use FizzBuzz\Converter\BuzzConverter;
use FizzBuzz\Converter\FizzBuzzConverter;
use FizzBuzz\Converter\SimpleConverter;
use FizzBuzz\Resolver\ConverterResolver;

$converterResolver = new ConverterResolver(
  ImmVector {
    new FizzBuzzConverter(),
    new FizzConverter(),
    new BuzzConverter(),
  },
  new SimpleConverter(),
);

$numbers = new ImmVector(range(1, 500));

echo implode(
  ', ',
  $numbers->map(
    $number ==> $converterResolver->resolve($number)->convert($number)
  )
) . PHP_EOL;
