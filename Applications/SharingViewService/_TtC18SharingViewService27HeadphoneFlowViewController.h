//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC18SharingViewService27HeadphoneFlowViewController
{
    MISSING_TYPE *router;	// 8 = 0x8
    MISSING_TYPE *interactor;	// 24 = 0x18
    MISSING_TYPE *presenter;	// 64 = 0x40
    MISSING_TYPE *homePressed;	// 88 = 0x58
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000000c1e70
- (void).cxx_destruct;	// IMP=0x00400000000c24f0
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000000c2400
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000c1e60
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000c1e10
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1c50
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c11d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000c1180

@end

