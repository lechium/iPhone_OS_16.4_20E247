//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIButton;
@protocol NSObject><NSCopying;

@interface MapsRadioButton : UIControl
{
    UIButton *_button;	// 8 = 0x8
    int _controlSize;	// 16 = 0x10
    id <NSObject><NSCopying> _groupIdentifier;	// 24 = 0x18
}

+ (id)buttonWithGroupIdentifier:(id)arg1;	// IMP=0x004000000029d40a
- (void).cxx_destruct;	// IMP=0x002000000029dbe8
@property(nonatomic) int controlSize; // @synthesize controlSize=_controlSize;
@property(copy, nonatomic) id <NSObject><NSCopying> groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000029dbb5
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000029db9f
- (double)sizingLength;	// IMP=0x001000000029db7b
- (void)_buttonTapped:(id)arg1;	// IMP=0x001000000029db43
- (void)_otherButtonDidChange:(id)arg1;	// IMP=0x001000000029da15
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000029d487

@end
