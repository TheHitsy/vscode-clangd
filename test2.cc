#include <skepu>
#include <skepu-lib/io.hpp>

int add(int one, int two)
{
	return one + two;
}

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		skepu::io::cout << "Usage: " << argv[0] << " size backend\n";
		exit(1);
	}
	
	const size_t size = atoi(argv[1]);
	auto spec = skepu::BackendSpec{argv[2]};


	skepu::Vector<int> a(size);
	
	
	// b(size), res(size);

	auto temp = skepu::Map(add);



	temp.setBackend(spec);

	temp(res, a, b);
		
	return 0;
}
