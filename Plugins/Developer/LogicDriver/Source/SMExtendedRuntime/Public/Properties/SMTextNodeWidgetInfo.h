// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "SMNodeWidgetInfo.h"

#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"

#include "SMTextNodeWidgetInfo.generated.h"

USTRUCT()
struct SMEXTENDEDRUNTIME_API FSMTextNodeWidgetInfo : public FSMTextDisplayWidgetInfo
{
public:
	GENERATED_USTRUCT_BODY()

	FSMTextNodeWidgetInfo();

	UPROPERTY(EditDefaultsOnly, Category = "Style")
	FInlineEditableTextBlockStyle EditableTextStyle;

	UPROPERTY(EditDefaultsOnly, Category = "Style")
	float WrapTextAt;
};
