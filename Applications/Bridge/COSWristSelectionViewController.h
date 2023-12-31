//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSHorizontalCheckmarkChoiceView;

@interface COSWristSelectionViewController
{
    COSHorizontalCheckmarkChoiceView *_choiceView;	// 8 = 0x8
}

+ (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x00200000000868c5
+ (void)resumePairingWithSavedValue:(id)arg1;	// IMP=0x0010000000085e42
+ (_Bool)controllerNeedsToRun;	// IMP=0x0010000000085dc6
- (void).cxx_destruct;	// IMP=0x0020000000086be5
@property(retain, nonatomic) COSHorizontalCheckmarkChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void)choiceView:(id)arg1 didSelectChoice:(unsigned long long)arg2;	// IMP=0x0010000000086bba
- (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x0010000000086828
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x0010000000086607
- (id)suggestedButtonTitle;	// IMP=0x001000000008659b
- (id)imageResource;	// IMP=0x0010000000086529
- (_Bool)wantsDefaultImageResource;	// IMP=0x0010000000086521
- (id)detailString;	// IMP=0x0010000000086455
- (id)titleString;	// IMP=0x00100000000863e9
- (void)viewDidLoad;	// IMP=0x0010000000085e7e
- (_Bool)requiresActivationCheck;	// IMP=0x0010000000085e76
- (id)init;	// IMP=0x0010000000085d75

@end

