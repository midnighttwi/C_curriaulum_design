
#include "coverage.h"

Coverage::Coverage()
{

}
Coverage::Coverage(vector<Figure*> figure,int figurenum,COVERAGE_TYPE cov_type)
{
    this->figure=figure;
    this->figureNum=figureNum;
}
