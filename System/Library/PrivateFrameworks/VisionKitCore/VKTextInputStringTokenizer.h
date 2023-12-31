//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextInputStringTokenizer.h>

@class VKCTextRecognitionResult;

__attribute__((visibility("hidden")))
@interface VKTextInputStringTokenizer : UITextInputStringTokenizer
{
    VKCTextRecognitionResult *_recognitionResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ae3c
@property(retain, nonatomic) VKCTextRecognitionResult *recognitionResult; // @synthesize recognitionResult=_recognitionResult;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000003ade8
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000003adb9
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000003ad10
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x000000000003abe3
- (id)initWithTextInput:(id)arg1 recognitionResult:(id)arg2;	// IMP=0x000000000003ab6b

@end

