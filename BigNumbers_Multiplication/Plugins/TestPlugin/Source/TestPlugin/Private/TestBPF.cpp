// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBPF.h"
#include <string>
#include <algorithm>



FString UTestBPF::Calc(FString InDataA, FString InDataB)
{
	// calc sign
	int countSign = 0;
	if (InDataA.Len() > 0 && InDataA[0] == '-')
	{
		countSign++;
		InDataA.RemoveAt(0);
	}
	if (InDataB.Len() > 0 && InDataB[0] == '-')	
	{
		countSign++;
		InDataB.RemoveAt(0);
	}
	FString Result = countSign % 2 == 0 ? "" : "-";

	// FStiring A 2 Vector<int>
	string sa = TCHAR_TO_UTF8(*InDataA);
	vector<int> va;
	va.reserve(sa.size());
	for (int i = 0; i < sa.size(); ++i)
	{
		va.push_back(sa[i] - '0');
	}
	
	// FStiring B 2 Vector<int>
	string sb = TCHAR_TO_UTF8(*InDataB);
	vector<int> vb;
	vb.reserve(sb.size());
	for (int i = 0; i < sb.size(); ++i)
	{
		vb.push_back(sb[i] - '0');
	}

	// Calc result in vector<int>
	vector<int> vc(va.size() + vb.size() - 1, 0);
	CalcInVector(va, vb, vc);

	// convert vector<int> 2 FString
	for (auto a : vc)
	{
		Result.Append(FString::FromInt(a));
	}

	return Result;
}


// calc result use vector<int> 	
void UTestBPF::CalcInVector(const std::vector<int> &va, const std::vector<int> &vb, std::vector<int> &result)
{
	int i, j, k;
	int tmp;

	for (i = 0; i < va.size(); ++i)
	{
		k = i;
		for (j = 0; j < vb.size(); ++j)
		{
			result[k] = result[k] + va[i] * vb[j];
			k = k + 1;
		}
	}

	for (k = result.size() - 1; k >= 0; --k)
	{
		if (result[k] > 9)
		{
			if (k != 0)
			{
				result[k - 1] += result[k] / 10;
				result[k] %= 10;
			}
			else
			{
				tmp = result[k] / 10;
				result[k] %= 10;
				result.insert(result.begin(), tmp);
			}
		}
	}
}


