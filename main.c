#include <stdio.h>

#include "calculator.h"

int main(int argc, char* argv[])
{
    byte_8 result;
    simple_queue_t output;
    simple_stack_t ops;

	if (argc != 2)
	{
		fprintf(stderr, "Use %s 'expression'\n", argv[0]);
		return 1;
	}
    queue_init(&output);
    stack_init(&ops);

    /* Convert to RPN */
    shunting_yard(argv[1], &ops, &output);

    /* Compute result */
    result = compute_rpn(&output);
    printf("result: %lld\n", result);
    return 0;
}
