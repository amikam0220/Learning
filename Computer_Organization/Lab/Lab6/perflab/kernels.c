#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

/*
 * Please fill in the following team struct
 */
team_t team = {
    "Nannimi", /* Team name */

    "Li Rongyao",                       /* First member full name */
    "lirongyao6310@stu2024.jnu.edu.cn", /* First member email address */

    "Chen Tuanfei",  /* Second or third member full name (leave blank if none) */
    "His/Her Email?" /* Second or third member email addr (leave blank if none) */
};

/***************
 * ROTATE KERNEL
 ***************/

/******************************************************
 * Your different versions of the rotate kernel go here
 ******************************************************/

/*
 * naive_rotate - The naive baseline version of rotate
 */
char naive_rotate_descr[] = "naive_rotate: Naive baseline implementation";
void naive_rotate(int dim, pixel *src, pixel *dst)
{
    int i, j;

    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            dst[RIDX(dim - 1 - j, i, dim)] = src[RIDX(i, j, dim)];
}

/*
 * rotate_c - Optimize the loop sequence to match memory access
 */
char rotate_c_descr[] = "rotate_c: Optimize the loop sequence to match accession";
void rotate_c(int dim, pixel *src, pixel *dst)
{
    for (int j = 0; j < dim; j++)
    {
        for (int i = 0; i < dim; i++)
        {
            dst[RIDX(dim - 1 - j, i, dim)] = src[RIDX(i, j, dim)];
        }
    }
}

/*
 * rotate_b8 - Handle successive 8 x 8 block of matrix
 */

char rotate_b8_descr[] = "rotate_b8 : Handle successive 8 x 8 block of matrix";
void rotate_b8(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 8)
    {
        for (int j = 0; j < dim; j += 8)
        {
            for (int bi = i; bi < i + 8 && bi < dim; bi++)
            {
                for (int bj = j; bj < j + 8 && bi < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                }
            }
        }
    }
}

/*
 * rotate_b4 - Handle successive 4 x 4 block of matrix
 */

char rotate_b4_descr[] = "rotate_b4 : Handle successive 4 x 4 block of matrix";
void rotate_b4(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 4)
    {
        for (int j = 0; j < dim; j += 4)
        {
            for (int bi = i; bi < i + 4 && bi < dim; bi++)
            {
                for (int bj = j; bj < j + 4 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                }
            }
        }
    }
}

/*
 * rotate_b16_u2 - Handle successive 16 x 16 block of matrix and unroll the block with the step size of 2
 */

