//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface CRLWPTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _shouldInformDelegateOfReset;	// 8 = 0x8
    long long _inputType;	// 16 = 0x10
    unsigned long long _tapCount;	// 24 = 0x18
}

@property(nonatomic) _Bool shouldInformDelegateOfReset; // @synthesize shouldInformDelegateOfReset=_shouldInformDelegateOfReset;
@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
- (void)setInputType:(long long)arg1;	// IMP=0x0010000000570f92
- (long long)inputType;	// IMP=0x0010000000570f81
- (void)reset;	// IMP=0x0010000000570eba
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000570d71

@end

