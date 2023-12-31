//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIStackView;

@interface CRLiOSInspectorMultiButtonCell
{
    NSArray *_buttons;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    UIStackView *_stackView;	// 24 = 0x18
}

+ (id)cellWithButtons:(id)arg1 style:(long long)arg2;	// IMP=0x00200000001078b2
- (void).cxx_destruct;	// IMP=0x0020000000107a95
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) _Bool isUserCurrentlyInteracting;
- (id)initWithButtons:(id)arg1 style:(long long)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0010000000107471

@end