char rotate_b16_u2_descr[] = "rotate_b16_u2 : Handle successive 16 x 16 block of matrix and unroll the block with the step size of 2";
void rotate_b16_u2(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 16)
    {
        for (int j = 0; j < dim; j += 16)
        {
            for (int bi = i; bi < i + 16 && bi < dim; bi += 2)
            {
                int bi1_valid = (bi + 1 < i + 16) && (bi + 1 < dim);

                for (int bj = j; bj < j + 16 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];

                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b32_u2 - Handle successive 32 x 32 block of matrix and unroll the block with the step size of 2
 */

char rotate_b32_u2_descr[] = "rotate_b32_u2 : Handle successive 32 x 32 block of matrix and unroll the block with the step size of 2";
void rotate_b32_u2(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 32)
    {
        for (int j = 0; j < dim; j += 32)
        {
            for (int bi = i; bi < i + 32 && bi < dim; bi += 2)
            {
                int bi1_valid = (bi + 1 < i + 32) && (bi + 1 < dim);
                for (int bj = j; bj < j + 32 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];

                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b8_u4 - Handle successive 8 x 8 block of matrix, unroll the block with the step size of 4
 */

char rotate_b8_u4_descr[] = "rotate_b8_u4 - Handle successive 8 x 8 block of matrix, unroll the block with the step size of 4";
void rotate_b8_u4(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 8)
    {
        for (int j = 0; j < dim; j += 8)
        {
            for (int bi = i; bi < i + 8 && bi < dim; bi += 4)

            {
                int bi1_valid = (bi + 1 < i + 8) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 8) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 8) && (bi + 3 < dim);
                for (int bj = j; bj < j + 8 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b8_u4_c - Handle successive 8 x 8 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access
 */

char rotate_b8_u4_c_descr[] = "rotate_b8_u4_c - Handle successive 8 x 8 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access";
void rotate_b8_u4_c(int dim, pixel *src, pixel *dst)
{
    for (int j = 0; j < dim; j += 8)
    {
        for (int i = 0; i < dim; i += 8)
        {
            for (int bi = i; bi < i + 8 && bi < dim; bi += 4)

            {
                int bi1_valid = (bi + 1 < i + 8) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 8) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 8) && (bi + 3 < dim);
                for (int bj = j; bj < j + 8 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b16_u4 - Handle successive 16 x 16 block of matrix, unroll the block with the step size of 4
 */

char rotate_b16_u4_descr[] = "rotate_b16_u4 - Handle successive 16 x 16 block of matrix, unroll the block with the step size of 4";
void rotate_b16_u4(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 16)
    {
        for (int j = 0; j < dim; j += 16)
        {
            for (int bi = i; bi < i + 16 && bi < dim; bi += 4)
            {
                int bi1_valid = (bi + 1 < i + 16) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 16) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 16) && (bi + 3 < dim);
                for (int bj = j; bj < j + 16 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b16_u4_c - Handle successive 16 x 16 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access
 */

char rotate_b16_u4_c_descr[] = "rotate_b16_u4_c - Handle successive 16 x 16 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access";
void rotate_b16_u4_c(int dim, pixel *src, pixel *dst)
{
    for (int j = 0; j < dim; j += 16)
    {
        for (int i = 0; i < dim; i += 16)
        {
            for (int bi = i; bi < i + 16 && bi < dim; bi += 4)

            {
                int bi1_valid = (bi + 1 < i + 16) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 16) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 16) && (bi + 3 < dim);
                for (int bj = j; bj < j + 16 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b32_u4 - Handle successive 32 x 32 block of matrix, unroll the block with the step size of 4
 */

char rotate_b32_u4_descr[] = "rotate_b32_u4 - Handle successive 32 x 32 block of matrix, unroll the block with the step size of 4";
void rotate_b32_u4(int dim, pixel *src, pixel *dst)
{
    for (int i = 0; i < dim; i += 32)
    {
        for (int j = 0; j < dim; j += 32)
        {
            for (int bi = i; bi < i + 32 && bi < dim; bi += 4)

            {
                int bi1_valid = (bi + 1 < i + 32) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 32) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 32) && (bi + 3 < dim);
                for (int bj = j; bj < j + 32 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate_b32_u4_c - Handle successive 32 x 32 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access
 */

char rotate_b32_u4_c_descr[] = "rotate_b32_u4_c - Handle successive 32 x 32 block of matrix, unroll the block with the step size of 4 and optimize the loop sequence to match memory access";
void rotate_b32_u4_c(int dim, pixel *src, pixel *dst)
{
    for (int j = 0; j < dim; j += 32)
    {
        for (int i = 0; i < dim; i += 32)
        {
            for (int bi = i; bi < i + 32 && bi < dim; bi += 4)

            {
                int bi1_valid = (bi + 1 < i + 32) && (bi + 1 < dim);
                int bi2_valid = (bi + 2 < i + 32) && (bi + 2 < dim);
                int bi3_valid = (bi + 3 < i + 32) && (bi + 3 < dim);
                for (int bj = j; bj < j + 32 && bj < dim; bj++)
                {
                    dst[RIDX(dim - 1 - bj, bi, dim)] = src[RIDX(bi, bj, dim)];
                    if (bi1_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 1, dim)] = src[RIDX(bi + 1, bj, dim)];
                    }

                    if (bi2_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 2, dim)] = src[RIDX(bi + 2, bj, dim)];
                    }

                    if (bi3_valid)
                    {
                        dst[RIDX(dim - 1 - bj, bi + 3, dim)] = src[RIDX(bi + 3, bj, dim)];
                    }
                }
            }
        }
    }
}

/*
 * rotate - Your current working version of rotate
 * IMPORTANT: This is the version you will be graded on
 */
char rotate_descr[] = "rotate: Current working version";
void rotate(int dim, pixel *src, pixel *dst)
{
    naive_rotate(dim, src, dst);
}

/*********************************************************************
 * register_rotate_functions - Register all of your different versions
 *     of the rotate kernel with the driver by calling the
 *     add_rotate_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_rotate_functions()
{
    add_rotate_function(&naive_rotate, naive_rotate_descr);
    add_rotate_function(&rotate, rotate_descr);
    /* ... Register additional test functions here */
}

/***************
 * SMOOTH KERNEL
 **************/

/***************************************************************
 * Various typedefs and helper functions for the smooth function
 * You may modify these any way you like.
 **************************************************************/

/* A struct used to compute averaged pixel value */
typedef struct
{
    int red;
    int green;
    int blue;
    int num;
} pixel_sum;

/* Compute min and max of two integers, respectively */
static int min(int a, int b) { return (a < b ? a : b); }
static int max(int a, int b) { return (a > b ? a : b); }

/*
 * initialize_pixel_sum - Initializes all fields of sum to 0
 */
static void initialize_pixel_sum(pixel_sum *sum)
{
    sum->red = sum->green = sum->blue = 0;
    sum->num = 0;
    return;
}

/*
 * accumulate_sum - Accumulates field values of p in corresponding
 * fields of sum
 */
static void accumulate_sum(pixel_sum *sum, pixel p)
{
    sum->red += (int)p.red;
    sum->green += (int)p.green;
    sum->blue += (int)p.blue;
    sum->num++;
    return;
}

/*
 * assign_sum_to_pixel - Computes averaged pixel value in current_pixel
 */
static void assign_sum_to_pixel(pixel *current_pixel, pixel_sum sum)
{
    current_pixel->red = (unsigned short)(sum.red / sum.num);
    current_pixel->green = (unsigned short)(sum.green / sum.num);
    current_pixel->blue = (unsigned short)(sum.blue / sum.num);
    return;
}

/*
 * avg - Returns averaged pixel value at (i,j)
 */
static pixel avg(int dim, int i, int j, pixel *src)
{
    int ii, jj;
    pixel_sum sum;
    pixel current_pixel;

    initialize_pixel_sum(&sum);
    for (ii = max(i - 1, 0); ii <= min(i + 1, dim - 1); ii++)
        for (jj = max(j - 1, 0); jj <= min(j + 1, dim - 1); jj++)
            accumulate_sum(&sum, src[RIDX(ii, jj, dim)]);

    assign_sum_to_pixel(&current_pixel, sum);
    return current_pixel;
}

/******************************************************
 * Your different versions of the smooth kernel go here
 ******************************************************/

/*
 * naive_smooth - The naive baseline version of smooth
 */
char naive_smooth_descr[] = "naive_smooth: Naive baseline implementation";
void naive_smooth(int dim, pixel *src, pixel *dst)
{
    int i, j;

    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            dst[RIDX(i, j, dim)] = avg(dim, i, j, src);
}

/*
 * smooth - Your current working version of smooth.
 * IMPORTANT: This is the version you will be graded on
 */

char smooth_inc_descr[] = "smooth_inc: Incremental sum update";
void smooth_inc(int dim, pixel *src, pixel *dst)
{
    pixel_sum sum;
    int i, j;

    // dim == 1
    if (dim == 1)
    {
        dst[0] = src[0];
        return;
    }

    // dim == 2
    if (dim == 2)
    {
        sum.red = src[0].red + src[1].red + src[2].red + src[3].red;
        sum.green = src[0].green + src[1].green + src[2].green + src[3].green;
        sum.blue = src[0].blue + src[1].blue + src[2].blue + src[3].blue;
        dst[0].red = dst[1].red = dst[2].red = dst[3].red = (unsigned short)(sum.red >> 2);
        dst[0].green = dst[1].green = dst[2].green = dst[3].green = (unsigned short)(sum.green >> 2);
        dst[0].blue = dst[1].blue = dst[2].blue = dst[3].blue = (unsigned short)(sum.blue >> 2);
        return;
    }

    // left top
    sum.red = src[0].red + src[1].red + src[dim].red + src[dim + 1].red;
    sum.green = src[0].green + src[1].green + src[dim].green + src[dim + 1].green;
    sum.blue = src[0].blue + src[1].blue + src[dim].blue + src[dim + 1].blue;
    dst[0].red = (unsigned short)(sum.red >> 2);
    dst[0].green = (unsigned short)(sum.green >> 2);
    dst[0].blue = (unsigned short)(sum.blue >> 2);

    // right top
    sum.red = src[dim - 2].red + src[dim - 1].red + src[2 * dim - 2].red + src[2 * dim - 1].red;
    sum.green = src[dim - 2].green + src[dim - 1].green + src[2 * dim - 2].green + src[2 * dim - 1].green;
    sum.blue = src[dim - 2].blue + src[dim - 1].blue + src[2 * dim - 2].blue + src[2 * dim - 1].blue;
    dst[dim - 1].red = (unsigned short)(sum.red >> 2);
    dst[dim - 1].green = (unsigned short)(sum.green >> 2);
    dst[dim - 1].blue = (unsigned short)(sum.blue >> 2);

    // left bottom
    int last_row = (dim - 1) * dim;
    sum.red = src[last_row - dim].red + src[last_row - dim + 1].red + src[last_row].red + src[last_row + 1].red;
    sum.green = src[last_row - dim].green + src[last_row - dim + 1].green + src[last_row].green + src[last_row + 1].green;
    sum.blue = src[last_row - dim].blue + src[last_row - dim + 1].blue + src[last_row].blue + src[last_row + 1].blue;
    dst[last_row].red = (unsigned short)(sum.red >> 2);
    dst[last_row].green = (unsigned short)(sum.green >> 2);
    dst[last_row].blue = (unsigned short)(sum.blue >> 2);

    // right bottom
    sum.red = src[last_row - 2].red + src[last_row - 1].red + src[last_row + dim - 2].red + src[last_row + dim - 1].red;
    sum.green = src[last_row - 2].green + src[last_row - 1].green + src[last_row + dim - 2].green + src[last_row + dim - 1].green;
    sum.blue = src[last_row - 2].blue + src[last_row - 1].blue + src[last_row + dim - 2].blue + src[last_row + dim - 1].blue;
    dst[last_row + dim - 1].red = (unsigned short)(sum.red >> 2);
    dst[last_row + dim - 1].green = (unsigned short)(sum.green >> 2);
    dst[last_row + dim - 1].blue = (unsigned short)(sum.blue >> 2);

    // handle the first row
    for (j = 1; j < dim - 1; j++)
    {
        sum.red = src[j - 1].red + src[j].red + src[j + 1].red +
                  src[dim + j - 1].red + src[dim + j].red + src[dim + j + 1].red;
        sum.green = src[j - 1].green + src[j].green + src[j + 1].green +
                    src[dim + j - 1].green + src[dim + j].green + src[dim + j + 1].green;
        sum.blue = src[j - 1].blue + src[j].blue + src[j + 1].blue +
                   src[dim + j - 1].blue + src[dim + j].blue + src[dim + j + 1].blue;
        dst[j].red = (unsigned short)(sum.red / 6);
        dst[j].green = (unsigned short)(sum.green / 6);
        dst[j].blue = (unsigned short)(sum.blue / 6);
    }

    // handle the first column
    for (i = 1; i < dim - 1; i++)
    {
        int idx = i * dim;
        sum.red = src[idx - dim].red + src[idx - dim + 1].red +
                  src[idx].red + src[idx + 1].red +
                  src[idx + dim].red + src[idx + dim + 1].red;
        sum.green = src[idx - dim].green + src[idx - dim + 1].green +
                    src[idx].green + src[idx + 1].green +
                    src[idx + dim].green + src[idx + dim + 1].green;
        sum.blue = src[idx - dim].blue + src[idx - dim + 1].blue +
                   src[idx].blue + src[idx + 1].blue +
                   src[idx + dim].blue + src[idx + dim + 1].blue;
        dst[idx].red = (unsigned short)(sum.red / 6);
        dst[idx].green = (unsigned short)(sum.green / 6);
        dst[idx].blue = (unsigned short)(sum.blue / 6);
    }

    // handle the last row
    int last = (dim - 1) * dim;
    for (j = 1; j < dim - 1; j++)
    {
        sum.red = src[last - dim + j - 1].red + src[last - dim + j].red + src[last - dim + j + 1].red +
                  src[last + j - 1].red + src[last + j].red + src[last + j + 1].red;
        sum.green = src[last - dim + j - 1].green + src[last - dim + j].green + src[last - dim + j + 1].green +
                    src[last + j - 1].green + src[last + j].green + src[last + j + 1].green;
        sum.blue = src[last - dim + j - 1].blue + src[last - dim + j].blue + src[last - dim + j + 1].blue +
                   src[last + j - 1].blue + src[last + j].blue + src[last + j + 1].blue;
        dst[last + j].red = (unsigned short)(sum.red / 6);
        dst[last + j].green = (unsigned short)(sum.green / 6);
        dst[last + j].blue = (unsigned short)(sum.blue / 6);
    }

    // handle the last column
    for (i = 1; i < dim - 1; i++)
    {
        int idx = i * dim + dim - 1;
        sum.red = src[idx - dim - 1].red + src[idx - dim].red +
                  src[idx - 1].red + src[idx].red +
                  src[idx + dim - 1].red + src[idx + dim].red;
        sum.green = src[idx - dim - 1].green + src[idx - dim].green +
                    src[idx - 1].green + src[idx].green +
                    src[idx + dim - 1].green + src[idx + dim].green;
        sum.blue = src[idx - dim - 1].blue + src[idx - dim].blue +
                   src[idx - 1].blue + src[idx].blue +
                   src[idx + dim - 1].blue + src[idx + dim].blue;
        dst[idx].red = (unsigned short)(sum.red / 6);
        dst[idx].green = (unsigned short)(sum.green / 6);
        dst[idx].blue = (unsigned short)(sum.blue / 6);
    }

    // handle other rows by sliding blocks and renewing increment
    for (int i = 1; i < dim - 1; i++)
    {
        // initialize the start of each row
        sum.red = sum.green = sum.blue = 0;
        int num = 0;
        for (int ii = i - 1; ii <= i + 1; ii++)
        {
            for (int jj = 0; jj <= 2; jj++)
            {
                sum.red += src[RIDX(ii, jj, dim)].red;
                sum.green += src[RIDX(ii, jj, dim)].green;
                sum.blue += src[RIDX(ii, jj, dim)].blue;
                num++;
            }
        }
        dst[RIDX(i, 1, dim)].red = (unsigned short)(sum.red / num);
        dst[RIDX(i, 1, dim)].green = (unsigned short)(sum.green / num);
        dst[RIDX(i, 1, dim)].blue = (unsigned short)(sum.blue / num);

        // slide the block and renew increment
        for (j = 2; j < dim - 1; j++)
        {
            // minus left column
            for (int ii = i - 1; ii <= i + 1; ii++)
            {
                sum.red -= src[RIDX(ii, j - 2, dim)].red;
                sum.green -= src[RIDX(ii, j - 2, dim)].green;
                sum.blue -= src[RIDX(ii, j - 2, dim)].blue;
            }
            num -= 3;

            // add right column
            for (int ii = i - 1; ii <= i + 1; ii++)
            {
                sum.red += src[RIDX(ii, j + 1, dim)].red;
                sum.green += src[RIDX(ii, j + 1, dim)].green;
                sum.blue += src[RIDX(ii, j + 1, dim)].blue;
            }
            num += 3;

            dst[RIDX(i, j, dim)].red = (unsigned short)(sum.red / num);
            dst[RIDX(i, j, dim)].green = (unsigned short)(sum.green / num);
            dst[RIDX(i, j, dim)].blue = (unsigned short)(sum.blue / num);
        }
    }
}

char smooth_descr[] = "smooth: Current working version";
void smooth(int dim, pixel *src, pixel *dst)
{
    smooth_inc(dim, src, dst);
}

/*********************************************************************
 * register_smooth_functions - Register all of your different versions
 *     of the smooth kernel with the driver by calling the
 *     add_smooth_function() for each test function.  When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_smooth_functions()
{
    add_smooth_function(&smooth, smooth_descr);
    add_smooth_function(&naive_smooth, naive_smooth_descr);
    /* ... Register additional test functions here */
}
