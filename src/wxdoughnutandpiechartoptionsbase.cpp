/*
	Copyright (c) 2016 Xavier Leclercq

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
	IN THE SOFTWARE.
*/

#include "wxdoughnutandpiechartoptionsbase.h"

wxDoughnutAndPieChartOptionsBase::wxDoughnutAndPieChartOptionsBase(unsigned int percentageInnerCutout)
	: m_sliceStrokeWidth(2), m_percentageInnerCutout(percentageInnerCutout), 
	m_showTooltips(true)
{
}

unsigned int wxDoughnutAndPieChartOptionsBase::GetSliceStrokeWidth() const
{
	return m_sliceStrokeWidth;
}

unsigned int wxDoughnutAndPieChartOptionsBase::GetPercentageInnerCutout() const
{
	return m_percentageInnerCutout;
}

bool wxDoughnutAndPieChartOptionsBase::ShowTooltips() const
{
	return m_showTooltips;
}

void wxDoughnutAndPieChartOptionsBase::SetSliceStrokeWidth(unsigned int strokeWidth)
{
	m_sliceStrokeWidth = strokeWidth;
}

void wxDoughnutAndPieChartOptionsBase::SetPercentageInnerCutout(unsigned int cutout)
{
	m_percentageInnerCutout = cutout;
}

void wxDoughnutAndPieChartOptionsBase::SetShowTooltips(bool show)
{
	m_showTooltips = show;
}
