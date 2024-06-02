# const vs constexpr best practice
* Any constant variable whose initializer is a constant expression should be declared as ``constexpr``
* Any constant variable whose initializer isn't a constant expression should be declared as ``const``

