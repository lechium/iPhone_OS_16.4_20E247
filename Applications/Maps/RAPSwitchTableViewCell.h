//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPPlaceCorrectableFlag, UISwitch;
@protocol RAPSwitchTableViewCellDelegate;

@interface RAPSwitchTableViewCell
{
    id <RAPSwitchTableViewCellDelegate> _delegate;	// 8 = 0x8
    UISwitch *_toggle;	// 16 = 0x10
    RAPPlaceCorrectableFlag *_correctableFlag;	// 24 = 0x18
    _Bool _switchState;	// 32 = 0x20
}

- (void);	// IMP=0x00200000006d5473
@property(readonly, nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(retain, nonatomic) RAPPlaceCorrectableFlag *correctableFlag; // @synthesize correctableFlag=_correctableFlag;
- (void)updateSwitchState:(_Bool)arg1;	// IMP=0x00100000006d53f6
- (void)updateValue:(id)arg1;	// IMP=0x00100000006d5377
@property(readonly, nonatomic) long long kind;
- (void)_updateContent;	// IMP=0x00100000006d52b5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000006d5155

@end

