//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol COSPasscodeChangeComplexViewControllerDelegate;

@interface COSPasscodeChangeComplexViewController
{
    _Bool _isViewVisible;	// 8 = 0x8
    id <COSPasscodeChangeComplexViewControllerDelegate> _passcodeChangeDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012c6e0
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(nonatomic) __weak id <COSPasscodeChangeComplexViewControllerDelegate> passcodeChangeDelegate; // @synthesize passcodeChangeDelegate=_passcodeChangeDelegate;
- (_Bool)isComplex;	// IMP=0x001000000012c69b
- (id)detailText;	// IMP=0x001000000012c567
- (id)titleText;	// IMP=0x001000000012c4fb
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000012c4f3
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000012c430
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000012c3d6

@end

